#include <stdio.h>

int main() {
    char *names[] = {"kim", "lee", "park", "choi", "jeong"};

    for (int i = 0; i < 5; i++) {
        char *c = *(names + i);

        while (*c != '\0') {
            printf("%c", *c);
            c++;
        }
        printf("\n");
    }

    return 0;
}