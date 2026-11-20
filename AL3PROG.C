#include<stdio.h>
void main(){
 int marks[5],total=0,i,failed=0;
 float percentage;
 clrscr();
 for(i=0;i<5;i++){
 printf("Enter marks for subject %d(0-100):",i+1);
 scanf("%d",&marks[i]);
 if(marks[i]<0 || marks[i]>100){
  printf("Invalid marks,Enter values for 0 to 100 \n");
  getch();
  return ;
  }
  total+=marks[i];
  if(marks[i]<35)
  failed=1;
  }
  percentage = total/5.0;
  printf("total=%d/500\n",total);
  printf("percentage=%.2f%%n",percentage);
  if(failed)
  printf("result:fail \n");
  else if (percentage>=75)
  printf("result:distinction\n");
  else if (percentage>=60)
  printf("result:first class\n");
  else if (percentage>=50)
  printf("result:second class\n");
  else
  printf("result:pass class\n");
  getch();
  }