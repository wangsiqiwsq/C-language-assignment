#include<stdio.h>
int main(){
//T1
    int year;
    int day;
    printf("请输入年份：\n");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0)||(year%400==0)){
        day=29;
    }
    else{
        day=28;
    }
    printf("1月31天，2月%d天，3月31天，4月30天，5月31天，6月30天，7月31天，8月31天，9月30天，10月31天，11月30天，12月31天\n",day);
//T2
    int a,b,c;
    printf("请输入三个整数（用逗号分隔），以比较哪个数最小：\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a<=b && a<=c){
        printf("%d最小\n",a);
    }
    else if(b<=c){
        printf("%d最小\n",b);
    }
    else{
        printf("%d最小\n",c);
    }
//T3
    getchar();
    int bit[8];
    char zifu;
    printf("请输入一个字符：");
    scanf("%c",&zifu);
    for(int d=7;d>=0;d--){
        bit[d]=zifu%2;
        zifu=zifu/2;
    }
    printf("The eighth bit is %d,\n",bit[0]);
    printf("The seventh bit is %d,\n",bit[1]);
    printf("The sixth bit is %d,\n",bit[2]);
    printf("The fifth bit is %d,\n",bit[3]);
    printf("The fourth bit is %d,\n",bit[4]);
    printf("The third bit is %d,\n",bit[5]);
    printf("The second bit is %d,\n",bit[6]);
    printf("The first bit is %d,\n",bit[7]);
//T4
    int num1,sum1;
    sum1=0;
    printf("请输入一个正整数，以计算从1开始累加到它的和：\n");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        sum1=sum1+i;
    }
    printf("1+2+3+...+%d之和为%d\n",num1,sum1);
//T5
    int num2,sum2;
    printf("请输入一个正整数，以计算从1到它之间所有奇数的和：\n");
    scanf("%d",&num2);
    for(int j=1;j<=num2;j+=2){
       sum2=sum2+j;
    }
    printf("从1到%d之间所有奇数的和为%d\n",num2,sum2);
    return 0;
}
