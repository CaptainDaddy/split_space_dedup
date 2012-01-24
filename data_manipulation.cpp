//data_manipulation.cpp
//Joshua Suggs
//do stuff

#include "data_manipulation.h"

int *** new_3d_int_array(int X1,int X2,int X3){
   int a,b;    
   int *** ret=(int ***)calloc(X1, X2*X3*sizeof(int));
   for(a=0;a<X1;a++) ret[a]=(int **)calloc(X2, X3*sizeof(int));
   for(a=0;a<X1;a++)
      for(b=0;b<X2;b++)
         ret[a][b]=(int *)calloc(X3,sizeof(int));
   return ret;
}
int del_3d_array(int ***X, int X1, int X2, int X3){
    int a,b,c;
    if(X==NULL) return 0;
    for(a=0;a<X1;a++)
       for(b=0;b<X2;b++)
          free (X[a][b]);    
    for(a=0;a<X1;a++)
       free (X[a]);
    free (X);
    return 1;
}
int *** copy_3d_int_array(int ***X, int X1, int X2, int X3){
    int a,b,c;
    int *** ret=new_3d_int_array(X1,X2,X3);
    for(a=0;a<X1;a++)
       for(b=0;b<X2;b++)
          for(c=0;c<X3;c++)
             ret[a][b][c]=X[a][b][c];
    return ret;
}
