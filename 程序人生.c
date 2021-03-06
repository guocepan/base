（1）大学英语
（2）计算机体系结构和汇编语言
（3）计算机操作系统原理
（4）数据结构和算法
（5）软件工程
6、把最多的时间花在学习上



纠结了将近三年，学习断断续续，总想着能飞黄腾达，遇到一个问题能把一天的时间都浪费了
然后又开始琢磨到底该怎么学习，已经没有了高中时候的拼劲。
这时候才意识到，高中时多么的好。你不用想什么东西，很轻松的就能学好了。如果你按照老师安排的
相比于现在，没有老师的陪伴，你才知道，什么才是痛苦。
如果没有老师，我再怎么学习，再怎么聪明也是无济于事的。
这么说是不是对自己没有一点信心？
其实，还真是。
在高中。老师把作业布置给你了，你完成了，就会有收获。
为什么很多人在学校的时候，特别厉害。倒是出来后没有学习差的成就高，
我觉得最大的可能是目标与行动的问题。
没有目标真的太可怕了，没有鞭策者真的太需要自律了。
在学校，很简单。老师给你定目标，一张测试卷下来，就知道你完成了目标完成率，知识掌握度
而我目前处于什么样的境地呢？
我在学习编程，想成为编程大师。我想了两年，但是代码没有写到一万行。
你也许觉得很搞笑：“哈哈哈，没见过哪个人是靠想象学会游泳的。”
其实道理谁都懂：
我现在就自己总结一下我在学习编程的时候一直以来犯的错误。
我想学C，网上找各种教程，各种书籍，而且都已经找到了，下载两天都下载不完；
然后开始学，看视频，都看懂了，但是没有自己写过代码。
只是看，看懂了并对我没有一点用处；
后来就又去网上找怎么学习C语言，结果还是这样。
我又开始学习了，这次是开始写程序了，但是很不幸的。刚刚想出门，看见门是锁着的，
开了老半天，没见成效。然后，算了，还是回去睡觉吧，明天再试试怎么开门，然后就真的变成
然后了。
经过无数次这样的事情后，我才发现，我是多么的渺小，一瞬间，我就开始佩服我老爸了

老爸，六十年代的人，一个质朴的，又爱吹牛，脾气很急，做事很稳。感觉他什么事情，只要他
出手，就能解决问题，感觉别人都会给他面子。
其实，一个人没有高文凭，一步一个脚印，开荒十几年，养了四口人，其中两个上了大学。孩子还在
学习的时候，就开始建房子，还在大学毕业后，又开始装修，他的人生已经走完了一大部分，
一堆的愿望，他都实现了，还有什么东西，不值得他吹嘘的呢？
还有什么比完成自己愿望更让人激动骄傲呢？
我想，如果我以后有资本跟自己的孩子吹嘘，我感觉我会比我爸更甚。

然而，我今天2018-5-7；从今天开始，不再迷茫，从头开始，为自己谋一个未来；希望在老的时候
能给自己吹牛的资本；

今天开始学习《计算机程序的结构和解释》

在序中提到，规划者：教育者将军，减肥专家，心里学家，父母。而军人，学生，社会阶层被人规划，
MIT 麻省理工大学；

故障：glitch


哇，看了五分钟，感觉有点困，虽然我刚刚起床；

怎么算平方根？

用牛顿逐步逼进法：

比如，计算根号2；



g          s                 v
猜测       商              平均值
1         2/1  = 2    		(2+1)/2 =1.5;   //这个平均值是 v = (g+s )/2 
1.5        2/1.5 =1.3333    (1.5+1.3333)/2=1.4167
1.4167      2/1.4167=1.4118   (1.416+1.4118)/2=1.4142


看到这，让我不禁的脑袋变得清明，没想到，根号还可以这样求
先去拿c语言实现一波：
      
		  
gdb 调试；

在我们编写一个代码的时候，难免会因为理所当然而犯错，
这就需要调试器来解决问题。

$ gcc -g test.c -o a  //其中a为目标函数， -g表示用gdb调试器

然后进行调试，先打开文件

$ gdb  a

看一下代码，表示，查看10 到20行；
(gdb) list 10,20

设置断点：

b  main



////////////////////////////////////////////////////

g               s                       v
猜测           商                   平均值
1              2/1  = 2    		    (2+1)/2           =1.5;     //这个平均值是  
1.5            2/1.5 =1.3333        (1.5+1.3333)/2    =1.4167   //v = (g+s )/2
1.4167         2/1.4167=1.4118      (1.416+1.4118)/2  =1.4142


