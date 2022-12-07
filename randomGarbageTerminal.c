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

    // THESE ARE ALL MULTIPLE ARRAYS OF STRINGS TO PIECE TOGRTHER- THINK MADLIBS-STYLE

#define NUMBER_OF_ALPHA_STATEMENTS 15
#define ALPHA_STATEMENT_MAX_STRING_SIZE 40

    char alphaStatement[NUMBER_OF_ALPHA_STATEMENTS][ALPHA_STATEMENT_MAX_STRING_SIZE] =
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

#define NUMBER_OF_BETA_STATEMENTS 15
#define BETA_STATEMENT_MAX_STRING_SIZE 40

    char betaStatement[NUMBER_OF_BETA_STATEMENTS][BETA_STATEMENT_MAX_STRING_SIZE] =
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
            "cleaning unused disk space",
        };

#define NUMBER_OF_GAMMA_STATEMENTS 15
#define GAMMA_STATEMENT_MAX_STRING_SIZE 255

    char gammaStatement[NUMBER_OF_GAMMA_STATEMENTS][GAMMA_STATEMENT_MAX_STRING_SIZE] =
        {
            "deleting excess memory load",
            "writing to excess memory",
            "allocating memory to drive",
            "writing to currently mounted drive",
            "deleting from currently mounted drive",
            "editing report",
            "compiling binary assets",
            "loading secondary assets",
            "deleting unused assets",
            "adding memory to the currently mounted drive",
            "deleting unused binary assets",
            "routing report to external drive",
            "derouting unused report assets",
            "mounting new drive",
            "unmounting drive",
        };

    // PRINTS INITIAL STARTUP COUNTDOWN
    initPrint();

    // INFINITE WHILE LOOP
    int i = 1;
    while (i = 1)
    {
        printf("%s", alphaStatement[rand() % 7]);
        printEllipsisAnimation();
        Sleep(1000);
        printf("%s\n", betaStatement[rand() % 7]);
        Sleep(200);
        printf("%s\n", gammaStatement[rand() % 7]);
        Sleep(200);
        printFastLongLineOfDots();
    }
}