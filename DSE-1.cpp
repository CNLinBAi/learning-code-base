#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#define NUMm 1000

int main()
{
	int num1,num2,i,j=0;
	int a[NUMm],b[NUMm];

	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		scanf("%d",&a[i]);
	}

    scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		scanf("%d",&b[i]);
	}

    i=0;
    
    for(int k=0;k<num1+num2;k++)
	{
		if(a[i]<b[j]&&i<num1){
		printf("%d\n",a[i]);
		i++;
	 }
	else{
		printf("%d\n",b[j]);
		j++;
	 }
	}

}