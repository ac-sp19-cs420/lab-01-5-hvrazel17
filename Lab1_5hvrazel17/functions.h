//
//  functions.h
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#ifndef functions_h
#define functions_h

#include <stdio.h>

struct Node {
    int data;
    int key;
    struct Node *next;
};

struct LinkedList {
    struct Node *head;
};

int insert(struct LinkedList *list, int data, int key);

int is_in_list(struct LinkedList *list, int key);

int find(struct LinkedList *list, int key);

int pls_remove(struct LinkedList *list, int key);

void print_list(struct LinkedList *list);

void create_array(struct LinkedList *list);

#endif /* functions_h */
