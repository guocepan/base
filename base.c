//最最简单的东东
//摘自 c专家编程

//用这个
#define TOTAL_ELEM    (sizeof(array))/sizeof(array[0])
//避免用:int类型不一定就是四个字节
#define  TOTAL_ELEM    (sizeof(array))/sizeof(int)

int a;

char str[]={"chinese"};
printf("%s\n",str);

#define PI 3.1415926

float r,area;
scanf("%f",&r);

//大小写转换
char  ch = 'a';
   char  ch_A = 'A';
    int len_a_A =ch -ch_A;
    printf("%c ",('b'-len_a_A));//关键的，输出的格式是 c 型；

	
	//格式自动转换， 浮点型转换为int 输出 13；
     int i =0;
     i = 13.333;
     printf("%d \n",i);
 
int a[10]={90,89,80,88,70,87,78,98,77,66};
for(i=0;i<10;i++)
 printf("%d,",a[i]);




char str[]="Hello,C programme!";
puts(str); 


char str1[20],str2[20];
 scanf("%s%s",str1,str2);


//全局static 和函数中的 static。

#include<stdio.h>

static int j = 0;
void funj()
{
	j = 0;//每次进来，都会把0 赋值给j;
	j++;
	}

void  funi()
{
	static int i = 0;//在函数调用的时候，有效期一次，后面不会被定义第二次。
	int t = 10;//每次都会调用一次。
	t++;//这个值会被释放掉。
	i++;//这个值不会被释放，会一直递增。
}
void  main()
{
	int k = 0;
	for (k = 0; k <= 10; k++)
	{
		funi();
		funj();
	}


}

宏定义、枚举常数、只读变量全用大写字母命名，用下划线分割单词。

定义变量-----》 初始化。定义变量时编译器并不一定清空了
这块内存，它的值可能是无效的数据

不同类型数据之间的运算要注意精度扩展问题，一般低精度数据将向高精度
数据扩展


//  指针类型占的字节数。 

#include<stdio.h>

void  main()
{
	int *p = NULL;
	int len ,len1= 0;//int 类型占四个字节,也就是说他的变量也是 4个字节。
	len =sizeof p;//len == 4 ;
	len1 = sizeof(*p);// len1 ==4 ;

}


//数组的字节数；
#include<stdio.h>

void  main()
{
	int p[100] = {0};
	int len ,len1,len2,len3= 0;//int 类型占四个字节,也就是说他的变量也是 4个字节。
	len =sizeof p;//len == 400 ;
	len1 = sizeof(p[1000]);// len1 ==4 ;
	len2 =sizeof(&p);//4
	len3 =sizeof(&p[0]);//4
	
}






























