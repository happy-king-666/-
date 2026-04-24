#include<stdio.h>
#include<iostream>
using namespace std;

//函数重载,函数名相同,提高复用性 

//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同,或者个数不同,顺序不同 

//函数的返回值不可以作为函数重载的条件 

void func ()
{
	printf("func的调用\n");
	
}
void func (int a)
{
	printf("func(int a)的调用\n");
	
}
void func (int a ,double b)
{
	printf("func(int a ,double b)的调用\n");
	
}
void func (double a ,int b)
{
	printf("func(double a ,int b)的调用\n");
	
}


main (){
	
	func ();
	func (10);
	func (3.14);
	func (10,3.14);
	func (3.14,10);
	
} 
