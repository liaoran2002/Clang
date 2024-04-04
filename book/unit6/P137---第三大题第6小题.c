#include<stdio.h>
void main()
{
    char str[100];
    char s[100],num[100];
    int index=0,index1=0,index2=0;
    gets(str);
    while(str[index]!='\0')
    {
        if((str[index]>='a' && str[index]<='z')||(str[index]>='A' && str[index]<='Z'))
            s[index1++]=str[index];
        else if(str[index]>='0' && str[index]<='9')
            num[index2++] = str[index];
        index++;
    }
    s[index1]= '\0';
    num[index2] = '\0';

    printf("%s\n%s",s,num);
}