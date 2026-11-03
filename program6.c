# include<stdio.h>
int main(void)
{
    int choice,a,b;
    printf("1.addition/n");
    printf("2.subtraction/n");
    printf("3.multiplication");
    printf("4.Division/n");
    printf("5.remainder/n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter two integer:");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
        case 1:
        printf("Result=%/n",a+b);
        break;
        case 2:
        printf("Result=%d/n",a-b);
        break;
        case 3:
        printf("Result=%d/n",a*b);
        break;
        case 4:
        if(b!=0)
        printf("Result=%d/n",a/b);
        else
        printf("division by is not allowed./n");
        break;
        case 5:
        if (b!=0)
        printf("result=%d/n",a%b);
        else
        printf("remainder with division is not allowed./n");
        break;
        default:
        printf("in volid choice./n");
    }
    return 0;

}