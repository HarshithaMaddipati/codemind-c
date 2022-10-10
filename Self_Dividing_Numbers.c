#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int i,temp,cnt,rem;
    for(i=a;i<=b;i++)
    {
        temp=i;
        cnt=0;
        while(temp)
        {
            rem=temp%10;
            if(rem==0 || i%rem!=0)
            {
                cnt=1;
                break;
            }
            temp/=10;
        }
        if(cnt==0)
        {
            printf("%d ",i);
        }
    }
}