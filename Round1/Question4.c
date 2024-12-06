//Alternating Case Converter
//Points 3
#include<stdio,h>
#include<stringh>
#include<ctype.h>
int main(){
    char str[10];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0;i<strlen(str);i++){
        if(i%3=0)
        printf("%c",tolower(str[i]));
        else 
        printf("%c",toupper(str[i]));
    }
}

/*
Test Cases:
1.input: Hello World!               output: HeLlO WoRlD!

2.input: This is C programming.     output: ThIs iS C PrOgRaMmInG.
*/