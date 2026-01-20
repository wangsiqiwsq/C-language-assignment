#include<stdio.h>
int main(){
    int x,a;
    printf("请输入一个比较大的正整数，以输出从1到它的所有素数：\n");
    scanf("%d",&x);
    for(int i=2;i<=x;i++){
        a=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                a=0;
                break;
            }
        }
        if(a==1){
            printf("%d ",i);
        }
    }
    printf("\n");
}
