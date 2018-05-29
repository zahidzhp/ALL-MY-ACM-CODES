#include <stdio.h>
#include <string.h>
int main()
{
    char dictionary[200][10],main_word[100][10],starting[50][10];
    int test_case,i=0,len[200],j=0,k,len_main[100];
    while(scanf("%s",&dictionary[i])!='*')
    {
        len[i]=strlen(dictionary[i]);
        i++;
    }
    while(scanf("%s",&main_word[j])>0)
    {
        len_main[j]=strlen(main_word[j]);
        for(k=0; k<len_main[j]/2; k++)
        {

            starting[j][k]=main_word[j][k];

        }
        for(k=len_)
        j++;
    }

}
