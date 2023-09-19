#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * getRandomChar - gets random password
 *
 * Return: always 0;
 */
char getRandomChar(void)
{
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int index = rand() % (sizeof(charset) - 1);

    return (charset[index]);
}
void generatePassword(char *password, int length)
{
    for (int i = 0; i < length; i++)
    {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}

int main(void)
{
    srand(time(NULL));

    int length = 12;
    char password[length + 1];

    generatePassword(password, length);
    printf("Generated Password: %s\n", password);
    return (0);
}

