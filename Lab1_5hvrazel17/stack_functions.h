//
//  stack_functions.h
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/7/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#ifndef stack_functions_h
#define stack_functions_h

#include <stdio.h>
#include "list_functions.h"

typedef struct Stack {
    
    LinkedList *list;
    int x;
} Stack;

void s_push(int i, struct Stack *s);

int s_pop(struct Stack *s);

int top(struct Stack *s);

int s_is_empty(struct Stack *s);

#endif /* stack_functions_h */
