#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character
char getRandomChar() {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

// Function to generate a random password
void generatePassword(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int length = 12; // Change the length as needed
    char password[length + 1]; // +1 for the null terminator

    generatePassword(password, length);

    printf("Generated Password: %s\n", password);

    return 0;
}

