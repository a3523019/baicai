//将实数写入文件然后读出. 
#include <stdio.h>
int main(void)
{
	FILE *fp;
	double pi=3.14159265358979323846;
	//写入操作
	if((fp=fopen("pi.txt","w"))==NULL)
	printf("错误");
	else
	{
		fprintf(fp,"%f",pi);
		fclose(fp);
	 } 
	 //读取操作
	 if((fp=fopen("pi.txt","r"))==NULL)
	 printf("错误");
	 else
	 {
	 	fscanf(fp,"%lf",&pi);
	 	printf("圆周率是%23.31f.\n",pi);
	 	fclose(fp);
	 } 
	 return (0);
}
