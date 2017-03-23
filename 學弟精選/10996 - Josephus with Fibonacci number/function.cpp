#include <iostream>
#include "function.h"
using namespace std;
/*
class Josephus
{
    public:
         Josephus();
         ~Josephus();
         Josephus(const int &);
         int kill(); // return the survival¡¦s position

    private:
        void generatecircularlinkedList(const int &); // generate circular linked-list
        void generateFib(const int &); // generate a Fibonacci sequence table
        int sequence[50]; // store Fibonacci number
        int noOfPeople;
        Node *head;
};
*/ 
Josephus::Josephus()
{
	noOfPeople = 0;
	head = NULL; 
}
Josephus::~Josephus()
{

}
 
Josephus::Josephus(const int &n)
{
    generatecircularlinkedList(n);
    generateFib(n);
    noOfPeople=n;
}
void Josephus::generatecircularlinkedList(const int &n){
	Node *np = new Node(1);
	np->next = np;
	Node *tail = np;
	head = np;
	int i;
	for(i=2;i<=n;i++){
		Node *np = new Node(i);
		np->next = head;
		tail->next =np;
		tail = np;
	}
	head = tail;
}
int Josephus::kill(){
	Node *man = head->next;
	Node *pre = head;
	int n = noOfPeople, i, k;
	for(i=0;n>1;n--,i++){
		k=sequence[i];
		while(k>1){
			if(n<k){
				k-=n;
				continue;
			}
			pre = man;
			man = man->next;
			k-=1;
		}
		man = man->next;
		pre->next = man;
	}
	return man->number;
}
void Josephus::generateFib(const int &n)
{
    int i;
	sequence[0]=1; sequence[1]=1;
    for(i=2;i<n;i++) sequence[i]=sequence[i-1]+sequence[i-2];
}
