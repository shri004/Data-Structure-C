#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct header
{
    struct node *start,*end;
    int n;
};
 
 void insert(struct header*h)
 {
    struct node*newrec;
    newrec=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newrec->data);
    newrec->next=NULL;

    if (h->start==NULL)
    h->start=newrec;
else 
h->end->next=newrec;
h->end=newrec;
h->n++;
 }

 void deleten(struct header*h)
 {
    struct node*old;
    old=h->start;
    h->start=old->next;
    printf("delete node=%d",old->data);
    free(old);
    h->n--;
 }

 void displayf(struct header*h)
 {
    struct node*old;
    old=h->start;
    while(old!=NULL)
     {
        printf("%d\n",old->data);
        old=old->next;
     }
 }

void destroy (struct header*h)
{
    while(h->start!=NULL)
    deleten(h);
h->end=NULL;
}

struct header h1;
void main()
{
    char ch;
    

    do{
        printf("Menu\n1.Insert\n2.Display\n3.Delete\n4.destroy\n5.Exit\n");
        printf("enter your choice");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert(&h1);
            break;
             case 2: displayf(&h1);
            break;
             case 3: deleten(&h1);
            break;
             case 4: destroy(&h1);
            break;
             case 5: break;
            default:printf("wrong choice\n");
        }
    }
    while(ch!=5);
    getch();
}