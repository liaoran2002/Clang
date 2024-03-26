#include<stdio.h>
#define N 5
void main()
{
    int a[10][10],i,j;
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            if(i<5&&j<5)
                a[i][j]=1;
            else if(i>=5&&j<5)
                a[i][j]=4;
            else if(i<5&&j>=5)
                a[i][j]=3;
            else a[i][j]=2;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
}