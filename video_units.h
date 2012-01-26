//video_units.h
//Joshua Suggs
//January 2012
#ifndef _VIDEO_UNITS_H_
#define _VIDEO_UNITS_H_

#include <math.h>


typedef struct rgb_struct{
       int red;int green;int blue;
}rgb_cell;

typedef struct rgb_replacement_struct{
   rgb_cell to_replace;
   rgb_cell replace_with;
}rgb_replacement;
typedef rgb_replacement * rgb_sub_ptr;
#endif
