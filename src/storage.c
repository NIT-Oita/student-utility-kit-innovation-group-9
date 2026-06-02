//担当 池田
#include "common.h"

//このコメントが見えているということはこのファイルは不完全だということです。現状このコードはテストビルドの為にmain関数を使っています。それに留意すること

int main(void){
    printf("テストファイル生成\n");
    FILE *fp;
    fp = fopen("test.txt","w");
    if (fp == NULL){
        printf("ファイル作成エラー\n");
        return 114514;
    }

    fprintf(fp,"テストテキスト入力\n");

    fclose(fp);

    printf("正常終了");

    return 0;
}