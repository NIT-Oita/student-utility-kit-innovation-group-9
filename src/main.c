//担当 田邊
//テスト002
#include<stdio.h>
#include"common.h"
int main(void)
{
    int  id;
    char title[64];
    char deadline[11];  /* YYYY-MM-DD */
    int  priority;      /* 1..5      */
    int  done;          /* 0 or 1    */
    

    printf("=========素晴らしき課題管理ツール=========\n\n");

    printf("追加する課題を入力して！\n");
    scanf("%s",title);

    printf("課題の締め切りを入力して！ (YYYY-MM-DD)\n");
    scanf("%s",deadline);

    printf("課題の優先度を入力して！ (1~5)\n");
    scanf("%d",&priority);

    printf("課題は完了してる？(終わってる:0   終わってない:1)\n");
    scanf("%d",&done);

    printf("\n\n===課題の概要===\n\n");
    printf("課題：%s \n",title);
    printf("期限：%s \n",deadline);
    printf("優先度：%d \n",priority);
    if(done==1){
            printf("状態：未完了．．．\n");
    }else if(done==0){
            printf("状態：完了！！\n");
    }else{
            printf("0か1を入力しろカス");
    }
   





    int storage();//テストファイル入出力

    


    
    
    



}