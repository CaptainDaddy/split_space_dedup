//count_data_structures.h
//Joshua Suggs
//January 2012

#ifndef _COUNT_DATA_STRUCTURES_H_
#define _COUNT_DATA_STRUCTURES_H_
#include "video_units.h"

typedef struct count_tree_node_struct{
        rgb_cell data;
        int count;
        struct count_tree_node_struct * left;
        struct count_tree_node_struct * right;
}count_tree_node;
typedef count_tree_node * count_tree_node_pointer;

#endif
