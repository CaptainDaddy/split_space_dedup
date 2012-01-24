//pixel_space.cpp
//Joshua Suggs
//January 2012

#include "pixel_space.h"

pixel_space::pixel_space(){
   this->data_space=NULL;
   this->dimensions=NULL;
}
pixel_space::pixel_space(int *** space_input,int * dimension_array){
   if(dimension_array!=NULL)
      if(dimension_array[0]!=0)
         if(dimension_array[1]!=0)
            if(dimension_array[2]!=0)
               data_space=new_3d_int_array(dimension_array[0],
                                           dimension_array[1],
                                           dimension_array[2]);
   dimensions=(int*)calloc(3,sizeof(int));
   dimensions[0]=dimension_array[0];
   dimensions[1]=dimension_array[1];
   dimensions[2]=dimension_array[2];
}
