//
//  queue_functions.h
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/7/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#ifndef queue_functions_h
#define queue_functions_h

#include <stdio.h>
#include "list_functions.h"

typedef struct Queue {
    
    LinkedList *list;
    int y;
} Queue;

void q_push(int i, struct Queue *q);

int q_pop(struct Queue *q);

int last(struct Queue *q);

int q_is_empty(struct Queue *q);

#endif /* queue_functions_h */
