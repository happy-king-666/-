//指针作为函数的形参 （小问题） 
#include<stdio.h>//想改变实参用指针函数，不想改变就用普通函数 
	void swap01(int a,int b);	//值传递部分 利用定义函数void_函数名（int a,int b）（形参）——形参不变实参变 
	void wsap02(int *a,int *b)//地址传递 可以更改实参 
	{int temp;//temp作为临时储存变量,不能加上*成为指针的形式，否则程序运行会出现错误 ---（问题） 
	temp = *a;//将*a的值赋给temp所以temp=*a,之前使用*a=temp时是将temp的值赋给了*a所以程序出现问题 
	*a = *b;
	*b = temp;
	}
main(){
	int a=20, b=30;
	wsap02(&a,&b);
	printf("a=%d,b=%d,",a,b);//在此输出时不需要&a,&b因为加上了取址符就变成了打印输出该数字的地址存储 
	
	return 0;
} 
