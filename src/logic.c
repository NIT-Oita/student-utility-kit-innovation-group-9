//担当 小股
//test文章
#include "common.h"

int output(){
    printf("\n\n\x1b[34m~~~~~~~~~~~~~~~\x1b[39m\n課題出力(上から順)\n\x1b[34m~~~~~~~~~~~~~~~\x1b[39m\n\n");
    DATA task[MAX_TASKS];
    int count = 0;
    csv_yomikomi(task,&count);

    if(count == 0){
        printf("\x1b[31m~~\x1b[39m課題存在確認不可。入力待機\x1b[31m~~\x1b[39m\n\n");
        return 0;
    }

    for(int i = 0; i < count; i++){
        printf("課題名:%s\n", task[i].name);
        printf("締切:%s\n", task[i].deadline);
        printf("優先度:%d\n", task[i].yuusen);
        if(task[i].done == 0){
            printf("現在状態:\x1b[32m完了\x1b[39m\n");
        }else{
            printf("現在状態:\x1b[31m未完了\x1b[39m\n");
        }
        printf("\x1b[32m--------------------\x1b[39m\n\n");
    }
    return 0;
}

int narabikae(const void *a, const void *b){
    DATA *taskA = (DATA *)a;
    DATA *taskB = (DATA *)b;
    return taskB->yuusen - taskA->yuusen;
}

int output_r(){
    printf("\n\n\x1b[34m~~~~~~~~~~~~~~~\x1b[39m\n課題出力(優先度順)\n\x1b[34m~~~~~~~~~~~~~~~\x1b[39m\n\n");
    DATA task[MAX_TASKS];
    int count = 0;
    csv_yomikomi(task, &count);

    if(count == 0){
        printf("\x1b[31m~~\x1b[39m課題存在確認不可。入力待機\x1b[31m~~\x1b[39m\n\n");
        return 0;
    }

    qsort(task, count, sizeof(DATA), narabikae);
    for(int i = 0; i < count; i++){
        printf("課題名:%s\n", task[i].name);
        printf("締切:%s\n", task[i].deadline);
        printf("優先度:%d\n", task[i].yuusen);
        if(task[i].done == 0){
            printf("現在状態:\x1b[32m完了\x1b[39m\n");
        }else{
            printf("現在状態:\x1b[31m未完了\x1b[39m\n");
        }
        printf("\x1b[32m--------------------\x1b[39m\n\n");
    }
    return 0;
}

int input(){
    DATA task;
    printf("追加する課題名を入力\n\x1b[33m>>>\x1b[39m");
    scanf("%s",task.name);
    printf("課題の締め切りを入力(YYYY-MM-DD)\n\x1b[33m>>>\x1b[39m");
    scanf("%s",task.deadline);
    printf("課題の優先度を入力(1~10)\n\x1b[33m>>>\x1b[39m");
    scanf("%d",&task.yuusen);
    if(task.yuusen > 10){
        task.yuusen = 10;
    }
    printf("課題の完了の有無を入力(終了済み:0 未終了:1)\n\x1b[33m>>>\x1b[39m");
    scanf("%d",&task.done);

    csv_kakikomi(&task);
    return 0;
}