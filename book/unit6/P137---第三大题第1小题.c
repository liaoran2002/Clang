#include<stdio.h>

void main()
{
    int a[5],min,b;
    for(b=0; b<5; b++)
    {
        printf("a[%d]=",b);
        scanf("%d",&a[b]);
    }
    min=a[0];
    for(b=1; b<5; b++)
        if(a[b]<min)
            min=a[b];
    for(b=0; b<5; b++)
        if(min==a[b])
        {
            a[b]=a[b]+a[4];
            a[4]=a[b]-a[4];
            a[b]=a[b]-a[4];
            a[4]=min;
        }
    printf("\n");
    for(b=0; b<5; b++)
        printf("a[%d]=%d\n",b,a[b]);
}