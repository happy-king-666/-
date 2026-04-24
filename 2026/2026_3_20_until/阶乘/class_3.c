//n的阶乘
#include<stdio.h>
int jiecheng(int n){
if(n==1|n==0){
    return 1;
}
return n*  jiecheng(n-1);
}
int main(){
    int n;
    printf("输入所求的阶乘\n");
    scanf("%d",&n);
    printf("%d的阶乘是%d\n",n,jiecheng(n));


    
    return 0 ;

}