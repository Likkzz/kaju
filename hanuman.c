#include<stdio.h>
int sqrtr(int n){
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i*i==n)
        flag=1;
    }
    if(flag==1)
    return 1;
    else
    return -1;
}
int checksquares(int n){
  
   if(sqrtr(n)==1)
   {
   printf("|%d|",n);
   return 1;
   }
   else
   return 0;
}
int main()
{
    int n,count=0;
    printf("Enter the n value = ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(checksquares(i)==1)
        {
        count++;
        }
    }
    printf("The number of doors open is = %d\n",count);
}