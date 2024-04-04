#include<stdio.h>
void main()
{
    int i,j,k;
    scanf("%d",&k);
    int a[k][k];
    for(i=0; i<2; i++)
        for(j=0; j<=i; j++)
        {
            if(i==j)
            {
                a[i][j]=1;
                printf("%5d\n",a[i][j]);
            }
            else
            {
                a[i][j]=1;
                printf("%5d",a[i][j]);
            }
        }
    for(i=2; i<10; i++)
        for(j=0; j<=i; j++)
        {
                    if(j==0)
                    {
                        a[i][j]=1;
                        printf("%5d",a[i][j]);
                    }
                    else if(i==j)
                    {
                        a[i][j]=1;
                        printf("%5d\n",a[i][j]);
                    }
                    else
                    {
                        a[i][j]=a[i-1][j-1]+a[i-1][j];
                        printf("%5d",a[i][j]);
                    }
                }
        }
