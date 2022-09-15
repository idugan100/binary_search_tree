#include <iostream>
#include "d_tnodel.h"
#include "d_tnode.h"
#include "countOneChild.h"
#include "max.h"
using namespace std;

void testOneChildCount(){
    cout<<"Testing oneChildCount()..."<<endl;
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
    //count one child nodes
    int count=0;
    countOneChild(a,count);
    cout<< "there are "<<count<<" interior leaf nodes "<<endl;
    

}
void testFindMax(){
    cout<<"Testing findMax()..."<<endl;
    //build tree one
    tnode<int> *five,*fourtyEight,*twelve,*fourty,*fifteen,*thirtyFive;
    five = new tnode<int> (5,(tnode<int>*)NULL, (tnode<int> *)NULL);
    fourtyEight=new tnode<int> (48,(tnode<int>*)NULL, (tnode<int> *)NULL);
    twelve=new tnode<int> (12,(tnode<int>*)NULL, (tnode<int> *)NULL);
    fourty=new tnode<int> (40,five, (tnode<int> *)NULL);
    fifteen=new tnode<int> (5,fourtyEight, twelve);
    thirtyFive=new tnode<int> (5,fourty, fifteen);


    
    //verify tree was built
    displayTree(thirtyFive, 1);
    //count one child nodes
    int count=-2147483648;
    findMax(thirtyFive,count);
    cout<< "the max value is "<<count<<endl;
    

}


int main(){
    testOneChildCount();
    testFindMax();
    
    
    
    




    return 0;
}