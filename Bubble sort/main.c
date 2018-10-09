#include<stdio.h>

int main()
{
    int a[10],n,i,j,t;
    printf("Enter no. of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}
