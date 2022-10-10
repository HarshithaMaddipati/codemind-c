#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,z;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    printf("%d",z%m);
}