#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i;
    printf("Enter the length of K rectangle : ");
    scanf("%d",&a);
    printf("Enter the breadth of K rectangle : ");
    scanf("%d",&b);
    printf("Enter the length of P rectangle : ");
    scanf("%d",&c);
    printf("Enter the  breadth of P rectangle : ");
    scanf("%d",&d);
    printf("Enter the length of Q rectangle : ");
    scanf("%d",&e);
    printf("Enter the breadth of Q rectangle : ");
    scanf("%d",&f);
    g=2*(a+b);// perimeter of K
    h=2*(c+d);// perimeter of P
    i=2*(e+f);// perimeter of Q
    g>h && g>i ? printf("K rectangle has the largest perimeter \n"):printf("K rectangle has not  the largest perimeter \n");
    h>g && h>i ? printf("P rectangle has the largest perimeter \n"):printf("P rectangle has not  the largest perimeter \n");
    i>h && i>g ? printf("Q rectangle has the largest perimeter \n"):printf("Q rectangle has not  the largest perimeter \n");
    return 0;

}