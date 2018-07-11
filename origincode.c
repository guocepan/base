1、计算一个字符串的长度
//如果给他传递的是一个NULL指针，这个while就会失效；
#include<stdlib.h>
size_t strlen(char *string)
{
	int length = 0;
	/*
	依次访问字符串的内容，计算字符串个数，遇到字符串停止符终止
	：‘\0'
	*/
	while(*string++ != '\0')//*string   ====arr[0]; 
		length +=1;
	
	return length;
	
}


2、初始化数组，用指针的方式

int arr[5];
int *p =arr;
for(p = &arr[0]; *p <arr[5];)
{
	*p++=0;//p指向的是地址，数组的地址，p是一个变量，每次+1，移动4个字节，再对其进行*操作
	
}