// 用牛顿逐步逼进法：求根号2的程序
//如果对x的平方根的值有一个猜测值g,那么就可以通过执行一个简单的
//操作去得到一个更好的猜测：
//只需要求出g和x/g的平均值（它更接近实际的平方根值）
void  genhaosign()
{
   float x  =2;//待求的根号数，，这里表示根号2；
   float g = 10;//这个数是随便的，任意数
   float v =1;
   float s =0;
   float  i = 0;
	for(i = 0;i <=100; i++)//只要循环次数够多，就可以了。
	{
		s =(float) (x/g);//类型转换是必须的，要不然会自然的转换成整形，就变成取整了。
		v = (float)(g+s)/2;//前面有float 得出得数才是我们平时得除法；	
		
		g = v;//将得到得平均值再给这个猜想数。
	}
printf("%f \n",g);

}

小故事：




///////////////////////////////////////////////////////////////////////
公约数
a,b 两个数的最大公约数r，满足，能够除尽这两个数的最大整数

例如，16  28 的最大公约数4；
有一个牛人，看到了这么一个等式
GCB(a,b) = GCB(b,r);
他是这么说的：
如果r是a除以b的余数，那么a和b的公约数正好也是
b和r的公约数。





//先把算法书籍放下，学一下汇编等

字节：一个字节由8个二进制组成
[7][6][5][4][3][2][1][0];
      一个字节8个位
高 ------->低


字：2个字节（就是16个二进制）组成一个字；
【15】。。。。【10】。。。。【0】；
      高----》低

双字：由两个字组成；

字符串：由字符构成的一个线性数组。通常每个字符用一个字节表示，
但是有时候每个字符也用一个字或者两字表示。

    |AH  AL   ---> AX    |
 通 |BH  BL   ---->BX    | 数据寄存器
 用 |CH  CL   ---->CX    | 
 寄 |DH  DL   ---->DX    |
 器 | 
	|  
    |SP      堆栈指针      |   指针寄存器
    |BP    	基址指针       |	针寄存器	
	|SI      源地址        |    变址寄存器
	|DI		目的地址       |    变址寄存器




IP 		 指令指针
FLAG 	 标志寄存器    控制寄存器

CS    	代码段
DS		数据段         段寄存器		  	
SS		堆栈段
ES		附加段


物理地址的形成：
由于段的起始地址必须是16的倍数；
bbbb bbbb bbbb bbbb bbbb 0000 就像这样；
  《--------左移了4位，

用16进制表示：
XXXX0; 这种20位的段起始的 ==高16位== XXXX称为段值，显然段起始地址
等于段值乘以16（就是左移4位）；
要访问某一个存储单元总是属于某个段，我们把存储单元的地址跟所在段的
起始地址的差称为段内偏移。在一个段内，通过偏移可指定要访问的存储单元。
或者说访问的存储单元可由偏移来指定。

#include <stdio.h>
#include<string.h>
#include<ctype.h>


//判断字符是否为英文字母
//int isalpha(int c  )    否：返回非零

void  Pisalpha()
{
	char ch;//定义一个字符
	
	int i = 0;
    int j =1；//数有几个英文字母
	do
	{
  		//ch = getchar();//获取一个字符；
		ch = (char)('A'+i);//字符递增，字符相当于一个阿斯克吗，对其强制转换就行；
		i++;
		if(isalpha(ch))//可以将char型放进去？估计是相当于强制转换吧；
		{
			printf("这个算英文字符| %d \n",j);
			j++;
			
		}
		else
		{

			printf("这个NONONO算英文字符| \n");

		}	
		
	}while(ch != '.');

}




数组保存字符串；
char str[] ={'1','2','3','k','\0','a','l','*','C'};//这个存在潜在的危险，因为最后一个字符不是0；
char str[]="123ikal00ges3!#$";// 这个的最后一个数是 0；‘\0';

 空格(' ')--->32
'0'-------->48
'\0'------->0
#define NULL    0


//复制字符窜的控制
//复制字符串到指定的数组中。；
// char *stpcpy(char *dest,char  *src)
//
#define _GNU_SOURCE
 #include <string.h>
#include <stdio.h>

int main1(void) 
{
	 char buffer[20];
 	 char *to = buffer;

	to = stpcpy(to, "foo");
 	to = stpcpy(to, "bar");
 	printf("%s\n", buffer);
}

void cp()
{
	 char buffer[100];//定义一个字符数组
	 char *dest;
	 dest = buffer;//相当于分配了内存;
	 dest = stpcpy(dest,"sdfs sdfsadf ssd feea dfsd sdf fsd ");
	 printf("%s \n",dest);//格式化？  并没有输出。厉害了

	 dest = stpcpy(dest,"    enver been mine");
	 printf("\n %s \n",buffer);

}






//判断是不是小写;
//int  islower(int c)

void  lower()
{
	char ch;
	do 
	{
		ch =getchar(); 
		if(islower(ch))
		{
			printf("%c \n",ch);
		}


	}while(ch != 27);
}

