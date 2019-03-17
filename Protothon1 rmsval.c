#include <stdio.h>
#include<math.h>


void rmsValue(int ar[],int n)
{
int sqr=0,i;
float mean=0.0,root=0.0;
for(i=0;i<n;i++)
    {sqr+=(pow(ar[i],2));
    printf("%d\n",sqr);}
mean=sqr/(float)(n);
printf("%f",mean);
root=sqrt(mean);
//printf("%f",&root);
}

int main()
{
int ar[]={10,4,6,8};
int n=sizeof(ar)/sizeof(ar[0]);
printf("%d",n);
rmsValue(ar,n);






return 0;
}
