//sum and avg
#include <stdio.h>
void main(){
    int n1,n2,n3,n4,n5,sum;
    float avg;
    printf("enter marks");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    sum = n1+n2+n3+n4+n5;
    avg = sum/5;
    printf("%d\n\n%f",sum,avg);
    printf("\n\n");
}