//判断是否为英文字母或数字；
//void isalnum(int)
void alnum()
{
	char str[]="123kan*(0-#10)";
	
	int i = 0 ;
	for(i = 0;str[i] != 0; i ++)
	{
		if(isalnum(str[i]))
		{
			printf("%c \n",str[i]);

		}
	}

}



//scanf（“%d”,x）；//如果能按照格式输入就会返回1 ，如果不按照格式输入就会得到0；


//如果输入的不是数字，scanf()函数将返回0；
while(num < max && scanf("%d",&columns[num]) ==1 && columns[num] >= 0)




判断数字是偶数； 就是取余是不是为0；

if(num % 2  != 0)
 

“  ”双引号，用于定界字符串常量。
用转义字符可以将他变成正常的符号  \" ;


如果一个多字节常量的前面有一个L，那么他就是
宽字符常量：
L'X'  L'x'
当运行时环境支持一种宽字符集时，他就有可能使用它们；



当一个值被当做字符使用：

val =val -48;
val =val -\60;
val =val - '0';  //这个看起来最清晰;


枚举类型就是他的值为符号常量，而不是字面值的类型。


//声明
enum  JJJ{CUP,PINT,QUART};
这种类型的变量按下列方式声明：
enum JJJ milk_jug,gas_can;

#include <stdio.h>

int main()
{
	enum JJJ //这个是一个大括号
	{
		CUP=10,AAA=20,BBB    //都是整形
	};
	enum JJJ j;
	
	j =CUP;
	printf("%d \n",j);
    j =j+AAA;
	
	printf("%d \n",j);
	

return 0;
}

//枚举应用；
enum Color { red, green, blue };
Color r = red;
switch(r)
{
    case red  : std::cout << "red\n";   break;
    case green: std::cout << "green\n"; break;
    case blue : std::cout << "blue\n";  break;
}

如果某种特定的枚举变量只使用一个声明，可以合成一句话：

enum  JJJ(CUP,PINT,QUART)JJJ milk_jug,gas_can;
如果是这种默认的形式，那么就从0开始： 0,1,2；

如果不是默认的：
enum  JJJ(CUP =8,PINT=16,QUART);
如果不是显示的这样说明，那么就会默认加1；



整形的不能保存具有小数点的，浮点型可以，双精度的类型也可以；
浮点型的家族有：
float ,double ,long double;

指针，只是地址的另外一个名字罢了；


字符串常量：他是一串一NUL字节结尾的0个或者多个字符；
字符串通常存储在--- 字符数组--- 中

因为NUL字节是用于终结字符串的，所以在字符内部不能有NUL字节
之所以用NUL作为字符串的终止符号，是因为他不是一个可打印的字符；

字符串常量通常以一对双引号形式书写的：
“hello”
“\aWarning!\a”
"" //虽然是空的的依然有NUL作为终止符号；


如果你要修改字符串，就把他存于数组中吧；

但是不能直接将字符串赋值给一个字符数组，因为字符串常量
的直接值是一个指针，而不是这些字符本身。所以有
指向字符的指针。


声明：
简单的数组声明：
int arr[200];//int 类型的arr 有两百个；


//声明一个指针并且用一个字符串常量对其初始化；
char *message = "hello  world";

这个就是吧massage声明为一个指向字符的指针，并且用字符串
常量中的第一个字符的地址对该指针进行初始化。

但是这个地方让人感觉很让人误解：
认为“hello  world”赋值给了 *message。但并不是，而是给了message

换句话说应该这样：

char *message;
message = "hello world";


typedef :

char *ptr_to_char;

在前面加上typedef后
typedef  char *ptr_to_char;

他把 ptr_to_char 作为指向字符的指针类型的新名字；

ptr_to_char   a;//声明a是一个指向字符的指针；

不能将他与  #define 混淆；
比如：
#define A  char *;
A a,b;
扩展开来就是：
char *a,b;  //显然，b是字符型；

C允许你顶一个常量：
int   const  a;
const int a ;  //这两种中选择一个，并且一直使用下去；

int const *pci;//指向整型常量的指针，可以修改指针的值，
但是不能修改他指向的值，以为（*pci）是一体的，想要
拆散他们，只能一个一个攻破；

int *const pci; //这个就有所不同，只有单独一个pci也就是说
只有他是无敌的，指向不给改变但是，指向的内容可以改变，
打个比喻，这句话是说，pci说这个房间不能改变，但是里面的主人
那个婀娜多姿的美女确实可以改变的，随便你们怎么样都行。

但是一般动用了两个警力之后，就明显的不能动了
再也不能顾此失彼了：
int  const * const pci;//都给我趴下的意思，别想拿走一样东西；

#define PI  3.1415926
int const PI = 3.1415927;
这两个虽然都是定义了一个常量，但是还是有点区别的。
const定义的常量，只能用于允许使用变量的地方，在数组中就不能使用；













































































































































