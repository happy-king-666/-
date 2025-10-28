# include<stdio.t>
intmain(){
int a = 10;
int b = 10;
int * p =&a;
cosnt int *p= &a;	//常量指针 修饰指针，指针的内容不能变，路径（指向）可以改变
int * cosnt p2= &a;   //指针常量 修饰常量，指针路径（指向）不可更改，指针指向的内容可以更改 
cosnt interesting * p3=&a; //修饰指针和常量，二者都不可更改 

}
