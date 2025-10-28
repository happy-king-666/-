//引用中形参可以修饰实参 
//交换函数1.2.3. 
#include<stdio.h>
#include<iostream>
using namespace std;
//值传递 
void myswapo1(int a,int b) {
	int temp =a;
	a=b;
	b=temp;
}
//地址传递 
void myswapo2(int*a,int *b) {
	int temp =*a;
	*a=*b;
	*b=temp;
}
//引用 
void myswapo3(int &a,int &b){
	int temp =a;
	a=b;
	b=temp;
} 

main(){
	int a=10,b=20;
	myswapo1(a,b);
	printf("a=%d b=%d\t值传递形参值不变\n",a,b);
	myswapo2(&a,&b);
	printf("a=%d b=%d\t地址传递形参传变\n",a,b);
	myswapo3(a,b);
	printf("a=%d b=%d\t引用传递形参传变\n",a,b);
 

}
