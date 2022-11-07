//nested loop
//In nested loop there is another loop inside one loop:

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[3][3]={{3,4,5},
	               {2,5,8},
	               {2,3,5}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				printf("%d,",num[i][j]);
			}
	printf("\n");
	}
return 0;
}
