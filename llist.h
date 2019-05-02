#ifndef MAIN_SAVITCH_LIST_H  
#define MAIN_SAVITCH_LIST_H

#include <cstdlib> // Provides size_t and NULL

#include <list>
#include <tuple>
#include <iostream>
#include "node.h"

namespace nodespace{
    class LList{
	public:
        LList(){
            head_ptr=NULL;
            tail_ptr=NULL;
            list_length=0;
        }
        // functions modified from the linked list toolkit
        std::size_t length(const node* head_ptr){return list_length;}
        
        LList(node* first,node* second,size_t lengthh)
        {
            head_ptr=first;
            tail_ptr=second;
            list_length=lengthh;
        }
        //setters
        void sethead(node* first)
        {
            head_ptr=first;
        }
        void settail(node* second)
        {
            tail_ptr=second;
        }
        void setlength(size_t lengthh)
        {
            list_length=lengthh;
        }
        //getters
        const node* gethead_ptr()
        {
            return head_ptr;
        }
        const node* gettail_ptr()
        {
            return tail_ptr;
        }
        // functions modified from the linked list toolkit
        std::size_t length(const node* head_ptr)
        {
            size_t result=list_lengT(head_ptr);
            list_length=result;
            return list_length;
        }
        //I added the below function to print out the data in each node for convenience
        void printlist(const node* head_ptr)
        {
            const node *cursor;
            std::cout<<"The list contains data ";
            for (cursor = head_ptr; cursor != NULL; cursor = cursor->link( ))
            {
                std::cout<<cursor->data()<<" ";
            }
            std::cout<<"\n";
        }
        
        
        //add to end, insert at position P
        void append(const node::value_type& entry);
        void insert(std::size_t position, const node::value_type& entry);   
        
        //find first occurrence
        const node* search(const node::value_type& target);
        const node* locate(std::size_t position);
        
        //remove by value, remove all
        bool remove(const node::value_type& target);
        void clear();
        
        //returns new list
        LList* copy();

        //additional functions to index into list and overwrite node
        node* operator[] (size_t ind);
        node& operator = (node::value_type i);

    private:
        node* head_ptr;
        node* tail_ptr;
        size_t list_length;
    };

std::list<std::tuple<node::value_type, int>> frequency(LList data);
}
#endif

		
