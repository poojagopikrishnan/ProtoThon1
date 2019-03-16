#include <stdio.h>

int Fact(int n)
{
   int num,res=1;
   for (num=1;num<=n;num++)
         res=res*num;
    return res;
}

int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
    for(j=0;j<=(5-i)-2;j++)//to print spaces
         printf(" ");
    for(j=0;j<=i;j++)//to print number
         printf("%d ",Fact(i)/(Fact(j)*Fact(i-j)));
    printf("\n");
   }






   return 0;

}
