#include<stdio.h>
void main()
{
    int a[8],i;
    float score,max,min;
    for(i=0; i<8; i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        score=score+a[i];
    }
    max=min=a[0];
    for(i=1; i<8; i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    score=(score-max-min)/6;
    printf("score=%f\n",score);
}