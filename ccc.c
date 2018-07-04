//doc  to hex
/*

	功能：将十进制以16进制输出;
	方法：
	输入:键盘输入scanf（）
	输出：输出格式为hex
*/

#include<stdio.h>

void  printarr(int len,int *origin);
int doctohex(int input,int *parrr);
int main()
{
	/*int doc;
	scanf("%d",&doc);
	printf("输入的十进制为:%d  输出的十六进制为:%x \n",doc,doc);
	printf("%d ==== %o \n",doc,doc);

	printf("%x ==== %d",doc,doc);

	*/
		int parr[15]={0};
		int input = 5;
		scanf("%d",&input);
			 	
		doctohex( input,parr);

return 0;
}


int doctohex(int input,int *parrr)
{
	int index = 0;
	int shang= 0;
	int yushu = 0;

	int chushu;
	chushu = input;

	for(index = 0;index <=15;index++)
	{
		shang = chushu/2; //取出商

		yushu = chushu%2; //取出余数

		parrr[index] = yushu; //保存余数
		chushu = shang;  //剩下的商再继续赋值；
	}

  printarr(15,parrr);


}

void  printarr(int len,int *origin)
{
	int i = 0 ;
	for( i =len ; i >= 0;i--)
	{

		printf("%d ",origin[i]);
	}



}