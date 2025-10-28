//表达式1?表达式2:表达式3 当1为真时执行2,当1不为真时执行3 
#include<stdio.h> 
main(){
	int a=12,b=50,c=0;
	c= (a>b?a:b);
	 printf("%d\n",c);
	//可以给返回值变量继续赋值 
	(a>b?a:b)=100;
	printf("%d\n",a);
	printf("%d\n",b);
}
