#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the numbers;");
    scanf("%f%f",&a,&b);

    printf("Addition=%.2f\n",a+b);
    printf("Subtraction=%.2f\n",a-b);
    printf("Multiplication=%.2f\n",a*b);
    if(b!=0)
      printf("division=%.2f\n",a/b);
    else
    printf("Division is not possible because the second number is 0.\n");
    
    return 0;

}
