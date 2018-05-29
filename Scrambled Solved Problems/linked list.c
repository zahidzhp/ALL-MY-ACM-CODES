#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
}*start=NULL;

void display()
{
    struct node *t;
    t=start;
    while(t!=NULL)
    {
        printf("%d ",t->info);
        t=t->next;
    }
}
void add_first()
{

}


int main()
{
    int b,c=0;
    while(scanf("%d",&b)==1)
    {
        struct node *nw,*cur;
        nw=(struct node*)malloc(sizeof(struct node));
        nw->next=NULL;
        nw->info=b;
        if(start==NULL)
        {
            start=nw;
            cur=nw;
        }
        else
        {
            cur->next=nw;
            cur=nw;
        }
    }

    display();
}
