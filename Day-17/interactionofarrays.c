#include<stdio.h>
int main()
{
    int a[50],b[50];
    int n,m,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("Common elements:");
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
      {
        if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
      }
    }
    return 0;
}