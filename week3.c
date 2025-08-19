#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Initialize the top of the stack as NULL
struct Node* top = NULL;

// Function to push an element onto the stack
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop() {
    if (top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct Node* temp = top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    return poppedValue;
}

// Function to peek at the top element of the stack
int peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Function to display the stack
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to test the stack
int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Top element is %d\n", peek());
    printf("Popped element is %d\n", pop());
    display();
    return 0;
}

