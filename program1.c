#include<stdio.h>
int main(void)
{
    int a,b;
    printf("enter two integers:");
    scanf("%d",&a,&b);
    printf("sum=%d/n",a+b);
    printf("differnce=%d/n",a-b);
    printf("product=%d/n",a*b);
    if(b!=0)
    {
        printf("quoitent=%d/n",a/b);
        printf("remainder=%d/n",a%b);
    }
    else
    {
        printf("division and remainder cannot be performed because the second integer is ./n");
}
return 0;