#include<stdio.h>
#include<stdlib.h>
int main() {

    int n ;
    int * ptr;
    printf("Enter a number pls : ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;

    printf("%d\n" , ptr[0]);
    printf("%d" , ptr[1]);

     
  
 return 0;
}