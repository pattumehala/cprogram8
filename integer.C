#include<stdio.h>
int main()
{
int n[5]={1,2,3,4,5},i,sum=0,k;
printf("Enter the value of k:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
sum=sum+n[i];
}
printf("the sum of first k integer is:%d",sum);
return 0;
}
