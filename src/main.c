//担当 田邊
//テスト002
#include<stdio.h>
#include<string.h>
#include"common.h"
int main(void)
{
    int  id;
    char title[100][256];
    char deadline[100][11];  /* YYYY-MM-DD */
    int  priority[100];      /* 1..5      */
    int  done[100];          /* 0 or 1    */
    int count = 0;

    printf("=========素晴らしき課題管理ツール=========\n\n");
while(1){
    printf("追加する課題を入力して！(終了:q)\n");
    scanf("%s",title[count]);


    if(strcmp(title[count], "q") == 0){
        break;
    }
    printf("課題の締め切りを入力して！ (YYYY-MM-DD)\n");
    scanf("%s",deadline[count]);

    printf("課題の優先度を入力して！ (1~5)\n");
    scanf("%d",&priority[count]);

    printf("課題は完了してる？(終わってる:0   終わってない:1)\n");
    scanf("%d",&done[count]);

    
    
    count ++;
}
    printf("\n===課題一覧===\n");

for(int i = 0; i < count; i++){
    printf("%d件目\n", i + 1);
    printf("課題:%s\n", title[i]);
    printf("期限:%s\n", deadline[i]);
    printf("優先度:%d\n", priority[i]);

    if(done[i] == 1){
        printf("状態:未完了\n");
    }else{
        printf("状態:完了\n");
    }

    printf("\n");
}




    int storage();//テストファイル入出力

    


    
    
    



}