#include<stdio.h>
#include<iostream>
using namespace std;

//点类 
class Point{
public:
	int getX() { return m_x;}	//获取X 
	void setX(int x) { m_x = x;	}	//设置X 
	int getY(){return m_y;}//获取Y
	void setY(int y){m_y=y;}//设置Y
private:
	int m_x;
	int m_y;
};
//圆 类 
 class Circle{
public: 	
 	int getR(){return m_R;  }// 获取半径 
 	void setR(int r){m_R=r;	 }//设置半径 
 	Point getCent(){ return m_Center; }// 获取圆心 
 	void setCenter(Point center){m_Center=center; }	//设置圆心 
 	
 	
private:
	int m_R;
	Point m_Center	;
 	
 };
 
void isInCircle(Circle &c,Point &p){
	Point center = c.getCent();
    int centerX = center.getX();
    int centerY = center.getY();
    
    // 2. 获取点的坐标
    int pointX = p.getX();
    int pointY = p.getY();
    
    // 3. 计算距离的平方（(x1-x2)2 + (y1-y2)2）
    int distanceSq = (pointX - centerX) * (pointX - centerX) + 
                     (pointY - centerY) * (pointY - centerY);
    
    // 4. 计算半径的平方
    int radiusSq = c.getR() * c.getR();
    
    // 5. 判断并输出结果
    if (distanceSq < radiusSq) {
        cout << "点在圆内" << endl;
    } else if(distanceSq > radiusSq){
        cout << "点在圆外" << endl;
    }else{
        cout << "点在圆上" << endl;
    }
	
}

int main(){
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);
	
	
	
	Point p;
	p.setX(10);
	p.setY(0);
	 
	isInCircle(c,p); 
	
}
