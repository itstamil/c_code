#include<stdio.h>
#include<math.h>

//Function to calculate the area of circle

float area_circle(float radius){
    return M_PI * radius * radius;
}

int main(){
    float radius,area;
    printf("Enter the radius of circle :");
    scanf("%f",&radius);
    area = area_circle(radius);
    printf("Area of the circle : %f", area);
    return 0;
}