#include<stdio.h>
int calculate(long int);
int calculate(long int num)
{
int d,sum=0;
char dig=0;
while(num>0)
{
d=num%10;
dig++;
num=num/10;
if(dig==1)
sum=sum+d;
}
sum=sum+d;
return sum;
}
int main()
{
int T,i,res;
long int N[1000];
scanf("%d",&T);
for(i=0;i<T;i++)
scanf("%ld",&N[i]);
for(i=0;i<T;i++)
{
res=calculate(N[i]);
printf("%d\n",res);
}
return 0;
}
