#include "d_tnodel.h"
#include "d_tnode.h"
#include <cstddef>
#include <iostream>



template <typename T>
void countOneChild(tnode<T> *t,int& count){
    if (t!=nullptr){
        

        if((t->left==NULL && t->right!=NULL)||(t->left!=NULL && t->right==NULL)){
            cout<<"adding to count becuase "<<t->nodeValue<<" is an interior node with one child"<<endl;
            count++;
        }
        countOneChild(t->left,count);
        countOneChild(t->right,count);
    }
   

}