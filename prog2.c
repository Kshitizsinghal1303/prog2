#include<stdio.h>
int main()
{
int i,k,n;
int a[10],size;
printf("enter the array size");
scanf("%d",&size);
printf("enter the array elements");
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
printf("enter position");
scanf("%d",&n);
printf("enter element");
scanf("%d",&k);
for (i = size-1; i >= n; i--)
        a[i+1] = a[i];

a[n]=k;

       for (i = 0; i <= size; i++)
        printf("%d ", a[i]);





}
