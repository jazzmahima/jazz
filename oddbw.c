#include <stdio.h>
void main()
{
int num,a,b;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
for (num=a;num<=b;num++)
{
if (num % 2 == 1)
printf ("%d ", num);
}
getch();
}
