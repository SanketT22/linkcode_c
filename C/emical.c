#include <stdio.h>
#include<math.h>

int main()
{
  int numOfYear,numOfMonths;
  float  loanAmt,annualInt,MonthInt,emi;
  float TotalPay,totalInt;
  
  printf("enter loan Amount");
  scanf("%f",&loanAmt);
  
  printf("enter Annual intrest rate in ");
  scanf("%f",&annualInt);
  
  printf("enter tenure in years");
  scanf("%d",&numOfYear);
  
  numOfMonths=numOfYear*12;
  MonthInt=annualInt / (12*100);
  
  emi=loanAmt * MonthInt * pow(1 + MonthInt, numOfMonths)/ 
       (pow(1 + MonthInt, numOfMonths) - 1);
  
    TotalPay = emi * numOfMonths;
    totalInt = TotalPay - loanAmt;
    
     printf("\n\t\t\t------------------------Loan Details:----------------------\n");
     printf("\t\tMonthly EMt\t\t\t\t\t:\t %.2f\n", emi);
    printf("\t\tTotal Interest Payable\t\t\t\t:\t %.2f\n",totalInt);
    printf("\t\tTotal Payment (Principal + Interest)\t\t:\t %.2f\n", TotalPay);



    return 0;
}