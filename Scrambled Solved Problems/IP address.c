#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    printf("Enter the string :");
    gets(a);
    strrev(a);
    printf("Reverse of the string : %s",a);
    return 0;
}
