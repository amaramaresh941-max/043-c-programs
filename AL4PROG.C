#include<stdio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter three integers");
scanf("%d %d %d", &a,&b,&c);
if(a==b&&b==c){
printf("All three number are equal %d\n",a);
} else if (a==b){
 printf("The first&second numbers are equal %d\n",a);
 printf("largest number :%d\n",(a>c)? a:c);
} else if (b==c){
 printf("The second&third numbers are equal %d\n",b);
 printf("largest number = %d\n",(b>a)? b:a);
} else {
 if (a>b){
 if(a>c)
 printf("largest number = %d\n",a);
 else
 printf("largest number = %d\n",c);
 } else {
 if (b>c)
 printf("largest number = %d\n",b);
 else
 printf("largest number = %d\n",c);
 }
}
getch();
}
