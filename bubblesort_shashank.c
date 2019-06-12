#include <stdio.h>
int main()
{
    intnum[100],i,x,n,temp;
    printf("Enter numbers to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }

    for(x=0;x<n-1;++x)
    for(i=0;i<n-step-1;++i)
    {
        if(data[i]>data[i+1])   /* To sort in descending order, change > to < in this line. */
        {
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]);
    return 0;
}