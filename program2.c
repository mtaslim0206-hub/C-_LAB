#include<stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double pi=3.14159;
    printf("enter rectangle leangth and breadth:");
    scanf("%if",&length,&breadth);
    printf("rectangle area=%21f/n",length*breadth);
    printf("rectannnngle perimeter=21f/n",2*(length+breadth));
    printf("enter circle radius:");
    scanf("%1f",&radius);
    printf("cirle area=%21f/n",pi*radius*radius);
    printf("circle circumference=%21f/n",2*pi*radius);
    printf("enter triangle base and height:");
    scanf("%1f%1f",&base,&height);
    printf("triangle area=%21f/n",0.5*base*height);
    return 0;
}