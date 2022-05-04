# include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    
   //ask the user to enter the values of p,n,r
    printf("Enter the values of p,n,r\n");
    scanf("%d%d%f",&p,&n,&r); //user gives the input from keyboard

    si = p*n*r/100;

    printf("simple interest: %f",si);
}

/*
1. same program but user provides the input through keyboard.
2. formula: p*n*r/100

*/