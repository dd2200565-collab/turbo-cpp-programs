
#include<stdio.h>
#include<conio.h>
void main()
{
   int num1,num2,add,sub,mul,div,choice;
   clrscr();
   printf("Enter the First Number:");
   scanf("%d", &num1);
   printf("Enter the Second Number:");
   scanf("%d", &num2);
   printf("---------------------Select Operation------------------\n");
   printf("1.Addition \n");
   printf("2.Subtraction \n");
   printf("3.Multiplication \n");
   printf("4.Division \n");
   printf("\nSelect Operation:");
   scanf("%d",&choice);
   printf("---------------------Answer------------------------- \n");

   switch(choice){
   case 1:
   add=num1 + num2;
   printf("%d + %d = %d",num1,num2,add);
   break;

   case 2:
   sub=num1 - num2;
   printf("%d - %d = %d",num1,num2,sub);
   break;

   case 3:
   mul=num1 * num2;
   printf("%d * %d = %d",num1,num2,mul);
   break;

   case 4:
   div=num1 / num2;
   printf("%d / %d = %d",num1,num2,div);
   break;

   default:
   printf(" Kindly Select 1 to 4 only.");
   break;
}
   getch();

}

































