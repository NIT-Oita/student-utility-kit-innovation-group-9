//担当 田邊
//テスト002
#include"common.h"
int main(void)
{
    printf("\x1b[32m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\x1b[39m\n\n");
    printf("素晴らしき課題管理ツール\n\n");
    printf("\x1b[32m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\x1b[39m\n\n");

    FIRST://入力か出力か聞く

    printf("\x1b[36m~~~\x1b[39m課題を出力or入力します(出力は""1""を入力は""2""を)\x1b[36m~~~\x1b[39m\n");
    int key = 0;
    printf("\x1b[33m>>>\x1b[39m");
    scanf("%d",&key);
    if(key == 1){
        goto OUTPUT;
    }
    if(key == 2){
        goto INPUT;
    }

    OUTPUT://出力担当
    int kakunin = 0;
    printf("\x1b[34m~~~\x1b[39m上から出力(1)or優先度出力(2)?\x1b[34m~~~\x1b[39m\n");
    printf("\x1b[33m>>>\x1b[39m");
    scanf("%d",&kakunin);
    if(kakunin == 1){
        file_kakunin();
        output();
        goto FIRST;
    }else{
        file_kakunin();
        output_r();
        goto FIRST;
    }

    INPUT://入力担当
    input();
    goto FIRST;

}