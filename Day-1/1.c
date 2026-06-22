#include<stdio.h>
int main(){
int n, i = 1,sum=0;
printf("enter the value  of n");
scanf("%d",&n);
while(i<=n)
{
printf("%d\n",i);
sum=sum+i;

i++;
}
printf("sum=%d",sum);
return 0;
}




