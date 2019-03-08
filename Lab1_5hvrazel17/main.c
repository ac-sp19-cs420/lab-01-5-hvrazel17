//
//  main.c
//  Lab1_5hvrazel17
//
//  Created by Hagan M. Vrazel on 3/5/19.
//  Copyright © 2019 Hagan M. Vrazel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "functions.h"



int main(int argc, const char * argv[]) {
    
    
    struct LinkedList *list = (struct LinkedList*) malloc(sizeof(struct LinkedList));
    insert(list,3,4);
    print_list(list);
    
    return 0;
}

