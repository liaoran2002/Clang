#include<stdio.h>
#define N 10
void main()
{
    int a[N],i,max,min,x,y=0;
    printf("Please input %d integern:",N);
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
        {
        for(x=i;x<N;x++)
            {
            if(a[i]>a[x])
                {
                a[i]=a[i]+a[x];
                a[x]=a[i]-a[x];
                a[i]=a[i]-a[x];
                }
            else continue;
            }
        printf("%-5d",a[i]);
        y++;
        if(y%5==0)
            printf("\n");
        }       
}