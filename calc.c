#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <expression>\n", argv[0]);
        return 1;
    }

    char command[100];
    snprintf(command, sizeof(command), "echo '%s' | bc -l", argv[1]);
    printf("%s = ", argv[1]);
    system(command);

    return 0;
}
