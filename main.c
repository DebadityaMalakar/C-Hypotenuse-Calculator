#include <stdio.h>
#include <math.h>

void main(){
    double A;
    double B;
    double C;

    printf("Enter Base of the triangle: ");
    scanf("%lf",&A);

    printf("Enter Height of the triangle: ");
    scanf("%lf",&B);

    C=sqrt((A*A)+(B*B));

    printf("Hypotenuse: %lf", C);

}