/*Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().*/
#include<stdio.h>
#include<stdlib.h>
int main() {

    float  n  = 5.0;
    float * ptr;
  

    ptr = (float*) malloc(n * sizeof(float));
    ptr[0] = 3.6;
    ptr[1] = 6.3;
    ptr[2] = 7.3;
    ptr[3] = 6.8;
    ptr[4] = 9.3;

    printf("%0.2f\n" , ptr[0]);
    printf("%0.2f\n" , ptr[1]);
    printf("%0.2f\n" , ptr[2]);
    printf("%0.2f\n" , ptr[3]);
    printf("%0.2f" , ptr[4]);
     
  
 return 0;
}