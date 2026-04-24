//阶乘的学习 -class1
#include<stdio.h>
int jiecheng (int n){
if(n==1||n==0){
return 1;}
return n * jiecheng(n-1) ;
}
 int main(){

int n= 7;
printf("%d!=%d",n,jiecheng (n));

return 0 ;
}
//时间复杂程度为：