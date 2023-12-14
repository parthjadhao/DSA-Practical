#include <stdio.h>

#define MAX_SIZE 10

struct Stack
{
     int arr[MAX_SIZE];
     int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack)
{
     stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack)
{
     return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack)
{
     return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
{
     if (isFull(stack))
     {
          printf("Stack overflow: Cannot push %d, the stack is full.\n", value);
     }
     else
     {
          stack->arr[++stack->top] = value;
          printf("Pushed %d onto the stack.\n", value);
     }
}

// Function to pop an element from the stack
int pop(struct Stack *stack)
{
     if (isEmpty(stack))
     {
          printf("Stack underflow: Cannot pop from an empty stack.\n");
          return -1;
     }
     else
     {
          return stack->arr[stack->top--];
     }
}

int main()
{
     struct Stack myStack;
     initialize(&myStack);

     push(&myStack, 10);
     push(&myStack, 20);
     push(&myStack, 30);

     int poppedValue1 = pop(&myStack);
     int poppedValue2 = pop(&myStack);
     int poppedValue3 = pop(&myStack);

     printf("Is the stack empty? %s\n", isEmpty(&myStack) ? "Yes" : "No");

     return 0;
}