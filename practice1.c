#include <stdio.h>

int main() {
    int i=2,j=3,k,l;
    float a,b;

    k = i/j*j; 
    l = j/i*i; 
    a = i/j*j; 
    b = j/i*i; 

    printf("%d %d %f %f\n",k,l,a,b);
}

/* 
1. program to see how conversion worked in c .
2. the type of variable is used to store that value is more important.
*/