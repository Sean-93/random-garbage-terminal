#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printFastLongLineOfDots()
{
    int count = 24;

    for (size_t i = 0; i < count; i++)
    {
        printf(".");
        Sleep(100);
    }
    printf(".\n");
    Sleep(200);
}

void main()
{

#define NUMBER_OF_STRING 14
#define MAX_STRING_SIZE 40

    char initStatement[NUMBER_OF_STRING][MAX_STRING_SIZE] =
        {
            "loading...",
            "initializing...",
            "connecting...",
            "downloading...",
            "uploading...",
            "optimizing...",
            "compressing...",
            "logging in...",
            "connecting file manager...",
            "FTP connecting...",
            "routing...",
            "sending report...",
            "refactoring...",
            "installing...",
        };

    char contentStatement[NUMBER_OF_STRING][MAX_STRING_SIZE] =
        {
            "adding necessary drivers",
            "recognizing device",
            "entering The Wired",
            "carving digital pathway",
            "scanning disk",
            "balancing mainframe functions",
            "interacting with drivers",
            "adding framework",
            "loading disk",
            "mounting driver",
            "unmounting disk",
            "unmounting driver",
            "calculating memory",
            "exiting The Wired",
        };

    int i = 1;

    while (i = 1)
    {
        for (int i = 0; i < NUMBER_OF_STRING; i++)
        {
            printf("%s\n", initStatement[rand() % 7]);
            Sleep(1000);
            printf("%s\n", contentStatement[rand() % 7]);
            Sleep(200);
            printf("%s\n", contentStatement[rand() % 7]);
            Sleep(200);
            printf("%s\n", contentStatement[rand() % 7]);
            Sleep(200);
            printFastLongLineOfDots();
        }
    }
}