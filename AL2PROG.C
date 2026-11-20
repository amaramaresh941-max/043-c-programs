#include<stdio.h>
#define PI 3.14159
void main(){

 double length,width,radius,base,height;
 clrscr();
 printf(" Enter rectangle length and width ");
 scanf(" %lf%lf",&length,&width);
 printf(" rectangle area = %.2f\n",length*width);
 printf(" rectangle perimeter = %.2f\n",2*(length+width));

 printf("\n Enter circle radius:");
 scanf("%lf",&radius);
 printf("circle area=%.2f\n",PI*radius*radius);
 printf("circle circumference=%.2f\n",2*PI*radius);

 printf("\n Enter triangle base * height:");
 scanf("%lf %lf",& base,&height);
 printf("triangle area=%.2f\n",0.5*base*height);
 getch();
 }