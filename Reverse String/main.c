//Reverse a string without using recursion

#include<stdio.h>
#include<string.h>
#define MAX 10
char arr[MAX];
int top=-1;

int main(){
    char s[MAX];
    printf("Enter String to reverse: ");
    gets(s);
    int i =0;
    while(s[i] != '\0'){
        top++;
        arr[top]=s[i];
        i++;
    }
    printf("Reversed String is: ");
    for(int i=top; i>=0; i--)
    {
        printf("%c", arr[i]);
    }

}
