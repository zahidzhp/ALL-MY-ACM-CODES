#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0) return 0;

        if(a<=4.5&&b>=150&&c>=200)
        {
            printf("Wide Receiver");
            if(a<=6&&b>=300&&c>=500) printf(" Lineman");
            if(a<=5&&b>=200&&c>=300) printf(" Quarterback");
            printf("\n");
            continue;
        }
        else if(a<=6&&b>=300&&c>=500)
        {
            if(a<=4.5&&b>=150&&c>=200)
            {
                printf("Wide Receiver");
                printf(" Lineman");
            }
            else printf("Lineman");
            if(a<=5&&b>=200&&c>=300) printf(" Quarterback");
            printf("\n");
            continue;
        }
        else if(a<=5&&b>=200&&c>=300)
        {

            if(a<=4.5&&b>=150&&c>=200)
            {
                printf("Wide Receiver");
                if(a<=6&&b>=300&&c>=500) printf(" Lineman");
                printf(" Quarterback\n");
                continue;
            }
            else if(a<=6&&b>=300&&c>=500)
            {
                printf("Lineman Quaterback\n");
                continue;
            }
            printf("Quarterback\n");
            continue;

        }
        printf("No positions\n");
    }
    return 0;
}
