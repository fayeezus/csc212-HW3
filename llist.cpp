#include "llist.h"

namespace nodespace{
    void LList::append(const node::value_type& entry){
        node end = new node(entry);
        tail_ptr->set_link(end);
        tail_ptr = end;
        list_length++;
    };
    
    void LList::insert(std::size_t position, const node::value_type& entry){
        node* previous_ptr;
        node* insert_ptr;
        insert_ptr->set_next(previous_ptr->get_next());
        previous_ptr->set_next(insert_ptr);
        
    };
    
    //find first occurrence
    const node* LList::search(const node::value_type& target){
        node* head_ptr;
        node *cursor;
        for (cursor = head_ptr; cursor != NULL; cursor = cursor->get_next( )){
            if target == cursor->get_data( ))
            {
                return cursor;
            }
        }
        return NULL;
        
    }
	
	const node* LList::locate(std::size_t position){
        node* head_ptr;
        node *cursor;
        assert (position > 0);
        cursor = head_ptr;
        for (i = 1; (i < position) && (cursor != NULL); i++){
            cursor = cursor->get_next( );
        }
        return cursor;

	};

	//remove by value, remove all
	bool LList::remove(const node::value_type& target){
        node *remove_ptr;
        remove_ptr = head_ptr;
        head_ptr = head_ptr->get_next( );
        delete remove_ptr;

	};

	void LList::clear(){
        while (head_ptr != NULL){
            LList::remove(head_ptr);
        }

	};

	//returns new list
	LList* LList::copy(){
        head_ptr = NULL;
        tail_ptr = NULL;
        if (source_ptr == NULL){
            return;
        }
        LList::insert(tail_ptr, source_ptr-get_data( ));
        tail_ptr = tail_ptr->get_next( );
        source_ptr = source_ptr->get_next( );

	};

	//additional functions to index into list
	node* LList::operator[] (size_t ind){
        if (ind > list_length || ind < 0) {
            return NULL;
        }
        else {
            node *cursor;
            int count = 0;
            for (cursor = head_ptr; cursor != NULL; cursor = cursor->set_link( )){
                count++;
                if(count==(ind+1) {
                    return cursor;
                }
            }
        }

	};

    std::list<std::tuple<node::value_type, int>> frequency(LList data) {
        
}
                   
