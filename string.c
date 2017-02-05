#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

	char min,temp;
	int pos,i,j,l,c=0;
	char str[20];
	
	printf("enter the string\n");
	scanf("%s",str);
	l=strlen(str);
	//selection sort
	for(i=0;i<l;i++)
	{
		min=str[i];
		pos=i;
		for(j=i+1;j<l;j++)
		{
			if(str[i]>str[j])
			{
				min=str[j];
				pos=j;
			}
		}
		if(i!=pos)
		{
			temp=str[i];
			str[i]=min;
			str[pos]=temp;
		}
	}
	printf("%s\n",str);//ascending ordr
	//now by bubble sort until it comes in descending order
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-i-1;j++)
		{ c=0;
			if(str[j]<str[j+1])
			{
			temp=str[j];
			str[j]=str[j+1];
			str[j+1]=temp;
			c=1;
		}
		if(c!=0)
		printf("%s\n",str);
	}
	}
	getch();
	return 0;
}
