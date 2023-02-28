#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void) {
    char password[PASSWORD_LENGTH + 1]; 
    const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    srand(time(NULL));
    int i;
    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % sizeof(charset)];
    }

    password[PASSWORD_LENGTH] = '\0'; 

    printf("Random password: %s\n", password);

    return 0;
}
