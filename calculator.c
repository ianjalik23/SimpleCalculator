#include<stdio.h>
int main()
{
    int a,b,sum,diff,prod,quo;
    char ch;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter your desired operation(+,-,*,/): ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case'+':
        sum=a+b;
        printf("sum of %d + %d=%d\n",a,b,sum);
        break;

        case'-':
        diff=a-b;
        printf("difference of %d - %d=%d\n",a,b,diff);
        break;

        case'*':
        prod=a*b;
         printf("product of %d * %d=%d\n",a,b,prod);
        break;

        case'/':
        quo=a/b;
        printf("quotient of %d / %d=%d\n",a,b,quo);
        break;

        default:
        printf("Invalid choice");
    }
        return 0;
}