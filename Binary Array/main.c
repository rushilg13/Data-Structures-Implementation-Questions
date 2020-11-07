// I hate Even Subarrays - HackerRank

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
char stack[MAX];
int top=-1;
int main(){
    char st[MAX];
    printf("insert the binary string: ");
    scanf("%s", &st);
    int i=0;
    while(st[i] != '\0')
    {
        push(st[i]);
        if(top>0)
        {
            if(stack[top]==stack[top-1])
            {
                top-=2;
            }
        }
        i++;
    }
    if (top==-1)
    {
        printf("KHALI\n");
    }
    else
    {
        for(int i=0; i<=top; i++)
        {
            printf("%c", stack[i]);
        }
    }
}

void push(char a){
    top++;
    stack[top]=a;
}
