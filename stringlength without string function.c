#include<stdio.h>
void main()
{
char ch[20];
int i=0,len=0;
printf("enter a string:");
gets(ch);
while(ch[i]!='\0')
{
len=len+1;
i=i+1;
}
printf("length %d",len);
}
