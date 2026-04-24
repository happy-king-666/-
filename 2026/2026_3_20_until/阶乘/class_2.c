//递归_斐波那契数列
#include <stdio.h>
int fib(int n){
if(n==1||n==2)
{
    return 1;
}
return fib(n-1)+fib(n-2);
}

int main(){

    int n;
    printf("请输入想要斐波那契函数的第几位\n");
    scanf("%d",&n);
    printf("%d的斐波那契数为%d\n",n,fib(n));

    return 0;
}