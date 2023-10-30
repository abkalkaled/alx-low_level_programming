#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1; // Invalid filename
    }

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return -1; // File could not be created or opened
    }

    if (text_content != NULL) {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(fd);
            return -1; // File could not be written
        }
    }

    close(fd);
    return 1; // File created and written successfully

