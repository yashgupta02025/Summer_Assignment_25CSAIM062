#include<stdio.h>
int main()
{
    char a[100],b[100];
    int freq[256]={0};
    int i;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
     freq[a[i]]=1;
    printf("Common characters: ");
    for(i=0;b[i]!='\0';i++)
    {
        if(freq[b[i]]==1)
        {
            printf("%c ",b[i]);
            freq[b[i]]=0;
        }
    }
    return 0;
}