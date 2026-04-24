#include<stdio.h>
#include<iostream>
using namespace std;

//拷贝构造函数调用的三种情况



 
class Person{
public:
	
	Person(){
		cout<<"person的默认构造函数调用"<<endl;
	}	
	Person (int age){
 	 m_Age = age; // 新增赋值操作
		cout<<"person的有参构造函数调用"<<endl;
		
	} 
	Person (const Person &p){
		m_Age=p.m_Age; 
		cout<<"person的拷贝构造函数调用"<<endl;
	}	
	~Person(){
	cout<<"person的析构函数调用"<<endl;
	}
	int m_Age;
}; 

//1.使用一个已经创建完毕的对象来初始化一个新对象 

void test01(){
	Person p1(20);
	Person p2(p1);
 	cout<<"p2年龄为:"<< p2.m_Age<<endl;
} 
//2.值传递的方法给函数参数传值 
void work(Person P){
	
}
void test02(){
	Person P;
	work(P);
} 
//3. 以值方式返回局部对象
//未能完成拷贝,大概率编译器问题 
Person work1(){
	Person P1;
	cout<<(int*)&P1 <<endl;
	return P1;
}
void test03(){
	Person P =work1();
	cout<<(int*)&P<<endl;
} 





 int main(){
// 	test01();
 	test03();
 }
