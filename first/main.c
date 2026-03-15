#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	float V=0.0f;
	float r=0.0f;
	printf("输入球的半径");
	scanf("%f",&r);
	if(0<=r&&r<=15)
	{
		V=4/3.0*3.1415926*r*r*r;
		printf("%.3f\n",V);
		return 0;
	}
	else
	printf("请输入0-15任意值");
	return 1;
	
}
