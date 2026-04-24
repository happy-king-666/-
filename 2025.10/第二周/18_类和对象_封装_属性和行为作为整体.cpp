#include<stdio.h>
#include<iostream>
using namespace std;

//设计一个园类,求圆的周长
//公式：2 * PI * 半径 
const double PI =3.14;

//class 代表设计一个类,类后的是类名 
class Circle
{
	//访问权限
	//公共权限 
	public:
	//属性
	int m_r;
	//行为 
	double cal(){
		
		return 2 * PI * m_r;
	}
 } ;

main(){
	
	//通过类,创建一个具体的对象.
	//专业名词叫作 实例化  
	 Circle c1;
	 c1.m_r =10;
	 
	 printf("圆的周长：%f\n",c1.cal());
	
	
	
} 
