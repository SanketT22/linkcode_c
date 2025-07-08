#include<stdio.h>
int main(){
    int ch1,ch2,ch,c;
    float input,result;

    printf("\n 1-Rupee\n 2-Dollar\n 3-Euro\n");
    printf("enter your Currency");
    scanf("%d",&ch1);

    if(ch1==1)
    {   
         rupee:
        printf("enter your amount in rupees\n");
        scanf("%f",&input);
        
        printf("enter your choice to convert your currency\n");

        printf("\n 1-Rupee\n 2-Dollar\n 3-Euro");
        scanf("%d",&ch2);

        if(ch2==1)
        {
           
            result=input;
            printf("\n %f rupee= %f rupee",input,result);
        }
        else if(ch2==2)
        {
            result=input/85.69;
            printf("\n %f rupees equal to %f Doller",input,result);
        }
        else if(ch2==3)
        {
            result=input/100.57;
            printf("\n %f rupee = %f euro",input,result);
        }
        printf("\n do you want to continue with rupee converter");
        scanf("%d",&c);
        if(c==1)
        {
            goto rupee;
        }
        printf("\n thank you\n");
    
    }

    if(ch1==2)
    {
        Dollar:
         printf("enter your amount in Dollar\n");
        scanf("%f",&input);
        
        printf("enter your choice to convert your currency\n");

        printf("\n 1-Rupee\n 2-Dollar\n 3-Euro");
        scanf("%d",&ch2);

        if(ch2==1)
        {
           
            result=input* 85.69;
            printf("\n %f Dollar equal to %f rupees",input,result);
        }
        else if(ch2==2)
        {
            result=input;
            printf("\n %f Dollar equal to %f Doller",input,result);
        }
        else if(ch2==3)
        {
            result=input * 0.85;
            printf("\n %f Dollar = %f euro",input,result);
        }
        printf("\n do you want to continue with dollar converter");
        scanf("%d",&c);
        if(c==1)
        {
            goto Dollar;
        }
        printf("\n thank you\n");
    }

    if(ch1==3)
    {
         Euro:
         printf("enter your amount in Euro\n");
        scanf("%f",&input);
        
        printf("enter your choice to convert your currency\n");

        printf("\n 1-Rupee\n 2-Dollar\n 3-Euro");
        scanf("%d",&ch2);

        if(ch2==1)
        {
           
            result=input* 100.69;
            printf("\n %f euro equal to %f rupees",input,result);
        }
        else if(ch2==2)
        {
            result=input * 1.08;
            printf("\n %f euro equal to %f Doller",input,result);
        }
        else if(ch2==3)
        {
            result=input;
            printf("\n %f euro = %f euro",input,result);
        }
        printf("\n do you want to continue with euro converter");
        scanf("%d",&c);
        if(c==1)
        {
            goto Euro;
        }
        printf("\n thank you\n");
    }

    

}