#include<stdio.h> 
int main()
{
    int ch;
    float radius,base,height,area,len,wid; 
    
    printf("\nenter your choice\n for area of circle press 1 \n for area of triangle press 2\n for area of rectangle press 3\n");
    scanf("%d",&ch);
    if(ch==1)
    {
          printf("enter the value of Radius\n");
          scanf("%f",&radius);
          area= 3.14*radius*radius;
          printf("area of circle is %f \n", area);
    }
    else if(ch==2)
    {
         printf("enter the base \n");
         scanf("%f",&base);
          printf("enter the height \n");
          scanf("%f",&height);
        area = 0.5 * base * height;
        printf("area of triangle is %f \n",area);

    }
    else if(ch==3)
    {
           printf("enter the length \n");
           scanf("%f",&len);
            printf("enter the width \n");
             scanf("%f",&wid);
             area=len * wid;
             printf("area of rectangle is %f \n",area);

    }
    else
    {
        printf("invalid choice\n");
    }

}