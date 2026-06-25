#include<stdio.h>
int main()
{
    int a[50],b[50],c[100];
    int n,m,i,j,k=0,found;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c[k++]=a[i];
    for(i=0;i<m;i++)
    {
        found=0;
        for(j=0;j<k;j++)
        {
         if(b[i]==c[j])
         {
             found=1;
             break;
           }
        }
        if(found==0)
        c[k++]=b[i];
    }
    for(i=0;i<k;i++)
     printf("%d ",c[i]);
    return 0;
}