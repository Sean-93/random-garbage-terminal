#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// PRINTS THE INIT COUNTDOWN

void initPrint()
{
    int countdownNumber = 3;

    while (countdownNumber > 0)
    {
        /* code */
        printf(" %d ", countdownNumber);

        Sleep(100);

        int initDotsNumber = 9;

        while (initDotsNumber > 0)
        {
            printf(". ");
            Sleep(100);
            initDotsNumber--;
        }

        printf("\n");

        countdownNumber--;
    }
}

// PRINTS ELLIPSIS ANIMATION

void printEllipsisAnimation()
{
    int printEllipsisAnimationDotsCount = 2;

    for (size_t i = 0; i < printEllipsisAnimationDotsCount; i++)
    {
        printf(".");
        Sleep(1000);
    }
    printf(".\n");
    Sleep(400);
}

// QUICKLY PRINTS A LONG LINE OF DOTS

void printFastLongLineOfDots()
{
    int FastLongLineOfDotsCount = 24;

    for (size_t i = 0; i < FastLongLineOfDotsCount; i++)
    {
        printf(".");
        Sleep(100);
    }
    printf(".\n");
}

void main()
{

#define NUMBER_OF_INIT_STATEMENTS 15
#define INIT_STATEMENT_MAX_STRING_SIZE 40

    char initStatement[NUMBER_OF_INIT_STATEMENTS][INIT_STATEMENT_MAX_STRING_SIZE] =
        {
            "loading",
            "initializing",
            "connecting",
            "downloading",
            "uploading",
            "optimizing",
            "compressing",
            "logging in",
            "connecting file manager",
            "FTP connecting",
            "routing",
            "sending report",
            "refactoring",
            "installing",
            "booting to drive"};

#define NUMBER_OF_CONTENT_STATEMENTS 14
#define CONTENT_STATEMENT_MAX_STRING_SIZE 40

    char contentStatement[NUMBER_OF_CONTENT_STATEMENTS][CONTENT_STATEMENT_MAX_STRING_SIZE] =
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
        initPrint();
        for (int i = 0; i < i + 1; i++)
        {
            printf("%s", initStatement[rand() % 7]);
            printEllipsisAnimation();
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