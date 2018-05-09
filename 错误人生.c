
//这个是用C 语言在求根号二的时候出现的错误；
test.c:31:17: error: invalid operands to binary % (have ‘double’ and ‘double’)
   sp =(double)(x%g);
查了一下，结果表明，只能用int型才行，附上当时写的函数

当时的想法，在进行相除的时候，会有小数点，又想保留多位数的小数点，就将
类型命名为double型的；
void  genhaosign()
{
    double x  = 2;
	double g = 1;
	double v =1;
	double s =0;
	double sp = 0;
	double sz = 0;
	double vz = 0;
	double vp =0;
	int i = 0;
	for(i = 0;i <=100; i++)
	{
		sz = (double)(x/g);
		sp =(double)(x%g); //***这个错误，对数据取余只能是int型。
		s=sz+sp;

		vz = (s+g)/2.0;//整数部分；
		vp =(s+g)/2.0 ;//小数部分；
		v = vz+vp;
		g = v;
	}
printf("%d \n",g);





}





 //判断数字    0 ‘0’ 不一样；
 空格(' ')--->32
'0'-------->48
'\0'------->0
#define NULL    0


//int isdigit(int c)
void  digit()
{
	char str[] ={'1','2','3','k','\0','a','l','*','C'};//这个存在潜在的危险，因为最后一个字符不是0；
	//char str[]="123ikal00ges3!#$";// 这个的最后一个数是 0；‘\0';
	int i;

	for(i = 0 ; str[i] != '\0'; i++)//所以等价的可以这样表示： str[i] != 0;
	{
		if(isdigit(str[i]))
		{
			printf("这个算数字 \" %c \"\n",str[i]);

		}
		else
		{
			printf("NO  !\n");
		}
	}
	
	
	
	//指针；
	
char* s="AAA";//创建了一个字符串常量

cout<<s<<endl;
=
s[0]='B';//但是却对字符串常量进行赋值，错误；

cout<<s<<endl;
	
	
	
5.注意指针要分配给足够的空间
指针分配得空间不够

新手在刚刚接触指针的时候经常会忘记给指针分配空间,直接用肯定是有问题的,那么下面的程序呢?

char a;//一个字节

char *str=&a;//指向一个字节的内存

strcpy(str,”hello”);//赋值了6个字节，程序崩溃。

cout<<str;	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



}


