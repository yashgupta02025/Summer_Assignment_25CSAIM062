#include<stdio.h>
int main()
{
    char a[100],b[100];
    int freq1[256]={0},freq2[256]={0};
    int i,flag=1;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
        freq1[a[i]]++;
    for(i=0;b[i]!='\0';i++)
        freq2[b[i]]++;
    for(i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            flag=0;
            break;
        }
    }
 if(flag)
        printf("Anagram");
 else
        printf("Not Anagram");
    return 0;
}