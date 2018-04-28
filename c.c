//switch

switch(val)
{
	case val:
	
	//code
	
	break;
	
	case: val2
	//code
	break;
	
	default:
	break;
	

}

**  case ：只能是整形或者字符型的常量，或者常量表达式。


break  : 终止本层循环，

continue  ：终止本次循环，进行下一轮循环。

for:一般用于已经知道循环次数了的

while  :用于只知道终止条件的。

多重循环，一般将循环次数最短的放在最外层，循环次数多的在内层。

goto ： 跳转语句

void * memcpy(void *dest, const void *src, size_t len);
void * memset ( void * buffer, int c, size_t num );


例子： memset 接受任意类型指针
int IntArray_a[100];
memset (IntArray_a, 0, 100*sizeof(int) ); //将 IntArray_a 清 0


例子： memcpy 接受任意类型指针
int destIntArray_a[100], srcintarray_a[100];
//将 srcintarray_a 拷贝给 destIntArray_a
memcpy (destIntArray_a, srcintarray_a, 100*sizeof(int) )


1、
void a; //错误
function(void a); //错误

char * Func(void)
{
char str[30];
…
return str;
}
str 属于局部变量，位于栈内存中，在 Func 结束的时候被释放，所以返回 str 将导致错误。

 return 语句不可返回指向“栈内存”的“指针”，因为该内存在函数体结束时
被自动销毁


精确的说应该是只读
的变量，其值在编译时不能被使用，因为编译器在编译时不知道其存储的内容。


2、

定义 const 只读变量，具有不可变性。
例如：
const int Max=100;
intArray[Max]

3、
#define M 3 //宏常量
const int N=5; //此时并未将 N 放入内存中
......
int i=N; //此时为 N 分配内存，以后不再分配！
int I=M; //预编译期间进行宏替换，分配内存
int j=N; //没有内存分配
int J=M; //再进行宏替换，又一次分配内存！

4、
定义或说明一个只读数组可采用如下格式：
int const a[5]={1, 2, 3, 4, 5};或
const int a[5]={1, 2, 3, 4, 5}


5、
const int *p; // p 可变， p 指向的对象不可变
int const *p; // p 可变， p 指向的对象不可变
int *const p; // p 不可变， p 指向的对象可变
const int *const p; //指针 p 和 p 指向的对象都不可变

先忽略类型名（编译器解析的时候也是忽略类型名），我们看 const 离哪个近。“近水楼
台先得月”，离谁近就修饰谁。
const int *p; //const 修饰*p,p 是指针， *p 是指针指向的对象，不可变
int const *p; //const 修饰*p,p 是指针， *p 是指针指向的对象，不可变
int *const p; //const 修饰 p， p 不可变， p 指向的对象可变
const int *const p; //前一个 const 修饰*p,后一个 const 修饰 p，指针 p 和 p 指向的对象
都不可变


6、
1.12，最易变的关键字----volatile
不给编译器优化，在嵌入式常用到。


7、
1.13，最会带帽子的关键字----extern   外来的变量的意思。


A.c 文件中定义： B.c 文件中用 extern 修饰：
int i = 10； extern int i； //写成 i = 10；行吗？
void fun（void） extern void fun（void）； //两个 void 可否省略？
{
//code
}
C.h 文件中定义： D.c 文件中用 extern 修饰：
int j = 1; extern double j； //这样行吗？为什么？
int k = 2; j = 3.0； //这样行吗？为什么



8、 *******思想****

truct 是个神奇的关键字，它将一些相关联的数据打包成一个整体，方便使用。
在网络协议、通信控制、嵌入式系统、驱动开发等地方，我们经常要传送的不是简单
的字节流（char 型数组），而是多种数据组合起来的一个整体，其表现形式是一个结构体。
 
   ***经验不足的开发人员往往将所有需要传送的内容依顺序保存在 char 型数组中，通过指针偏
移的方法传送网络报文等信息***。
    这样做编程复杂，易出错，而且一旦控制方式及通信协议
有所变化，程序就要进行非常细致的修改，非常容易出错。这个时候只需要一个结构体就
能搞定。平时我们要求函数的参数尽量不多于 4 个，如果函数的参数多于 4 个使用起来非
常容易出错（包括每个参数的意义和顺序都容易弄错）， 效率也会降低（与具体 CPU 有关，ARM
芯片对于超过 4 个参数的处理就有讲究，具体请参考相关资料）。这个时候，可以用结构体
压缩参数个数。




1.15，union 关键字

union StateMachine
{
char character;
int number;
char *str;
double exp;
};

在 union 中所有的数据成员共用一个空间，同一时间只能储存其中一个数据成员，所
有的数据成员具有相同的起始地址
以上例而言，最大
长度是 double 型态，所以 StateMachine 的空间大小就是 double 数据类型的大小。



1.15.1，大小端模式对 union 类型数据的影响

union
{
int i;
char a[2];
}*p, u;
p = &u;
p->a[0] = 0x39;
p->a[1] = 0x38;

p.i 的值应该为多少呢？

大端模式（Big_endian）：字数据的高字节存储在低地址中，而字数据的低字节则存放
在高地址中。
小端模式（Little_endian）：字数据的高字节存储在高地址中，而字数据的低字节则存放
在低地址中。





















