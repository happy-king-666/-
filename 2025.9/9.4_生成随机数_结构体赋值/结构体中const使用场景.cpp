//机构体中const使用场景  防止误操作 
#include <stdio.h>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
}; 
void sprintfstudent1 (student s){//值传递是将内容复制运用运行量太大	用指针可以解决这个问题
	printf ("%s,%d,%d\n",s.name.c_str(),s.age,s.score);
};//指针代码的缺点是内部函数发生改变外部也会改变 用关键字const,可以解决此问题 
void sprintfstudent2  (const student *s){//加入const 指针,在内修改时会报错,防止更改内部代码 
	//s->age=88; 
	printf ("%s,%d,%d\n",s->name.c_str(),s->age,s->score);
};

main(){
	student s={"张三",23,86};
	sprintfstudent1 (s);
	sprintfstudent2 (&s);
} 
