//
//  functions.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "list_functions.h"

// inserting element at the beginning of the list
int insert(LinkedList *list, int data, int key) {
    
    // creating a node and hooking it up to the info being passed in
    Node *myNode = (Node*)malloc(sizeof(Node));
    myNode->data = data;
    myNode->key = key;
    
    // getting a handle on the head node and adding it to the front
    Node *the_dome=list->head;
    list->head = myNode;
    myNode->next = the_dome;
    
    if (list->head == NULL) {
        return 0;
    }
    
    return 1;
}

//// I tried to do a more robust implementation, but I kept getting
//// bad access errors... C is the worst.
//// inserts an element into the list
//int insert(LinkedList *list, int data, int key) {
//
//    Node *link = (Node*) malloc(sizeof(Node));
//    link->key = key;
//    link->data = data;
//
//    Node *n = list->head;
//    if (n == NULL) {
//        list->head = link;
//        return 1;
//    }
//
//    while(n != NULL) {
//        if (key == n->key) {
//            return 0;
//        }
//        if (key > n->key) {
//            if (n->next == NULL) {
//                n->next = link;
//                return 1;
//            } else if (key < n->next->key) {
//                link->next = n->next;
//                n->next = link;
//                return 1;
//            }
//        }
//        n=n->next;
//
//    }
//    return 0;
//}

// sees if the value with the given key is in the list
int is_in_list(LinkedList *list, int key) {
    
    Node *current = list->head;
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

// finds a value of the key thats passed in
int find(LinkedList *list, int key) {
    
    Node *current1 = list->head;
    
    if (list->head == NULL) {
        return 0;
    }
    
    while (current1 != NULL) {
        if (current1->key == key) {
            return current1->data;
        } else {
            current1 = current1->next;
        }
    }
    return 0;
}

// removes an element in the list by its key value
int pls_remove(LinkedList *list, int key) {
    
    Node *current2 = list->head;
    
    while (current2 != NULL) {
        if (current2->key == key) {
            Node *temp = current2->next;
            current2->next = temp->next;
            
            free(temp); // freeing the memory allocation of temp node
            return 1;
            
        } else {
            current2 = current2->next;
        }
    }
    
    return 0;
}

// prints out the list
void print_list(LinkedList *list) {
    
    Node *ptr = list->head;
    
    // starting from the first element
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

// creates an array of integers values within the linked list
void create_array(LinkedList *list) {
    
    Node *current3 = list->head;
    int myArray[100];
    int i = 1;
    
    printf("Here is an array created by the integers in the list: \n");
    while (current3->next != NULL) {
        printf("%d, ", myArray[i] = current3->data);
        current3 = current3->next;
        i++;
    }
    // prints the head last
    printf("%d \n", current3->data);
}
