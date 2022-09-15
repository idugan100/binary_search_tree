#include "d_tnodel.h"
#include "d_tnode.h"
#include <cstddef>
#include <iostream>



template <typename T>
void findMax(tnode<T> *t,int& max){
    if (t!=nullptr){
        

        if((t->nodeValue>max)){
            max=t->nodeValue;
        }
        findMax(t->left,max);
        findMax(t->right,max);
    }
   

}