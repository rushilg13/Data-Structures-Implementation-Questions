#include<stdio.h>
#define MAX 25
int arr[MAX], top=-1, front=-1, rear=-1;
int main(){
    int n, max, num, sum=0, count=0;
    printf("Enter number of elements you wanna push/enqueue: ");
    scanf("%d", &n);
    printf("Enter how many number you wanna pop/dequeue: ");
    scanf("%d", &max);
    printf("Enter numbers\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        top++;
        arr[top]=num;
        front=0;
        rear++;
    }
    sum=sum+arr[front];
    front++;
    count++;
    while(count!=max)
    {
        if(arr[front]>arr[top])
        {
            sum=sum+arr[front];
            front++;
            count++;
        }
        else
        {
            sum=sum + arr[top];
            top--;
            count++;
        }
    }
    {
    printf("%d ", sum);
    }


}
