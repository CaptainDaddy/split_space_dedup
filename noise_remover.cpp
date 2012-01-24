//noise_remover.cpp
//Joshua Suggs
//January 2012

#include "noise_remover.h"
/*
class noise_remover{
   public:
      noise_remover();       
      noise_remover(pixel_space);//write copy constructor in pixel_space
      noise_remover(pixel_space,int);
      build_count_tree();
      set_replacements();
      smooth_the_field();
      pixel_space * return_pixel_space();
   private:
      pixel_space video_space;
      count_tree_node_pointer root;
      count_tree_node_list_pointer start;
      int tolerance;
}*/

noise_remover::noise_remover(){tolerance=0;video_space=NULL;root=NULL;start=NULL}
noise_remover::noise_remover(pixel_space in_space){
   tolerance=0;root=NULL;start=NULL;
   video_space=in_space;
}
noise_remover::noise_remover(pixel_space in_space, int tolerance){
   root=NULL;start=NULL;
   tolerance=0;
   video_space=in_space;
}
