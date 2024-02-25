// Write a program to find the value of y for a particular value of n. 
// The a, x, b, n is input by 
// user if n=1 y=ax%b if n=2 y=ax2+b2 if n=3 y=a-bx if n=4 y=a+x/b

#include <stdio.h>
void main()
{
    printf("\n\n");

    int a,x,b,n,y;

    printf("enter the value of a,x,b,n respectively: ");
    scanf("%d%d%d%d",&a,&x,&b,&n);

    if(n==1){
        y = a * (x%b);
    }else if(n==2){
        y = (a*x*2)+(b*2);
    }else if(n==3){
        y=a-(b*x);
    }else if(n==4){
        y=a+(x/b);
    }else{
        printf("invalid input");
    }

    printf("%d",y);

    printf("\n\n");
}