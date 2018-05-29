#include <cstdio>
#include <cstring>
#include <malloc.h>
#include <iostream>
using namespace std;
#define MAXN 26
char str [1017] [MAXN];
typedef struct Trie
{
    // Change based on need; int v
    Trie * next [MAXN];
    // Next is how much of each type of number. Suppose only lowercase letters. It can be 26,
    // If to uppercase and lowercase letters, it is 52, when coupled with digital, it is a 62
} Trie;
Trie * root;

void createTrie (char * str)
{
    int len ​​= strlen (str);
    Trie * p = root, * q;
    for (int i = 0; i <len; i ++)
    {
        int id = str [i] - 'a';
        if (p-> next [id] == NULL)
        {
            q = (Trie *) malloc (sizeof (Trie));
            q-> v = 1; // initial v == 1
            for (int j = 0; j <MAXN; j ++)
                q-> next [j] = NULL;
            p-> next [id] = q;
            p = p-> next [id];
        }
        else
        {
            p-> next [id] -> v ++;
            p = p-> next [id];
        }
    }
    // P-> v = -1; // If it is the end. V will be changed to -1 indicates
}

void findTrie (char * str)
{
    char ss [MAXN];
    int len ​​= strlen (str);
    Trie * p = root;
    for (int i = 0; i <len; i ++)
    {
        int id = str [i] - 'a';
        p = p-> next [id];
        ss [i] = str [i];
        ss [i + 1] = '\ 0';
        if (p-> v == 1) // prefix can uniquely identify the string
        {
            printf ( "% s% s \ n", str, ss);
            return;
        }
        // Return 0;
        // If (p-> v == -1) // string character set has a prefix of this string
        // Return -1;
    }
    // Return p-> v;
    // Return -1; // This string is a prefix of a string character set
    printf ( "%s %s\ n", str, str);
    // Return;
}
int main ()
{
    int cont = 0;
    root = (Trie *) malloc (sizeof (Trie));
    for (int i = 0; i <MAXN; i ++)
        root-> next [i] = NULL;
    while (scanf ( "% s", str [cont])! = EOF)
    {
        createTrie (str [cont]);
        cont ++;
    }
    for (int i = 0; i <cont; i ++)
    {
        findTrie (str [i]);
    }
    return 0;
}
