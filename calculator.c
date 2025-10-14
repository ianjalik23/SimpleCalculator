#include<stdio.h>
int main()
{
    float a,b,sum,diff,prod,quo;
    char ch;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Enter your desired operation(+,-,*,/): ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case'+':
        sum=a+b;
        printf("sum of %f + %f = %f\n",a,b,sum);
        break;

        case'-':
        diff=a-b;
        printf("difference of %f - %f = %f\n",a,b,diff);
        break;

        case'*':
        prod=a*b;
         printf("product of %f * %f = %f\n",a,b,prod);
        break;

        case'/':
        quo=a/b;
        printf("quotient of %f / %f = %f\n",a,b,quo);
        break;

        default:
        printf("Invalid choice");
    }
        return 0;
}
