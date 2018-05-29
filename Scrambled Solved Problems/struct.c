#include<stdio.h>
struct stud
{
    int roll;
    double credit,cgpa;

} x[100];

int main()
{
    struct stud x[100];
    int i,j,n,temp;
    double temp1;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %lf %lf",&x[i].roll,&x[i].credit,&x[i].cgpa);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i].cgpa < x[j].cgpa)
            {
                    temp1=x[i].cgpa;
                    x[i].cgpa=x[j].cgpa;
                    x[j].cgpa=temp1;

                    temp1=x[i].credit;
                    x[i].credit=x[j].credit;
                    x[j].credit=temp1;

                    temp=x[i].roll;
                    x[i].roll=x[j].roll;
                    x[j].roll=temp;
            }

            if((x[i].cgpa == x[j].cgpa)&& x[i].credit < x[j].credit)
            {
                    temp1=x[i].credit;
                    x[i].credit=x[j].credit;
                    x[j].credit=temp1;

                    temp1=x[i].cgpa;
                    x[i].cgpa=x[j].cgpa;
                    x[j].cgpa=temp1;

                    temp=x[i].roll;
                    x[i].roll=x[j].roll;
                    x[j].roll=temp;
            }


        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d %.1lf %lf\n",x[i].roll,x[i].credit,x[i].cgpa);
    }
    return 0;
}
