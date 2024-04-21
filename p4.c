// wap to write expression in c language

#include <stdio.h>
#include <math.h>
int main() 
{
    float lenght,a,b,c,d;
    printf("enter value of a , b , c and d");
    scanf("%f %f %f %f",&a ,&b ,&c ,&d);
     
    lenght = sqrt((a-b)*(a-b)+(c-d)*(c-d));

    printf("value of lenght is %f\n",lenght);

    return 0;
}

