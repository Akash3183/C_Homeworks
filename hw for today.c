#include<stdio.h>
int main()
{
   int a[10];
   int n,num=0,sum=0,num1;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   printf("\n");
   printf("Enter the elements of the array one by one:\n");
   for(int i=0;i<n;i++)
   {
      printf("Enter the %d-no. element of the array: ",i);
      scanf("%d",&a[i]);
      printf("\n");
   }
   for(int i=0;i<n;i++)
   {
     int d = a[i] % 10;
      num = num*10 + d;
   }
   num1 = num;
   for(int i=0;i<n;i++)
   {
     int d = num1 % 10;
     sum = sum*10 + d;
     num1 = num1/10;
   }
   if(sum==num)
   {
      printf("\nIt's a palindrome number !");
   }
   else
   {
      printf("\nIt's not a palindrome number !");
   }
   return 0;
}
