#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,i,j,k;
   clrscr();
   printf("Enter a integer\t");
   scanf("%d",a);
   printf("The original integer is %d",a);
   for(i = 0;a!='\0';i++);
   {
      k = i-1;
   }
   for(j=0;j<=i-1;j++)
   {
      b[j] = a[k];
      k--;
   }
   printf("The reverse integer is %d",b);
   getch();
}
