//
//  functions.h
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#ifndef list_functions_h
#define list_functions_h

#include <stdio.h>

typedef struct Node {
    int data;
    int key;
    struct Node *next;
} Node;

typedef struct LinkedList {
    struct Node *head;
} LinkedList;

int insert(struct LinkedList *list, int data, int key);

int is_in_list(struct LinkedList *list, int key);

int find(struct LinkedList *list, int key);

int pls_remove(struct LinkedList *list, int key);

void print_list(struct LinkedList *list);

void create_array(struct LinkedList *list);

#endif /* list_functions_h */
