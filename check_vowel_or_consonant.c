#include <stdio.h>

main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);
//check vowel or consonant. 
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is consonent.\n", ch);
    }

    return 0;
}

