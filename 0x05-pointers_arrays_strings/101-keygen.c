#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void) {
    char password[PASSWORD_LENGTH + 1]; // Add one for the null terminator
    const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    srand(time(NULL)); // Seed the random number generator with the current time

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % sizeof(charset)];
    }

    password[PASSWORD_LENGTH] = '\0'; // Add the null terminator

    printf("Random password: %s\n", password);

    return 0;
}
