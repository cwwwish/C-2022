#include<stdio.h>

int main() {
    const double PI = 3.141592;
    double radius, volume, sphere_weight, b_force;
    int choice;
    do {
        printf("Enter the radius of the sphere\n");
        scanf("%lf", &radius);
        printf("You entered %.2lf\n", radius);
        
        printf("Enter the weight of the sphere\n");
        scanf("%lf", &sphere_weight);
        printf("You entered %.2lf\n", sphere_weight);
        
        b_force = (4.0/3.0)*PI*radius*radius*radius*62.4;
        printf("Buoyant force = %.2lf\n", b_force);
        
        if(b_force >= sphere_weight)
        printf("Egads, it floats!\n");
        
        else
        printf("It sunk....\n");
        
        printf("Recalculate? (1=yes, 0=exit)\n");
        scanf("%d", &choice);
    } 
    while (choice == 1);
}