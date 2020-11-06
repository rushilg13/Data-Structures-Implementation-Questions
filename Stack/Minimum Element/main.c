//Design a stack which returns minimum element in constant time

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX], top=-1;

void main(){
    int times, n;
    printf("How many numbers do you want to push (Max you can push %d numbers): ", MAX);
    scanf("%d", &times);
    for(int i=0;i<times;i++)
    {
        printf("Enter number to be pushed: ");
        scanf("%d", &n);
        if(top==-1)
        {
            top=0;
            arr[top]=n;
        }
        else
        {
            if(n<=arr[top])
            {
                top++;
                arr[top]=n;
            }
        }
    }
    printf("Minimum number is: %d", arr[top]);
}
