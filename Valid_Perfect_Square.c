#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,ivar;
    float fvar;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int num;
        scanf("%d",&num);
        fvar=sqrt((double)num);
        ivar=fvar;
        if(ivar==fvar)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}