#include<stdio.h>
#include<iostream>
using namespace std; 

//public     公共权限 	成员在类内可以访问 类外也可以访问 
//protected  保护权限 	成员在类内可以访问 类外也不可以访问		继承区别	子类可以访问父类内容 
//private	 私有权限 	成员在类内不以访问 类外也不可以访问		继承区别	子类不可以访问父类私有内容 

class Person{
	//公共权限
	public:
	string m_name;
	//保护权限
	 protected:
	string m_Car;
	//私有权限
	private:
		
	int m_care;
	
public:
 void func(){
 	m_name="张三";
 	m_Car="福特";
 	m_care =6466; 
 	
 }	
	
}; 

int main(){
	
	Person p1;
	
	p1.m_name ="李四";
	
	 
	
	
	
	
} 

