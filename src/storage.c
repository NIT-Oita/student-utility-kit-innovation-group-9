#include "common.h"

//このコメントが見えているということはこのファイルは不完全だということです。現状このコードはテストビルドの為にmain関数を使っています。それに留意すること

int file_kakunin(){
    FILE *fp;
    fp = fopen("data.csv", "r");
    if(fp == NULL){
        fp = fopen("data.csv","w");
    }
    fclose(fp);
    return 0;
}

int csv_kakikomi(DATA *task){
    file_kakunin();
    FILE *fp;
    fp = fopen("data.csv","a");

    fprintf(fp,"%s,%s,%d,%d\n",
        task->name,
        task->deadline,
        task->yuusen,
        task->done
    );

    fclose(fp);

    return 0;
}

int csv_yomikomi(DATA task[], int *count){
    FILE *fp;
    fp = fopen("data.csv","r");
    while(fscanf(fp,"%[^,],%[^,],%d,%d\n",
        task[*count].name,
        task[*count].deadline,
        &task[*count].yuusen,
        &task[*count].done) != EOF)
    {
        (*count)++;
        if(*count >= MAX_TASKS){
            break;
        }
    }
    fclose(fp);
    return 0;
}