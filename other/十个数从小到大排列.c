#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int a[N],i,max,min,x,y=0;
    for(i=0;i<N;i++){
    	a[i]=rand()%101;
    	printf("%d\t",a[i]);
	}
	printf("\n\n");
    for(i=0;i<N;i++){
        for(x=i;x<N;x++){
            if(a[i]>a[x]){
                a[i]=a[i]+a[x];
                a[x]=a[i]-a[x];
                a[i]=a[i]-a[x];
                }
            }
        printf("%-5d\t",a[i]);
        y++;
        if(y%5==0)
            printf("\n");
        }
	scanf("&d",&a);
}
