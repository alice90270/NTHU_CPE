#include<iostream>
#include<string.h>
#include "function.h"
using namespace std;

/*
class List_queue {

    public:

        List_queue();		}
        ~List_queue();
        void enqueue(const int &);
        void dequeue();
        void print();
    private:
        ListNode *head;
        ListNode *tail;
};
*/
List_queue::List_queue(){
	head = NULL;
	tail = NULL;
}
List_queue::~List_queue(){
	ListNode *np;
	for(;head!=NULL;){
		np = head->nextPtr;
		delete head;
		head = np;
	}
}
void List_queue::enqueue(const int &n){
	if(head==NULL){
		ListNode *np = new ListNode(n);
		head = np;
		tail = head;
	}else{
		ListNode *np = new ListNode(n);
		tail->nextPtr = np;
		np->prevPtr = tail;
		tail = np;
	}
}
void List_queue::dequeue(){
	ListNode *np = head;
	if(head!=tail){
		head = head->nextPtr;
		head->prevPtr = NULL;	
	}
	else if(head==tail){
		head=tail=NULL;	
	} 
	delete np;
}
void List_queue::print(){
	ListNode *np;
	np = head;
	for(;np!=NULL;){
		if(np!=head) cout<<" ";
		cout<<np->data;
		np = np->nextPtr;
	}
}
 
