#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// PRINTS A LONG LINE OF SPACED UNDERSCORES

void printLongLineOfUnderscores()
{
    int LongLineOfUnderscoresCount = 14;

    for (int i = 0; i < LongLineOfUnderscoresCount; i++)
    {
        printf(" _ ");
        Sleep(100);
    }
    printf(" _");
}

// PRINTS THE INIT COUNTDOWN

void countdownPrint()
{
    int countdownNumber = 3;

    printf("\n\n");

    while (countdownNumber > 0)
    {
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

    printf("\n");
}

// PRINTS ELLIPSIS ANIMATION

void printEllipsisAnimation()
{
    int printEllipsisAnimationDotsCount = 2;

    for (int i = 0; i < printEllipsisAnimationDotsCount; i++)
    {
        printf(".");
        Sleep(1000);
    }
    printf(".\n\n");
    Sleep(400);
}

// QUICKLY PRINTS A LONG LINE OF DOTS

void printFastLongLineOfDots()
{
    int FastLongLineOfDotsCount = 24;

    for (int i = 0; i < FastLongLineOfDotsCount; i++)
    {
        printf(".");
        Sleep(100);
    }
    printf(".\n\n");
}

// MAIN FUNCTIONALITY WHERE RANDOM ARRAYS OF PHRASES ARE STORED AND PRINTED

void randomPhraseOutputLoop()
{

#define NUMBER_OF_ALPHA_STATEMENTS 20
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
            "booting to drive",
            "connecting to server",
            "waiting for ip to resolve",
            "serving utility packets",
            "parsing database",
            "booting connection"
        };

#define NUMBER_OF_BETA_STATEMENTS 20
#define BETA_STATEMENT_MAX_STRING_SIZE 100

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
            "fetching data with current port",
            "dumping cache",
            "extending library functionalities",
            "updating utility libraries",
            "sanitizing payloads",
        };

#define NUMBER_OF_GAMMA_STATEMENTS 20
#define GAMMA_STATEMENT_MAX_STRING_SIZE 100

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
            "integrating data packet",
            "parsing infomap",
            "scraping XML sourcemap",
            "sending update to essential utilities",
            "upscaling data mapping",
        };

    // INFINITE WHILE LOOP
    int i = 1;
    while (i = 1)
    {
        printf("%s", alphaStatement[rand() % 20]);
        printEllipsisAnimation();
        Sleep(1000);
        printf("%s\n", betaStatement[rand() % 20]);
        Sleep(200);
        printf("%s\n", gammaStatement[rand() % 20]);
        Sleep(200);
        printFastLongLineOfDots();
    }
}

void main()
{
    printLongLineOfUnderscores();
    printf("\n\n\n\t<RANDOM GARBAGE TERMINAL>\n\n");
    printLongLineOfUnderscores();
    // PRINTS INITIAL STARTUP COUNTDOWN
    countdownPrint();
    randomPhraseOutputLoop();
}