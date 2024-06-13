#include <stdio.h>
#define PI 3.14

int main(){
    float r;
    printf("enter radius :");
    scanf("%f",&r);

    float A;
    A = PI*r*r;
    printf("area of circle is %f", A);
    
    
    return 0;
}