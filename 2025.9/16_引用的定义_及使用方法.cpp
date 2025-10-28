//引用-语法：数据类型 &别名 =原名 
//注意事项 1- 引用必须初始化 2-初始化之后不可以改变 
#include<iostream> 
#include<stdio.h>
using namespace std;


main(){
	int a=10;
//  int &b 是错误的 
	int &b= a;
//  int &b=除a之外的也是错误  因为已经初始化 不能再改变	
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl; 
	 b=10100;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	int c=20;
	b=c; //在赋值后修改的为引用的数值 并且会传递给原数值 
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"a="<<c<<endl;

} 
