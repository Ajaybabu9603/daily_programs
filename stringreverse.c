#include<stdio.h>
int main()
{
        char a[26];
        char ch;
        int l,i;
        printf("enter string:");
        scanf("%[^\n]s",a);
        for(l=0;a[l]!='\0';l++);
        for(i=0;i<l/2;i++)
        {
                ch=a[i];
                a[i]=a[l-i-1];
                a[l-i-1]=ch;
        }
        printf("reverse of given string=%s",a);
        return 0;
}

