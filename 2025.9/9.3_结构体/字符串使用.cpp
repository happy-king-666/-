#include<stdio.h>
#include<string>
using namespace std;//在c++中使用string类型的关键字必须包含的语句（暂时不理解什么意思） 
main(){
	char str[]="hello world";//cahr 是单字符，该段命令是建立一个数组将字符逐一存储 
	printf("%s\n",str); //%s从开始（起始字符）输出结尾 中间会跳过空白字符 只需要变量名（str）如果加上[]则变成地址打印失败 
	string str1="hello world"; //%c用于输出单个字符 输出时需要加上[]表示地址 
	printf("%s",str1.c_str());//str1.c_str()作为地址不太懂 

}
