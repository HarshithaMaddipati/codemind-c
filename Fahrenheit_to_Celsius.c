#include<stdio.h>
int main()
{
    int f;
    float c;
    scanf("%d",&f);
    c=((f-32.0)*5.0)/9.0;
    printf("%0.2f",c);
}