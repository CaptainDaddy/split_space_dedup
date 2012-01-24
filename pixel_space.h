#ifndef _PIXEL_SPACE_H_
#define _PIXEL_SPACE_H_
//Joshua Michael Suggs
//Deduplication for 4 dimensional finite sets (vectors)
//spaceJMSded.h
//this header defines a library for deduplicating a 3 dimensional space of integers
//some operations involving prefiltering may be done elsewhere

//for reasons that do not concern you (unless you are me) I am planning on using this
//class inside of a ruby program
#include"data_manipulation.h"
#include"video_units.h"
#include<stdlib.h>
#include<stdio.h>

class pixel_space{
public:
    pixel_space();
    pixel_space(int ***,int *);
    int *** get_data();
    int set_data(int ***, int *);
private:
    rgb_cell *** data_space;
    int * dimensions;
};
#endif
