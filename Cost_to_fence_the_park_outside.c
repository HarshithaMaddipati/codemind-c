#include<stdio.h>
int main()
{
    int l,b,w,c,ai,ao,af,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ao=(l+2*w)*(b+2*w);
    ai=l*b;
    af=ao-ai;
    tc=c*af;
    printf("%d",tc);
    
}