//
//  queue_functions.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/7/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include <stdio.h>
#include "queue_functions.h"

// method that pushes ints onto the queue, similar to the stack push method
void q_push(int i, Queue *q) {
    if (q->list == NULL) {
        
        // creating new node
        q->list = (LinkedList*)malloc(sizeof(LinkedList));
        q->y = 1;
    }
    // inserting it
    insert(q->list, i, q->y);
    q->y++; // increment count by 1
}

// returning the element that will be deleted
int last(Queue *q) {
//    while(q->list->head->next->next != NULL) {
//        q->list->head->next->next = q->list->head->next->next->next;
//    }
    return q->list->head->next->data;
}

// method that removes the last node by the key of the element going to be deleted
int q_pop(Queue *q) {
    
    int value = last(q);
    pls_remove(q->list, q->list->head->next->key);
    q->y--; // decrease count after remove is called
    
    return value;
}

// method that checks if the list is empty
int q_is_empty(Queue *q) {
    if (q->list == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// helper method that just prints the queue for testing purposes
void q_print(Queue* q){
    printf("This is the queue: \n");
    printf("\n");
    print_list(q->list);
}

