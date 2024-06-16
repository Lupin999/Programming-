\\Author:Joel
\\RegNomb:BSE-01-0046\2024
\\Description:programme to calculate electrical bill
#include<stdio.h>
int main(){
int customer id;
char customerName[50];
int unitconsumed;
int charges,totalbill
printf("Enter the customerID:");
scanf("%d,&customerID);
printf("enter the customer name:");
scanf("%s",customerName);
printf("Enter the unitconsumed:");
scanf("%d",&unitconsumed);
if(unitconsumed <= 199){
charges = unitconsumed*1.20;
}
else if(unitconsumed <= 400)
{
charges = unitconsumed*1.50;
}
else if(unit consumed<= 600)
{
charges = unitconsumed*1.80;
else {
charges = unitconsumed*2.00;
}
printf("\nCustomerID:%d\n",customeriD);
printf("CustomerName:%s\n",customername);
printf("unitconsumed:%d\n",unitconsumed);
printf("Totalbill:%2f\n",totalbill);
return 0;
}