#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_days(int years)
{
    return years * 365.2425;
}

int main(int argc, char **argv)
{
    char name[100];
    int age;

    printf("Your name: ");
    scanf("%s", name);
    printf("Your age: ");
    scanf("%d", &age);
    printf("Hello, ");
    printf(name);
    printf(". You are %d days old.\n", get_days(age));

    if (argc > 1) {
        char cmd[80] = "touch /tmp/'";
        strcat(cmd, argv[1]);
        strcat(cmd, "'");
        system(cmd);
    }

    return 0;
}
