//data_manipulation.h
//Joshua Suggs
//January 2012
#ifndef DATA_MANIPULATION_H_
#define DATA_MANIPULATION_H_
#include "video_units.h"
#include <stdio.h>
#include <stdlib.h>
int *** new_3d_int_array(int,int,int);
rgb_cell *** new_3d_rgb_array(int,int,int);
int del_3d_array(int ***X, int X1, int X2, int X3);
int *** copy_3d_int_array(int ***X, int X1, int X2, int X3);
#endif
