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

void delete_count_tree(count_tree_node_pointer);
//from now on, ctn stands for count tree node
void ctn_add_value(count_tree_node_pointer,rgb_cell);
void ctn_subtract_value(count_tree_node_pointer,rgb_cell);
count_tree_node_pointer ctn_new_node(rgb_cell);

typedef struct list_container_struct{
        count_tree_node_pointer element;
        count_tree_node_pointer next;
}container_list_ctn_node;
typedef container_list_ctn_node * container_ctn_list_node_pointer;

container_ctn_list_node_pointer new_container_list_node();

void add_to_container_list(container_ctn_list_node_pointer
                           ,     count_tree_node_pointer);
void build_list_from_tree(count_tree_node_pointer
                           ,     container_ctn_list_node_pointer);
                           
#endif
