#include <iostream>

#include "node.h"
#include "llist.h"

namespace nodespace
{
    
    int main()
    {
        node* tail = new node(1.0);
        node* fourth = new node(2.0, tail);
        node* third = new node(2.0, fourth);
        node* second = new node(2.0, third);
        node* first = new node(3.0, second);
        LList mylist(first,tail,5);
        
        //below adds an extra node to the end
        mylist.append(1.0);
        std::cout<<"The length of the list is "<<mylist.length(mylist.gethead_ptr())<<std::endl;
        mylist.printlist(mylist.gethead_ptr());
        
        //below inserts a node anywhere
        mylist.insert(3,9.0);
        std::cout<<"The length of the list is "<<mylist.length(mylist.gethead_ptr())<<std::endl;
        mylist.printlist(mylist.gethead_ptr());
        
        //search and locate functions tested
        const node* f1=mylist.search(9);
        mylist.printlist(f1);
        
        const node* g2=mylist.locate(3);
        mylist.printlist(g2);
        const node* g3=mylist.locate(6);
        mylist.printlist(g3);
        
        //remove function
        bool result=mylist.remove(1);
        mylist.printlist(mylist.gethead_ptr());
        result=mylist.remove(1);
        mylist.printlist(mylist.gethead_ptr());
        result=mylist.remove(1);
        mylist.printlist(mylist.gethead_ptr());
        result=mylist.remove(1);
        mylist.printlist(mylist.gethead_ptr());
        
        //clear function
        mylist.clear();
        mylist.printlist(mylist.gethead_ptr());
        //reset values
        tail = new node(1.0);
        fourth = new node(2.0, tail);
        third = new node(2.0, fourth);
        second = new node(2.0, third);
        first = new node(3.0, second);
        mylist.sethead(first);
        mylist.settail(tail);
        mylist.setlength(5);
        std::cout<<"With values being reset: ";
        mylist.printlist(mylist.gethead_ptr());
        
        //copy mylist
        LList* mylist2=mylist.copy();
        mylist2->printlist(mylist2->gethead_ptr());
        
        //operator [] use
        
        //node* store;
        //node store2(2);
        //store=store2
        //store=mylist[5];
        //store=7;
        
        //mylist[2]=5;                        lvalue required as left operand of assignment
        
        //mylist[2]=mylist[3];                lvalue required as left operand of assignment
        
        //mylist[3]=0;
        //mylist.printlist(mylist.gethead_ptr());       doesn't work
        
        
        
        nodespace::node A(2);
        std::cout<<A.data()<<std::endl;
        A = 5;
        std::cout<<A.data()<<std::endl;
        
        // Frequency left to implement
        
        return 0;
    }
    
}

int main()
{
    return nodespace::main();
}
