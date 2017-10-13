//
//  main.c
//  StackTest
//
//  Created by Vinay Kumar on 10/13/17.
//  Copyright © 2017 Vinay Kumar. All rights reserved.
//

#include <stdio.h>
#define CAPACITY 5

int stack[CAPACITY], top = -1;

int main(int argc, const char * argv[]) {
    
    int ch;
    int item;
    
    
    int isFull(void);
    int isEmpty(void);
    void pop(void);
    void peek(void);
    void traverse(void);
    void quit(void);
    void push(int ele);
    
    printf("1. Push \n");
    printf("2. Pop \n");
    printf("3. Peek \n");
    printf("4. Traverse \n");
    printf("5. Quit \n \n ");
    
    printf("Enter your choice\n");
    scanf("%d",&ch);
    
    
    while (1) {
        switch (ch) {
            case 1:
                printf("Enter element\n");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                traverse();
                break;
            case 5:
                quit();
                break;
            default:
                break;
        }

    }
    
    return 0;
}


int isFull(){
    if (top == CAPACITY -1) return 1; else return 0;
}

int isEmpty(){
    
    if (top == -1) return 1; else return 0;
}

void push(int ele){
    
    if (isFull()) {
        printf("Stack is overflow");
    }else{
        top = top + 1;
        stack[top] = ele;
        printf("inserted element is %d",ele);
    }
}

void pop(){
    
}

void peek(){
    
}

void traverse(){
    
}

void quit(){
    
}


