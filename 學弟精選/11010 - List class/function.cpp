#include <iostream>
#include <string>
#include "function.h"
using namespace std;
OWList::OWList(){
	firstPtr=lastPtr=NULL;
}
OWList::~OWList(){
	while(!isEmpty()){
		removeFromFront();
	}
}
void OWList::insertAtFront( const int &value ){
	ListNode *np = new ListNode(value);
	if(firstPtr==NULL){
		firstPtr = lastPtr = np;
	}else{
		np->nextPtr = firstPtr;
		firstPtr = np;
	}
} 
void OWList::removeFromFront(){
	ListNode *np;
	if(firstPtr!=NULL){
		if(firstPtr!=lastPtr){
			np = firstPtr;
			firstPtr = firstPtr->nextPtr;
			delete np;
		}else{
			firstPtr = lastPtr = NULL;
		}
	}
}
bool OWList::isEmpty() const{
	return firstPtr==NULL;
}
void OWList::print() const{
	ListNode *np = firstPtr;
	while(np!=NULL){
		if(np!=firstPtr) cout<<" ";
		cout<<np->data;
		np = np->nextPtr; 
	}
}
void TWList::insertAtBack( const int &value ){
	ListNode *np = new ListNode(value);
	if(lastPtr==NULL){
		firstPtr = lastPtr = np;
	}else{
		lastPtr->nextPtr = np;
		lastPtr = np;
	}
}
void TWList::removeFromBack(){
	ListNode *np;
	if(lastPtr==NULL){
		return;
	}else if(firstPtr==lastPtr){
		np = firstPtr;
		delete np;
		firstPtr = lastPtr = NULL;
	}else{
		ListNode *np = firstPtr;
		while(1){
			if(np->nextPtr!=lastPtr)np=np->nextPtr;
			else break;
		}
		delete np->nextPtr;
		np->nextPtr = NULL;
		lastPtr = np;
	}
}
