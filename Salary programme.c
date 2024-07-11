//program to display salary and budget 
*/
Author:Joel
Date: 25/05/2024
*/
#include<stdio.h> //scanf(), printf ()
int main () {
int longlong = 50 ; //%d
float salary = 50.67; //%f
short budget = 35.78; //%lf
char a = 'c', //%c
printf("Please enter the value of longlong;");
scanf("%d",&longlong);
printf("The value of longlong is %d\n",longlong);
printf("The value of salary is %.2f\n",salary);
printf("The value of budget is %.2f\n",budget);
printf("The value of a is %c\n",a);
return 0;
}
