#include<stdio.h>
void main(){
    int pop = 80000;
    int m = (pop*52)/100;
    int ml = (pop*35)/100; 
    int tl = (pop*48)/100;
    printf("%d",tl);
    printf("\n%d",pop-tl);
    printf("%d",pop*48/100);
}