#include<stdio.h>
int main()
{ int n, digit , product =1;
    printf("enter the value of n");
    scanf("%d", &n);

    while(n!=0) {
    digit=n % 10;
    product *= digit;
    n=n/10;
    }

    printf("product of digits =%d" , product);
    return 0;
}