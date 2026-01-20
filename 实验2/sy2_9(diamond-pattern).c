#include<stdio.h>
int main(){
    int n,j,k,y,z;
    printf("请输入一个奇数，将会打印一个高度为它的菱形图案：\n");
    scanf("%d",&n);
    for(int i=1;i<=(n+1)/2;i++){
        for(j=1;j<=(n+1)/2-i;j++){
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++){
            printf("*");
            if(k==i*2-1){
                printf("\n");
            }
        }
    }
    for(int x=1;x<=(n-1)/2;x++){
        for(y=1;y<=x;y++){
            printf(" ");
        }
        for(z=1;z<=n-2*x;z++){
            printf("*");
            if(z==n-2*x){
                printf("\n");
            }
        }
    }
    return 0;
}
