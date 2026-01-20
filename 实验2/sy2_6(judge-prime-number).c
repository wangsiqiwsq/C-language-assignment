#include<stdio.h>
int main(){
    int n,a;
    a=1;
    printf("请输入一个正整数，以判断是否为素数：\n");
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=0;
            break;
        }
    }
    if(a==0 || n==1){
        printf("no\n");
    }
    else{
        printf("yes\n");
    }
    return 0;
}
