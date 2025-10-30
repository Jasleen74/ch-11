/*Quick Quiz: Write a program to demonstrate the usage of free() with malloc().*/
#include<stdio.h>
#include<stdlib.h>
int main() {

    int n ;
    int * ptr;
    printf("Enter a number pls : ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 7;
    free(ptr);        //memory free free freee freeeeeee!!!!!!!!
    printf("%d\n" , ptr[0]);

    //now it will return us a garbage 
     
 return 0;
}
