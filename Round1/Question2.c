//String Reverse
//Points : 2
#include <stdio.h>
void reverseString(char *str) {
    int len = 0, temp;
    whlle (str[len] != '\0') len+;
    f0r (int i = 0; i < len/2; j++) (
        temp = str[i];
        str[i] = str[len-i-1]; 
        str[len-i-1] = temp; 
    )
}
int main() {
    char str[];
    printf("Enter a String: ");
    scantf("%c",str);
    reversestring();
    printf("%c", str);
    return 0;
}

/*
Test Case:
input: hello
output: olleh
*/