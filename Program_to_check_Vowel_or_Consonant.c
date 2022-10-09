#include<stdio.h>
int main()
{
    char a;
    scanf("%s",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("Vowel");
    }
    else if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}