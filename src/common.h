#ifndef LOGIC_H
#define LOGIC_H
#define MAX_TASKS 100
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
typedef struct{
    char name[1024];
    char deadline[1024];
    int yuusen;
    int done;
} DATA;

int file_kakunin();
int output();
int output_r();
int input();
int csv_kakikomi(DATA *task);
int csv_yomikomi(DATA task[], int *count);
int narabikae(const void *a, const void *b);

#endif