#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0,total;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    total=(n+1)*(n+2)/2;
    printf("Missing=%d",total-sum);
    return 0;
}