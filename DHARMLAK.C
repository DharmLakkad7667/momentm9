#include<stdio.h>
#include<conio.h>
main()
{
   clrscr();
   int number;
   printf("enter a number: );
   scanf("%d",&number);
   (number % 2 == 0) ? printf("even\n"): printf("odd\n");
   return 0;
   getch();
}