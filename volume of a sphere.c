//finding the volume of the sphere
#include <stdio.h>
#include <math.h>
#define Pi 3.142
int main() {
    int radius;
    float volume;
    printf("Enter the radius:");
    scanf("%d",&radius);
    volume = (4.0/3.0)*Pi*pow (radius,3);
    printf("The volume of the sphere with radius %d:%.2f\n",radius,volume);

    return 0;
}