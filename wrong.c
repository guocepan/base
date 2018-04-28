

void a; //错误
function(void a); //错误

char * Func(void)
{
char str[30];
…
return str;
}
str 属于局部变量，位于栈内存中，在 Func 结束的时候被释放，所以返回 str 将导致错误。


2、
truct student
{
}stu;
sizeof(stu)的值是多少呢？  = 1；
空结构体的大小既不能为 0，也不能大于 1，
所以，空结构体的大小就定位 1 个 byte。










































