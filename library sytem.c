\\Author:Joel
\\RegNomb:BSE-01-0046\2024
\\Description:programme for library system
#include<stdio.h>
int main(){
int book_id,due_date,return_date,days_overview;
printf("Enter the bookId:");
scanf("%d",&book_id);
printf("Enter the return_date");
scanf("%d",&returndate:");
printf("Enter the due date:");
scanf("%d",&due_date:");
days_overview = return_date - due_date;
if(days_overdue >=1 && days_overdue <=7){
fine = days_overde*20;
if(days overdue >=8 && days_overdue<=14){
fine = days_overdue*50
else if (days_overview>=8 && days_overview<=14){
fine = days_overdue*50;
else if(days_overdue >=15){
fine = days_overdue*100
}
printf(the number of days overdue is / are %d/n",days_overdue);
printf(The fine is ksh.%d,fine);