#include <stdio.h>
#include <time.h>
void name(void);
int main()
{
    int a=1,p=1;
    char b[]="HAPPY BIRTHDAY";
    char c[]="ABAAAALLLLLL -__-  tui ki vabsis !! valo kicu bolbo ??";

    while(a!=15)
    {
        if(clock()>a*1000&&p==a)
        {
            printf(" %c\b",b[a-1]);
            a++ ;
            p++;
        }

    }

    printf("\n\nHAPPY BIRTHDAY...\n\n");
    p=1;
    a=1;
    int l=clock();
    while(a!=54)
    {
        if(clock()-l>a*200&&p==a)
        {
            printf("%c",c[a-1]);
            a++ ;
            p++;
        }

    }
    printf("\n\n");
    char kotha[]="kotha gulo banglay likhte parle beshi vl lagto.....  \b\b\nbt ki ar korar banglate akhono kono language ase nai....  \b\b       \n\nYesterday amr toke hug deyar kotha chilo .. birthday hug..       \b\b\b\b\nbt   \b\b\b tor hug tai shobce beshi dorkar chilo tokhon amar...  \b\b aci always thakbo ..    \b\b\b\njdi kono din bohu dur chole jai ,   \b\b\ndur theke dekhbo toder ,         \b\b\b\bakasher tara hoye dekhbo .. :)              \b\b\b\b\b\nAlways hashte thak ,  \b\b Always emn bod hoye thak .. ";
    p=1;
    a=1;
    l=clock();
    while(kotha[a]!='\0')
    {
        if(clock()-l>a*100&&p==a)
        {
            printf("%c",kotha[a-1]);
            a++ ;
            p++;
        }

    }

    printf("\n\n");
    printf("Again Happy Happy Birthday\n");


    int i, n,k=1;
    char name[]="SOURAV";
    int j=clock();
    n = strlen(name);
    printf("\n");
    while(1)
        if((clock()-j)>500){
        for (i=0; i<n; i++)
        {
            if (name[i]=='A' || name[i]=='a')
            {
                printf("  *** ");
            }
            else if (name[i]=='B' || name[i]=='b')
            {
                printf(" **** ");
            }
            else if (name[i]=='C' || name[i]=='c')
            {
                printf("  *** ");
            }
            else if (name[i]=='D' || name[i]=='d')
            {
                printf(" **** ");
            }
            else if (name[i]=='E' || name[i]=='e')
            {
                printf(" *****");
            }
            else if (name[i]=='F' || name[i]=='f')
            {
                printf(" *****");
            }
            else if (name[i]=='G' || name[i]=='g')
            {
                printf("  *** ");
            }
            else if (name[i]=='H' || name[i]=='h')
            {
                printf(" *   *");
            }
            else if (name[i]=='I' || name[i]=='i')
            {
                printf(" *****");
            }
            else if (name[i]=='J' || name[i]=='j')
            {
                printf(" *****");
            }
            else if (name[i]=='K' || name[i]=='k')
            {
                printf(" *   *");
            }
            else if (name[i]=='L' || name[i]=='l')
            {
                printf(" *    ");
            }
            else if (name[i]=='M' || name[i]=='m')
            {
                printf(" *   *");
            }
            else if (name[i]=='N' || name[i]=='n')
            {
                printf(" *   *");
            }
            else if (name[i]=='O' || name[i]=='o')
            {
                printf("  *** ");
            }
            else if (name[i]=='P' || name[i]=='p')
            {
                printf(" **** ");
            }
            else if (name[i]=='Q' || name[i]=='q')
            {
                printf("  *** ");
            }
            else if (name[i]=='R' || name[i]=='r')
            {
                printf(" **** ");
            }
            else if (name[i]=='S' || name[i]=='s')
            {
                printf("  *** ");
            }
            else if (name[i]=='T' || name[i]=='t')
            {
                printf(" *****");
            }
            else if (name[i]=='U' || name[i]=='u')
            {
                printf(" *   *");
            }
            else if (name[i]=='V' || name[i]=='v')
            {
                printf(" *   *");
            }
            else if (name[i]=='W' || name[i]=='w')
            {
                printf(" *   *");
            }
            else if (name[i]=='X' || name[i]=='x')
            {
                printf(" *   *");
            }
            else if (name[i]=='Y' || name[i]=='y')
            {
                printf(" *   *");
            }
            else if (name[i]=='Z' || name[i]=='z')
            {
                printf(" *****");
            }
        }
     break;
        }
        printf("\n");
        while(1)
        if((clock()-j)>1250){
        for (i=0; i<n; i++)
        {
            if (name[i]=='A' || name[i]=='a')
            {
                printf(" *   *");
            }
            else if (name[i]=='B' || name[i]=='b')
            {
                printf(" *   *");
            }
            else if (name[i]=='C' || name[i]=='c')
            {
                printf(" *   *");
            }
            else if (name[i]=='D' || name[i]=='d')
            {
                printf(" *   *");
            }
            else if (name[i]=='E' || name[i]=='e')
            {
                printf(" *    ");
            }
            else if (name[i]=='F' || name[i]=='f')
            {
                printf(" *    ");
            }
            else if (name[i]=='G' || name[i]=='g')
            {
                printf(" *    ");
            }
            else if (name[i]=='H' || name[i]=='h')
            {
                printf(" *   *");
            }
            else if (name[i]=='I' || name[i]=='i')
            {
                printf("   *  ");
            }
            else if (name[i]=='J' || name[i]=='j')
            {
                printf("     *");
            }
            else if (name[i]=='K' || name[i]=='k')
            {
                printf(" *  * ");
            }
            else if (name[i]=='L' || name[i]=='l')
            {
                printf(" *    ");
            }
            else if (name[i]=='M' || name[i]=='m')
            {
                printf(" ** **");
            }
            else if (name[i]=='N' || name[i]=='n')
            {
                printf(" **  *");
            }
            else if (name[i]=='O' || name[i]=='o')
            {
                printf(" *   *");
            }
            else if (name[i]=='P' || name[i]=='p')
            {
                printf(" *   *");
            }
            else if (name[i]=='Q' || name[i]=='q')
            {
                printf(" *   *");
            }
            else if (name[i]=='R' || name[i]=='r')
            {
                printf(" *   *");
            }
            else if (name[i]=='S' || name[i]=='s')
            {
                printf(" *    ");
            }
            else if (name[i]=='T' || name[i]=='t')
            {
                printf("   *  ");
            }
            else if (name[i]=='U' || name[i]=='u')
            {
                printf(" *   *");
            }
            else if (name[i]=='V' || name[i]=='v')
            {
                printf(" *   *");
            }
            else if (name[i]=='W' || name[i]=='w')
            {
                printf(" *   *");
            }
            else if (name[i]=='X' || name[i]=='x')
            {
                printf("  * * ");
            }
            else if (name[i]=='Y' || name[i]=='y')
            {
                printf("  * * ");
            }
            else if (name[i]=='Z' || name[i]=='z')
            {
                printf("    * ");
            }
        }
        break;
        }
        printf("\n");
        while(1)
        if((clock()-j)>2000){
        for (i=0; i<n; i++)
        {
            if (name[i]=='A' || name[i]=='a')
            {
                printf(" *****");
            }
            else if (name[i]=='B' || name[i]=='b')
            {
                printf(" **** ");
            }
            else if (name[i]=='C' || name[i]=='c')
            {
                printf(" *    ");
            }
            else if (name[i]=='D' || name[i]=='d')
            {
                printf(" *   *");
            }
            else if (name[i]=='E' || name[i]=='e')
            {
                printf(" **** ");
            }
            else if (name[i]=='F' || name[i]=='f')
            {
                printf(" **** ");
            }
            else if (name[i]=='G' || name[i]=='g')
            {
                printf(" *  **");
            }
            else if (name[i]=='H' || name[i]=='h')
            {
                printf(" *****");
            }
            else if (name[i]=='I' || name[i]=='i')
            {
                printf("   *  ");
            }
            else if (name[i]=='J' || name[i]=='j')
            {
                printf("     *");
            }
            else if (name[i]=='K' || name[i]=='k')
            {
                printf(" * *  ");
            }
            else if (name[i]=='L' || name[i]=='l')
            {
                printf(" *    ");
            }
            else if (name[i]=='M' || name[i]=='m')
            {
                printf(" * * *");
            }
            else if (name[i]=='N' || name[i]=='n')
            {
                printf(" * * *");
            }
            else if (name[i]=='O' || name[i]=='o')
            {
                printf(" *   *");
            }
            else if (name[i]=='P' || name[i]=='p')
            {
                printf(" **** ");
            }
            else if (name[i]=='Q' || name[i]=='q')
            {
                printf(" *   *");
            }
            else if (name[i]=='R' || name[i]=='r')
            {
                printf(" **** ");
            }
            else if (name[i]=='S' || name[i]=='s')
            {
                printf("  *** ");
            }
            else if (name[i]=='T' || name[i]=='t')
            {
                printf("   *  ");
            }
            else if (name[i]=='U' || name[i]=='u')
            {
                printf(" *   *");
            }
            else if (name[i]=='V' || name[i]=='v')
            {
                printf(" *   *");
            }
            else if (name[i]=='W' || name[i]=='w')
            {
                printf(" * * *");
            }
            else if (name[i]=='X' || name[i]=='x')
            {
                printf("   *  ");
            }
            else if (name[i]=='Y' || name[i]=='y')
            {
                printf("   *  ");
            }
            else if (name[i]=='Z' || name[i]=='z')
            {
                printf("   *  ");
            }
        }
        break;
        }

        printf("\n");
        while(1)
        if((clock()-j)>2750){
        for (i=0; i<n; i++)
        {
            if (name[i]=='A' || name[i]=='a')
            {
                printf(" *   *");
            }
            else if (name[i]=='B' || name[i]=='b')
            {
                printf(" *   *");
            }
            else if (name[i]=='C' || name[i]=='c')
            {
                printf(" *   *");
            }
            else if (name[i]=='D' || name[i]=='d')
            {
                printf(" *   *");
            }
            else if (name[i]=='E' || name[i]=='e')
            {
                printf(" *    ");
            }
            else if (name[i]=='F' || name[i]=='f')
            {
                printf(" *    ");
            }
            else if (name[i]=='G' || name[i]=='g')
            {
                printf(" *   *");
            }
            else if (name[i]=='H' || name[i]=='h')
            {
                printf(" *   *");
            }
            else if (name[i]=='I' || name[i]=='i')
            {
                printf("   *  ");
            }
            else if (name[i]=='J' || name[i]=='j')
            {
                printf(" *   *");
            }
            else if (name[i]=='K' || name[i]=='k')
            {
                printf(" ** * ");
            }
            else if (name[i]=='L' || name[i]=='l')
            {
                printf(" *    ");
            }
            else if (name[i]=='M' || name[i]=='m')
            {
                printf(" *   *");
            }
            else if (name[i]=='N' || name[i]=='n')
            {
                printf(" *  **");
            }
            else if (name[i]=='O' || name[i]=='o')
            {
                printf(" *   *");
            }
            else if (name[i]=='P' || name[i]=='p')
            {
                printf(" *    ");
            }
            else if (name[i]=='Q' || name[i]=='q')
            {
                printf(" *  **");
            }
            else if (name[i]=='R' || name[i]=='r')
            {
                printf(" *  * ");
            }
            else if (name[i]=='S' || name[i]=='s')
            {
                printf("     *");
            }
            else if (name[i]=='T' || name[i]=='t')
            {
                printf("   *  ");
            }
            else if (name[i]=='U' || name[i]=='u')
            {
                printf(" *   *");
            }
            else if (name[i]=='V' || name[i]=='v')
            {
                printf("  * * ");
            }
            else if (name[i]=='W' || name[i]=='w')
            {
                printf(" * * *");
            }
            else if (name[i]=='X' || name[i]=='x')
            {
                printf("  * * ");
            }
            else if (name[i]=='Y' || name[i]=='y')
            {
                printf("   *  ");
            }
            else if (name[i]=='Z' || name[i]=='z')
            {
                printf("  *   ");
            }
        }
        break;
        }
        printf("\n");
        while(1)
        if((clock()-j)>3500){
        for (i=0; i<n; i++)
        {
            if (name[i]=='A' || name[i]=='a')
            {
                printf(" *   *");
            }
            else if (name[i]=='B' || name[i]=='b')
            {
                printf(" **** ");
            }
            else if (name[i]=='C' || name[i]=='c')
            {
                printf("  *** ");
            }
            else if (name[i]=='D' || name[i]=='d')
            {
                printf(" **** ");
            }
            else if (name[i]=='E' || name[i]=='e')
            {
                printf(" *****");
            }
            else if (name[i]=='F' || name[i]=='f')
            {
                printf(" *    ");
            }
            else if (name[i]=='G' || name[i]=='g')
            {
                printf("  *** ");
            }
            else if (name[i]=='H' || name[i]=='h')
            {
                printf(" *   *");
            }
            else if (name[i]=='I' || name[i]=='i')
            {
                printf(" *****");
            }
            else if (name[i]=='J' || name[i]=='j')
            {
                printf("  *** ");
            }
            else if (name[i]=='K' || name[i]=='k')
            {
                printf(" *   *");
            }
            else if (name[i]=='L' || name[i]=='l')
            {
                printf(" *****");
            }
            else if (name[i]=='M' || name[i]=='m')
            {
                printf(" *   *");
            }
            else if (name[i]=='N' || name[i]=='n')
            {
                printf(" *   *");
            }
            else if (name[i]=='O' || name[i]=='o')
            {
                printf("  *** ");
            }
            else if (name[i]=='P' || name[i]=='p')
            {
                printf(" *    ");
            }
            else if (name[i]=='Q' || name[i]=='q')
            {
                printf("  ****");
            }
            else if (name[i]=='R' || name[i]=='r')
            {
                printf(" *   *");
            }
            else if (name[i]=='S' || name[i]=='s')
            {
                printf("  *** ");
            }
            else if (name[i]=='T' || name[i]=='t')
            {
                printf("   *  ");
            }
            else if (name[i]=='U' || name[i]=='u')
            {
                printf("  *** ");
            }
            else if (name[i]=='V' || name[i]=='v')
            {
                printf("   *  ");
            }
            else if (name[i]=='W' || name[i]=='w')
            {
                printf("  * * ");
            }
            else if (name[i]=='X' || name[i]=='x')
            {
                printf(" *   *");
            }
            else if (name[i]=='Y' || name[i]=='y')
            {
                printf("   *  ");
            }
            else if (name[i]=='Z' || name[i]=='z')
            {
                printf(" *****");
            }
        }
        break;
        }

        printf("\n");



    return 0;
}



