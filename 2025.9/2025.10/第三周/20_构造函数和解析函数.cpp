#include<stdio.h>
#include<iostream>
using namespace std;

//构造函数语法类型：1.无返回值，不写void	2.函数名类名相同	
//3.可以有参，可重载	4.程序在创建对象前自动调用，无需手动调用 


//析构函数语法类型: 1. 无返回值，不写void	2.函数名类名相同在名称前加上符号~ 
//3.析构函数不可有参数，不可重载	4. 程序在销毁对象前自动调用，无需手动调用 

class Person{
public:	
//构造函数 
	Person (){
		
		cout <<"Person 构造函数调用"<<endl ;//你不写程序默认为空 
	}

//析构函数
 ~Person(){
 	
 	cout<<"Person 析构函数调用"<<endl; //你不写程序默认为空 
 	
 }
 }; 
void test01(){
	
	Person p;
}


int main(){
	//test01();
	Person p;
	return 0; 
}
