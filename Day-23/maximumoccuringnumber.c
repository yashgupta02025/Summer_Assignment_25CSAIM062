#include<stdio.h>
int main()
{
    char str[100];
    int freq[256]={0};
    int i,max=0;
    char result;
    gets(str);
    for(i=0;str[i]!='\0';i++)
        freq[str[i]]++;
    for(i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            result=str[i];
        }
    }
    printf("%c",result);
    return 0;
}