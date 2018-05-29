#include <stdio.h>
#include <math.h>
int main()
{
    double wspd,wdirec,discour,tairspd,acheading,gspd,b,c;
    while(scanf("%lf %lf %lf %lf",&wspd,&wdirec,&discour,&tairspd)==4)
    {
        b=wspd*(sin((discour+wdirec)*2*cos(0)/180));
        c=tairspd+wspd*(cos((discour+wdirec)*2*cos(0)/180));
        acheading=discour+atan(b/c);
        gspd=sqrt(tairspd*tairspd+wspd*wspd+2*wspd*tairspd*cos(wdirec*2*cos(0)/180));
        printf("WIND SPEED %0.2lf\nWIND DIRECTION %0.2lf\nDESIRED COURSE %0.2lf\nTRUE AIRSPEED %0.2lf\nAIRCRAFT HEADING %0.2lf\nGROUND SPEED %0.2lf\n\n",wspd,wdirec,discour,tairspd,acheading,gspd);
    }
    return 0;
}
// have to change into radian from degree..
