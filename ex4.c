/******************
Name:
ID:
Assignment: ex4
*******************/
#include <stdio.h>
#include <stdlib.h>

/* The human pyramid always has this many levels. */
#define PYRAMID_SIZE 5
/* Each cheerleader passes half of her load to each supporter. */
#define HALF 0.5
/* Generate Sentences: longest single term and most terms per list. */
#define LONGEST_TERM 20
#define MAX_TERMS 10
/* Largest board the Queens Battle task has to support. */
#define MAX_BOARD_SIZE 20

/* Menu options handled by main. */
#define HUMAN_PYRAMID 1
#define PARENTHESIS_VALIDATION 2
#define GENERATE_SENTENCES 3
#define QUEENS_BATTLE 4
#define EXIT 5

/*
 * Entry points called by main. Implement them below.
 * Do NOT change main and do NOT change these signatures.
 * You may add any helper functions you need and call them from here.
 * Remember: no loops anywhere in your code - input, traversal and output
 * must all be recursive. The only loops in this program are in main.
 */
void task1HumanPyramid(void);
void task2ParenthesisValidator(void);
void task3GenerateSentences(void);
void task4QueensBattle(void);

int main(void)
{
    int task = -1;

    do
    {
        printf("Choose an option:\n"
               "1. The Human Pyramid\n"
               "2. Parenthesis Validation\n"
               "3. Generate Sentences\n"
               "4. Queens Battle\n"
               "5. Exit\n");

        if (scanf("%d", &task) == 1)
        {
            switch (task)
            {
            case EXIT:
                printf("Goodbye.\n");
                break;
            case HUMAN_PYRAMID:
                task1HumanPyramid();
                break;
            case PARENTHESIS_VALIDATION:
                task2ParenthesisValidator();
                break;
            case GENERATE_SENTENCES:
                task3GenerateSentences();
                break;
            case QUEENS_BATTLE:
                task4QueensBattle();
                break;
            default:
                printf("Please choose a task number from the list.\n");
                break;
            }
        }
        else if (feof(stdin))
        {
            /* Input ended without an Exit option: stop instead of looping forever. */
            break;
        }
        else
        {
            /* Non-numeric input: discard the token and show the menu again. */
            scanf("%*s");
        }
    } while (task != EXIT);

    return 0;
}

void task1HumanPyramid(void)
{
    /*
     * Prompt for the 15 weights (read them recursively), then print the
     * total load on each cheerleader in pyramid form (traverse recursively).
     * Write a recursive function that, given (row, column) and all the
     * weights, returns the total load on that cheerleader. Do not reuse
     * previously computed loads.
     */
    // Todo
}

void task2ParenthesisValidator(void)
{
    /*
     * Read characters until '\n' (recursively, one char at a time - no
     * strings) and report whether (), [], {} and <> are balanced.
     */
    // Todo
}

void task3GenerateSentences(void)
{
    /*
     * Read three lists of terms - subjects, verbs, objects - each term on
     * its own line (at most LONGEST_TERM characters, at most MAX_TERMS per
     * list). Store them as char arrays, e.g. char subjects[MAX_TERMS][LONGEST_TERM + 1].
     * Then print every <subject> <verb> <object> sentence, numbered, in input
     * order. Reading, storing and printing must all be recursive, and string.h
     * is not allowed: handle the characters yourself.
     */
    // Todo
}

void task4QueensBattle(void)
{
    /*
     * Read the board size and the region grid (recursively), place the
     * queens with recursive backtracking, and print the solution grid
     * (recursively) or the "cannot be solved" message.
     */
    // Todo
}
