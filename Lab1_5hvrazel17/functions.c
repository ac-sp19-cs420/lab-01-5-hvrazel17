//
//  functions.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include "functions.h"
#include <stdlib.h>


// prints out the list
void print_list(struct LinkedList *list) {
    
    struct Node *ptr = list->head;
    
    // starting from the first element
    if(ptr == NULL) {
        printf("Linked List is empty\n");
    }
    for (ptr = list->head; ptr != NULL; ptr = ptr->next) {
        printf("%i\n", ptr->data);
    }
    
}

// inserts an element into the list
int insert(struct LinkedList *list, int data, int key) {
    
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    link->key = key;
    link->data = data;
    
    struct Node *n = list->head;
    if (n == NULL) {
        list->head = link;
        return 1;
    }
    
    while(n != NULL) {
        if (key == n->key) {
            return 0;
        }
        if (key > n->key) {
            if (n->next == NULL) {
                n->next = link;
                return 1;
            } else if (key < n->next->key) {
                link->next = n->next;
                n->next = link;
                return 1;
            }
        }
        n=n->next;
    
    }
    return 0;
}

// sees if the value with the given key is in the list
int is_in_list(struct LinkedList *list, int key) {
    
    struct Node *current = list->head;
    while (current != NULL) {
        if (current->key == key)
            return 1;
            current = current->next;
        if (current->key != key) {
            return 0;
        }
    }
    return -1;
}

int find(struct LinkedList *list, int key) {
    
    struct Node *current1 = list->head;
    
    if (list->head == NULL) {
        return 0;
    }
    
    while (current1->key != key) {
        if (current1->next == NULL) {
            return 0;
        } else {
            printf("(%d)", current1->data);
            current1 = current1->next;
        }
    }
    return 1;
}

// removes an element in the list by its key value
int pls_remove(struct LinkedList *list, int key) {
    
    struct Node *current2 = list->head;
    struct Node *previous = NULL;
    
    if (list->head == NULL) {
        return 0;
    }
    
    while (current2->key != key) {
        if (current2->next == NULL) {
            return 0;
        } else {
            previous = current2;
            current2 = current2->next;
        }
    }
    
    if (current2 == list->head) {
        list->head = list->head->next;
    } else {
        previous->next = current2->next;
    }
        
    
    return 1;
}

void create_array(struct LinkedList *list) {
    
    struct Node *current3 = list->head;
    int myArray[10];
    int i = 0;
    
    while (current3->next != NULL) {
        myArray[i] = current3->data;
        current3 = current3->next;
        i++;
    }
}
