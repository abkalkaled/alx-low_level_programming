#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <elf.h>

void print_elf_info(Elf64_Ehdr *header) {
    printf("Magic\n");
    printf("Class:                             %d-bit ELF\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
    printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (header->e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("UNKNOWN\n"); break;
    }

    printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }
    if (fd == -1) {
        perror("Error");
        return 98;
    }
    if (read(fd, &header, sizeof(header)) != sizeof(header)/* Error: Unable to read ELF header */) {
        fprintf(stderr, "Error: Unable to read ELF header\n");
        close(fd);
        return 98;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_info(&header);

    close(fd);
    return 0;
}

