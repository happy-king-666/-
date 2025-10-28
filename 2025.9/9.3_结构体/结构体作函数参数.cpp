#include <stdio.h>//结构体做函数参数—值传递—地址传递 
#include<string>
using namespace std;
struct teach{ //结构体结构 
	string name;
	int age;
	int score;
}; 
void printfteach1 (struct teach t){
	t.age=1000;
	printf("值传递打印        %s,%d%,%d\n",t.name.c_str(),t.age,t.score);
};
void printfteach2 (struct teach *t){//采用指数函数 在指针函数内部不需要采用*指针形式 
	t->name="马山";
	printf("地址传递打印      %s,%d,%d\n",t->name.c_str(),t->age,t->score); 
}
main(){ 
	teach t;//向结构体中写入时必须加上结构体名称 
	t.name="王五";
	t.age=46;
	t.score=99;
	printf("正常打印          %s,%d,%d\n",t.name.c_str(),t.age,t.score);//打印时访问结构体必须加上结构体名称. 
	printfteach1(t);
	printf("值传递后再次打印  %s,%d,%d\n",t.name.c_str(),t.age,t.score);
	printfteach2(&t); 
	printf("地址传递后再次打印%s,%d,%d\n",t.name.c_str(),t.age,t.score);
}
