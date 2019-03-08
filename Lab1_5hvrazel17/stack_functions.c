//
//  stack_functions.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/7/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include "stack_functions.h"

// we want to push to onto the stack if nothing is in it
void s_push(int i, Stack *s) {
    if (s->list == NULL) {
        s->list = (LinkedList*)malloc(sizeof(LinkedList));
        s->x = 1;
    }
    insert(s->list, i, s->x);
    s->x++; // increment the count
}

// This method just returns the top int without removing
// acts as a helper method for the pop method
int top(Stack *s) {
    return find(s->list, s->x-1);
}

// this will remove the top integer from the list and returns it
int s_pop(Stack *s) {
    
    int value = top(s);
    pls_remove(s->list, s->x-1);
    s->x--; // have to remember to reduce count by one when removed
    
    return value;
}

// Creating a method that will print the stack for testing purposes
void s_print(Stack *s) {
    printf("This is the stack: \n");
    printf("\n");
    print_list(s->list);
}

// creating a method to see if the list is empty
int s_is_empty(Stack *s) {
    if (s->list == NULL) {
        return 1;
    } else {
        return 0;
    }
}
