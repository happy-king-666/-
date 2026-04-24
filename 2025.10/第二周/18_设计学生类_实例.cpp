#include<stdio.h>
#include<iostream>
using namespace std;

class Student{
	//类中的属性和行为 统称为成员
	// 属性 成员属性 成员变量 
	//行为 成员函数 成员方法 
	
	
	//属性 
	public:
		string m_name;
		int m_score;
		
	
	//行为 
	void printf1(){
	cout<<m_name<<endl;
	cout<<m_score<<endl;

	}
		 //給性名赋值 方法2 
		void setname(string name) {
		m_name=name;
			
		} 
		void setscore(int score) {
		m_score=score;
			
		} 
};
main(){
	
	Student Stu;
	 //給性名赋值 方法1	
	Stu.m_name="张三";
	Stu.m_score =88;
	Stu.printf1();
	Stu.setname("王五");
	Stu.setscore(99);
	Stu.printf1();	
}

 
