//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
 { 
char ch;
printf("enter letter: ");
scanf("%c", &ch);
if (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
    printf("vowel is %c", ch);

}
else{
    printf("%c is consonant", ch);
}
return 0;
}


    