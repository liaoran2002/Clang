#include<stdio.h>
#define N 6
void main()
{
    int a[N],b['B'-60],c[]={1,2,3,4,5,6},i;
    for(i=0;i<N;i++)
        scanf("%d,%d",&a[i],&b[i]);
    for(i=0;i<N;i++)
        printf("%d  ",a[i]);
    printf("\n");
    for(i=0;i<N;i++)
        printf("%d  ",b[i]);
    printf("\n");
    for(i=0;i<N;i++)
        c[i]=a[i]+b[N-i-1];
    for(i=0;i<N;i++)
        printf("%d  ",c[i]);      
}

