
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

