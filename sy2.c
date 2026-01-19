#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    char reverse[100];
    int size;
    printf("请输入一个整数，之后会将它反转并输出：\n");
    scanf("%s",string);
    size=strlen(string);
    for(int i=0;i<=size-1;i++){
        reverse[size-i-1]=string[i];
    }
    reverse[size]=0;
    printf("反转后为：%s\n",reverse);
}
