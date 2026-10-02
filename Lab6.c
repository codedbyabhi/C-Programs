#include<stdio.h>
void main(){
    
    int a = 100;
    int b = 200;
    int c = 300;
    
    int max;
    
    if(a>=b && a>=c){
        max = a;
    }
     if(b>=a && b>=c){
        max = b;
    }
    else{
        max=c;
    } 
    
    printf("Max num is ;%d\n",max);
}