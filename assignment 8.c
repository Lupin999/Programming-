//c operators -Arithmetic operators
#include <stdio.h>
#include <string.h>
int main() {
    int age = 18;
    char citizenship[] = "Kenyan";
    if (age >= 18 && strcmp(citizenship, "Kenyan") == 0 ){
    printf("The person is at least 18 years old and is a Kenyan citizen.\n");
    }
    else{
        printf("the person does not meet the criteria.\n");
    }

    return 0;
}