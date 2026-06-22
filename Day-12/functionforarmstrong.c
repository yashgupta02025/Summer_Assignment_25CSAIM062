#include<stdio.h>
int armstrong(int n)
{
    int sum=0,rem,temp;
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }

    if(sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}