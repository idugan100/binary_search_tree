#include "d_tnodel.h"
#include "d_tnode.h"
#include <cstddef>
#include <iostream>



template <typename T>
int countOneChild(tnode<T> *t){
    
   if((t->left==NULL &&t->right!=NULL)||(t->left!=NULL && t->right==NULL)){
    return 1+countOneChild(t->left)+countOneChild(t->right);
   }
   else{
    return 0+countOneChild(t->left)+countOneChild(t->right);
   }

}