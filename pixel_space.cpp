//pixel_space.cpp
//Joshua Suggs
//January 2012

#include "pixel_space.h"

pixel_space::pixel_space(){
   this->data_space=NULL;
   this->dimensions=NULL;
}
pixel_space::pixel_space(rgb_cell *** space_input,int * dimension_array){
   if(dimension_array!=NULL)
      if(dimension_array[0]!=0)
         if(dimension_array[1]!=0)
            if(dimension_array[2]!=0)
               data_space=new_3d_rgb_array(dimension_array[0],
                                           dimension_array[1],
                                           dimension_array[2]);
   dimensions=(int*)calloc(3,sizeof(int));
   dimensions[0]=dimension_array[0];
   dimensions[1]=dimension_array[1];
   dimensions[2]=dimension_array[2];
}
int * pixel_space::get_dimensions(){
   int * ret=(int *)calloc(3, sizeof(int));
   ret[0]=this->dimensions[0];
   ret[1]=this->dimensions[1];
   ret[2]=this->dimensions[2];
   return ret;
}
rgb_cell pixel_space::get_cell(int x1,int x2,int x3){
   if(x1>-1&& x1<this->dimensions[0]&&
      x2>-1&& x2<this->dimensions[1]&&
      x3>-1&& x3<this->dimensions[2])
      return this->data_space[x1][x2][x3];
}
  
