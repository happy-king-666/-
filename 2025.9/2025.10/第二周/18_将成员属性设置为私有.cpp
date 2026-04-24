#include<stdio.h>
#include<iostream>
using namespace std;

//成员属性设置为私有 
//1.控制读写权限。
//2.检测数据有效性 

class Person{
	
public:
	//设置姓名 
	void setName(string name){
		m_Name =name;
	}
	//获取姓名 
	string getName(string name){
		
		return m_Name;
	}
	//获取年龄 
	int getAge(){
		
		return m_Age;
	} 
	//写入Idol
	void getIdol(string Idol)
	{
		m_Idol=Idol;
	} 
	void setAge(int age)
	{		
		if(age<0||age>150)
		{
			cout<<"年龄输出有误"<<endl; 
		return ; 
		}			
	m_Age=age;
	} 


private:	//只读 
	
	string m_Name; 	//可读写 
	
	int m_Age =19;	//只读不写 	/验证+可写 
	
	string m_Idol;	//只写不读 
	
}; 

int main(){
	Person p1;
	p1.setName("张三");
//不可写入	p1.m_Age; 
	cout<<"年龄"<<p1.getAge()<<endl;
	p1.getIdol("蔡徐坤"); 
//不可读	cout<<"Idol"<<p1.getIdol()<<endl;
	p1.setAge(66);
//	p1.getAge();
	cout <<"年龄"<<p1.getAge()<<endl; 
	
} 

