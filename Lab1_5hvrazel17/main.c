//
//  main.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "list_functions.h"
#include "stack_functions.h"
#include "queue_functions.h"



int main(int argc, const char * argv[]) {
    
    /*
        Linked List
     */
     
    // creating the list
    LinkedList *list = (LinkedList*) malloc(sizeof(LinkedList));
    
    // inserting elements into the list
    insert(list,1,1);
    insert(list,2,2);
    insert(list,3,3);
    insert(list,4,4);
    
    // printing the list
    printf("print_list method: \n");
    print_list(list);
    
    // turning the ints in the list to an array
    printf("create_array method: \n");
    create_array(list);
    
    // removing an item from the list and printing to see that its
    // no longer in the list
    printf("remove method: \n");
    pls_remove(list, 2);
    print_list(list);
    
    // testing the find method
    printf("find method: \n");
    printf("%d\n", find(list, 2));
    printf("%d\n", find(list, 3));
    
    // testing is_in_list method
    // if its in the list it will print a 1, if not it will print a 0
    printf("is_in_list method: \n");
    printf("%d\n", is_in_list(list, 3));
    printf("%d\n", is_in_list(list, 6));
    
    
    /*
        Stack
     */
    
    //initializing the stack
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->list = NULL;
    
    // testing the s_is_empty method (should print a 1)
    printf("Testing s_is_empty method: \n");
    printf("%d\n", s_is_empty(s));
    
    // pushing onto the stack and then printing the stack 
    s_push(3, s);
    s_push(4, s);
    s_push(2, s);
    s_push(6, s);
    s_print(s);
    
    // testing the top method
    printf("The top integer on the stack is: \n");
    printf("%d\n", top(s));  // should be 6 because it was the last int entered (fifo).
    
    // testing the pop method
    printf("The top int is now removed: \n");
    printf("%d\n", s_pop(s));
    s_print(s); // it removed the bottom of the stack...
    
    // freeing both items so they are no longer taking up memory
    free(s->list);
    free(s);
    
    return 0;
}

