//函数交换
#include <stdio.h>		//头文件 
void temp (int *a,int *b){//定义一个函数 
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("a=%d,这是地址符\n,a=%d\n",a,&a);//在定义时定义的是a/b的指针所以打印第一次的时候出现的是地址 
	printf("b=%d,这是地址符\n,b=%d\n",b,&b);//而第二次打印是加着取址符符号的所以会打印出a/b所存储的内容 
}			
main ()	{
	int a=10, b=20;
	printf("交换前a=%d,b=%d\n",a,b);
	temp(&a,&b);
	printf("交换后a=%d,b=%d\n",a,b);
	return 0;
	
}
