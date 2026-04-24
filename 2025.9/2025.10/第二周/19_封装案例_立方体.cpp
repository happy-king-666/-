#include <stdio.h>
#include <iostream>
using namespace std;

//1.创建立方体的类
//2.设计属性 
//3.设计行为 获取立方体的面积和体积 
//4. 分别用全局函数和成员函数 判断两个立方体是否相等 
class Cube{
public:
	//设置长
	void steL(int l){
		m_L=l;
	} 
	//获取长 
	int getL(){
		return m_L;
	} 
	//设置宽 
	void steW(int w){
		m_W=w;
	}
	//获取宽 	
	int getW(){
		return m_W;
	} 	
	//设置高 
	int steH(int h){
		m_H=h;
	}	
	//获取高 	
	int getH(){
		return m_H;
	} 	
	//获取立方体面积 
	int calcalateS (){
		
		return 2*m_L*m_W+2*m_L*m_H+2*m_H*m_W;
	}
	
	//获取立方体体积 
	int calcalateV (){
		return m_L*m_H*m_W;//AI给出的解决答案 
	}
	bool isSameByClass(Cube &c); 		
private:	
	int m_L; 
	int m_W;
	int	m_H;
	
};

	bool Cube::isSameByClass(Cube &c)
	{
	if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}else{
		return false;
		}	
	}

bool isSame(Cube &c1,Cube &c2){
	if(c1.getH()==c2.getH()&&c1.getL()==c2.getL()&&c1.getW()==c2.getW()){
		return true;
	}
	return false;
}

main(){
	Cube c1;
	c1.steH(10);
	c1.steL(10);
	c1.steW(10);
	
	cout <<"c1的面积为"<<c1.calcalateS()<<endl;
	
	cout <<"c1的面积为"<<c1.calcalateV()<<endl;
	
	Cube c2;
	c2.steH(10);
	c2.steL(10);
	c2.steW(20);	
	bool ret=isSame(c1,c2);
	if(ret){
		cout<<"c1=c2"<<endl;
		
	}else{
		cout<<"c1不等于c2"<<endl;
	}
	
		if(ret){
		cout<<"成员函数判断c1=c2"<<endl;
		
	}else{
		cout<<"成员函数判断c1不等于c2"<<endl;
	}
	
} 
