#include<stdio.h>

int main(){

   int i,j,k,t,a[1000];

   printf("eneter the number of elements \n");
   scanf("%d",&k);
printf("enter the elements\n");
   for(i=0;i<k;i++)
   {
   scanf("%d",&a[i]);}

   
   for(i=0;i<k;i++){
      for(j=0;j<k-1;j++)
	  {
        if(a[j]>a[j+1])
		{
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
        }
      }
   }

   printf("elements in ascending order are \n ");
   for(i=0;i<k;i++)
      printf("%d \t",a[i]);
}
