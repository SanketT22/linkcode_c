#include <stdio.h>
#include <stdlib.h>

struct Node
{
    ind data;
    struct Node *next_addr;
    struct Node *prev_addr;
} *start,*curr;

void create(int);
void display();


void main()
{
   int n;
   int ch,ct;
   start=NULL;

   while(1)
   {
     printf("\n1 - create Double linked list \n2 - Display \n3 - Insert firts node \n4 - Insert Middle Node \n5 - Delete first node \n6 - Delete middle node");
     printf("\n enter your choice");
     scanf("%d", &ch);
     switch(ch)
     {
        case 1:
                printf("\n enter any value");
                scanf("%d",&n);
                create(n)
                display();
        break;
        case 2:
               display();
        break;
        
     }

printf("\n do you want to continue press 1");
scanf("%d",&ct);
if(ct!=1)
{
    break;
}
  

   }
printf("\n--------------------Thank You---------------")
}

void  create(int n)
{
    struct Node *newnode= malloc(sizeof(struct Node));
    newnode -> data=n;
    newnode -> next_addr=NULL;
    newnode -> prev_addr=NUll;

    if(start == Null)
    {
        start=newnode;
    }
    else
    {
        curr = start;
        while(curr -> next_addr != NULL)
        {
           curr -> next_addr=newnode;
           newnode -> prev_addr=curr;
        }
    }
}