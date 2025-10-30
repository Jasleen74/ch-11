/*Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the user.*/
#include<stdio.h>
#include<stdlib.h>
int main() {

    int n ;
    int * ptr;
    printf("Enter a number pls : ");
    scanf("%d", &n);

    ptr = (int*) calloc(n , sizeof(int));
    ptr[0] = 7;
    ptr[1] = 8;

    printf("%d\n" , ptr[0]);
    printf("%d" , ptr[1]);

     
  
 return 0;
}