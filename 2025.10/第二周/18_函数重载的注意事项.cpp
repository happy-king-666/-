#include<stdio.h>
#include<iostream>
using namespace std;

//函数重载的注意事项 

//1.引用作为重载条件 

void func (int &a)
{
	printf("func(int &a)的调用\n");
	
}

void func (const int &a)	//const,只读不写 
{
	printf("func(const int &a)的调用\n");
	
}

//2. 函数重载碰到默认参数 
//函数重载碰到默认参数,会出现二义性,报错,尽量避免这样的错误 

void func2 (int a,int b=10)
{
	printf("func(int a,int b)的调用\n");
	
}

void func2 (int a)
{
	printf("func(int a)的调用\n");
	
}

main(){
	
	int a=10;
	func(a);
	
	func(10); 
	
//	func2(10); //函数重载碰到默认参数,会出现二义性,报错,尽量避免这样的错误 
	
}


