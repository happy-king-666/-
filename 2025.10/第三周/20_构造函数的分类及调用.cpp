#include<stdio.h>
#include<iostream>
using namespace std;

//分类：1.有参无参	2. 普通构造和拷贝构造
//调用方式:括号法,显示法，隐式转换法. 
class Person{
	
public:	
	int age;
	Person (){
		cout<<"无参(默认)构造函数"<<endl;
		 
	} 
	Person (int a){
		age =a;
		cout<<"有参构造函数"<<endl;
		 
	}
	~Person (){
		cout<<"析构函数"<<endl;
		 
	} 	
	//拷贝复制函数
	Person (const Person &p){
		//传入的所有属性传输	拷贝到我身上 
	age=p.age;
	cout<<"拷贝函数调用"<<endl;
		 
	} 
};

 void test01(){
 	
 	//括号法
	//	 Person p1; 
	//	 Person p2(10);
	//	 Person p3(p2);
	//调用默认构造的时候不要加()	
	//因为下面这行代码编译器会认为是函数的声明 
	//Person p1();
	
//	 cout<<"P2的年龄为"<<p2.age<<endl;
//	 cout<<"P2的年龄为"<<p3.age<<endl;
	 
	 //显示法
		 Person p1;
		 Person P2=Person(10);
		 Person P3=Person(P2);
	 // 显示法

	 	//Person(10);	//匿名对象,当前代码结束后，系统会立刻回收 
	 
	 //不要利用拷贝函数 初始化匿名对象; 编译器会认为是对象的声明 
	 
	 //隐式转换法 
 	//	Person p4 =10; 
 	
 	
 	
 }








main(){
	
	test01();
	
} 
