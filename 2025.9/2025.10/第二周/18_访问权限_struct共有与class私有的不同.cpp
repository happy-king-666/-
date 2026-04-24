#include<stdio.h>
#include<iostream>
using namespace std;


 
class C1{
	//类默认权限私有 
	int m_A;
	 
};
 
struct C2{
	//结构体默认权限共有 
	int m_A;
		
};
int main(){
	C1 c1;
//	c1.m_A=100;//不可访问所以报错 
	C2 c2;
	c2.m_A=100;
	
	
	
}
