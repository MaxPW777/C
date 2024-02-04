/*
** MAX PROJECT
** Impossible fir tree
*/

#include "header.h"

void print_log(int treeSize, int logSize)
{
    int gapSize = treeSize / 2 - logSize;
    for (size_t i = 0; i < logSize; i++)
    {
        for (size_t i = 0; i < gapSize; i++)
        {
            printf(" ");
        }
        for (size_t i = 0; i < logSize; i++)
        {
            printf("|");
        }
        for (size_t i = 0; i < gapSize; i++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

void print_line(int size){
    for (size_t i = 0; i < size; i++)
    {
        printf("*");
    }
    printf("\n");
}

void print_leaves(int size){
    for (size_t segmentAmount = 1; segmentAmount <= size; segmentAmount++)
    {
        for (size_t segmentSize = 0; segmentSize < 5; segmentSize++)
        {
            print_line(segmentSize);
        }
        printf("\n");
    }
    
}

int main()
{
    print_leaves(2);
    
    return 0;
}
