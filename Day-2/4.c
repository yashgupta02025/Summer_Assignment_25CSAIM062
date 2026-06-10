#include<stdio.h>
int main()
{ int n, org , rev =0, digit;
    printf("enter the value of n");
    scanf("%d", &n);
    org = n;
    while(n!=0) {
    digit=n % 10;
    rev = rev*10 + digit;
    n=n/10;
    }
    if(org == rev)
     printf("palindrome number");
        else
             printf("not a palindrome number");
    return 0;
}