#include<stdio.h>
int main()
{
    int ch;
    int c,ct;
    int total=0;
    float cgst,sgst,finaltotal;
    int cnt=0;
    menu:
    printf("\n enter your choice");
    printf("\n1 starter \n2 veg\n3 non-veg");
    scanf("%d",&ch);

    if(ch==1)
    {
        starter:
        printf("\n1 Aloo tikki \t:\t 150");
        printf("\n2 Aloo 65 \t:\t 200");
        printf("\n3 Aloo chat \t:\t 300");
        scanf("%d",&c);

        if(c==1)
        {
           total=total + 150;
        }
        else if(c==2)
        {
            total=total + 200;
        }
        else if(c==3)
        {
            total=total+300;
        }
        else
        {
            printf("invalid  choice");
        }
        if(cnt<=3)
        {
            cnt++;
            printf("\n %d order is placed",cnt);
        }
         printf("\n do you want to place any other order press 1 or else press 2\n");
        scanf("%d",&c);
        if(c==1)
        {
            goto starter;
        }
        printf("if you want to go for menu again press 1 or for bill press 2 \n");
        scanf("%d",&c);
        if(c==1)
        {
            goto menu;
        }
    }
     else if(ch==2)
   {
        veg:
        printf("\n1 paneer masal \t:\t 350");
        printf("\n2 mix veg \t:\t 300");
        printf("\n3 butter paneer \t:\t 400");
        scanf("%d",&c);

        if(c==1)
        {
           total=total + 350;
        }
        else if(c==2)
        {
            total=total + 300;
        }
        else if(c==3)
        {
            total=total+400;
        }
        else
        {
            printf("invalid  choice");
        }
        if(cnt<=3)
        {
            cnt++;
            printf("\n %d order is placed",cnt);
        }
         printf("\n do you want to place any other order press 1 or else press 2\n");
        scanf("%d",&c);
        if(c==1)
        {
            goto veg;
        }
        printf("if you want to go for menu again press 1 or for bill press 2");
        scanf("%d",&c);
        if(c==1)
        {
            goto menu;
        }
    }
    else if(ch==3)
    {
         nonveg:
        printf("\n1 chiken masal \t\t:\t 550");
        printf("\n2 chiken handi \t\t:\t 700");
        printf("\n3 butter chiken \t:\t 800");
        scanf("%d",&c);

        if(c==1)
        {
           total=total + 550;
        }
        else if(c==2)
        {
            total=total + 700;
        }
        else if(c==3)
        {
            total=total+800;
        }
        else
        {
            printf("invalid  choice");
        }
        if(cnt<=3)
        {
            cnt++;
            printf("\n %d order is placed",cnt);
        }
         printf("\n do you want to place any other order press 1 or else press 2");
        scanf("%d",&c);
        if(c==1)
        {
            goto nonveg;
        }
        printf("if you want to go for menu again press 1 or for bill press 2");
        scanf("%d",&c);
        if(c==1)
        {
            goto menu;
        }
    }
    if(cnt>0)
    {
        cgst=total+0.06;
        sgst=total+0.06;
        finaltotal=total+cgst+sgst;
        printf("\n total Bill : %d",total);
        printf("\n cgst : %f",cgst);
        printf("\n sgst : %f",sgst);
        printf("\n total bill :%f",finaltotal);
    }
    else
    {
        printf("\n no order placed ");
    }
    

}