#include<stdio.h>
int main()
{
    int n,rem,p=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        s+=rem;
        p*=rem;
        n=n/10;
    }
    if(p==s)
    {
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}