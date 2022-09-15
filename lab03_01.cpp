#include <iostream>
#include "d_tnodel.h"
#include "d_tnode.h"
#include "countOneChild.h"
using namespace std;

bool testOneChildCount(){
    //build tree one
    tnode<char> *a,*b,*c,*d,*e,*f,*g;
    g = new tnode<char> ('G',(tnode<char>*)NULL, (tnode<char> *)NULL);
    f = new tnode<char> ('F',(tnode<char>*)NULL, (tnode<char> *)NULL);
    d = new tnode<char> ('D',(tnode<char>*)NULL, (tnode<char> *)NULL);
    e = new tnode<char> ('E',(tnode<char>*)NULL, g);
    b = new tnode<char> ('B',d, (tnode<char> *)NULL);
    c = new tnode<char> ('C',e, f);
    a = new tnode<char> ('A',b, c);
    //verify tree was built
    displayTree(a, 1);
    int count=0;
    cout<< "count is 0"<<endl;
    countOneChild(a,count);
    cout<< "count is "<<count<<endl;
    return true;

}


int main(){
    testOneChildCount();
    cout<<"building tree"<<endl;
    
    




    return 0;
}