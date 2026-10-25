#include <stdio.h>
void main(){
    
    char charecter;
    printf("Enter the value :");
    scanf("%c",&charecter);

    
    if(charecter>='a' && charecter<='z'){
        printf("Alphabet");
    }
    else if(charecter>='0' && charecter<='9'){
        printf("Digit");
    }
    else{
        printf("Special Charecter");
    }
}