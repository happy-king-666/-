//引用做函数的返回值	注意 
//1.不要返回局部变量的引用
//2.函数的调用可以作为左值 
#include<stdio.h>
#include<iostream>
using namespace std;
int& test01(){
	int a=10;//存放在四区中的栈区 
	return a;
}

int& test02(){
	static int a=99;//存放在四区中的全局区 
	return a;
}
main(){
	int &ref1 =test01();
	cout<<"ref1="<<ref1<<endl;//第一次打印有值是因为系统做了保留 
	cout<<"ref1="<<ref1<<endl;
	int &ref2 =test02();	
	cout<<"ref2="<<ref2<<endl;
	cout<<"ref2="<<ref2<<endl;
	test02()=33;	//函数的返回值是引用 这个函数可以用作左值 
	cout<<"ref2="<<ref2<<endl;
	cout<<"ref2="<<ref2<<endl;
}
//警告是因为返回了局部变量的引用 
