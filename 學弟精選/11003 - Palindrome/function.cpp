#include <iostream>
#include <cstring>
#include "function.h"

using namespace std;
/*
class SimpleString
{
public:
    SimpleString( char* = NULL, int = 0 ); // default constructor
    SimpleString( const SimpleString & ); // copy constructor
    ~SimpleString(); // destructor
    const SimpleString &operator=( const SimpleString & ); // assignment operator
    bool operator==( const SimpleString & ) const; // equality operator
    void reverse(); // reverse the string
private:
    size_t size; // pointer-based string size
    char *ptr; // pointer to first element of pointer-based string
}; // end class SimpleString
*/
SimpleString::SimpleString(char *str, int len)
{
	ptr = str;
	size = len;
}
SimpleString::~SimpleString()
{
	ptr = NULL;
	size=0;
}
const SimpleString &SimpleString::operator=( const SimpleString &str)
{
	size = str.size;
	ptr = new char[size];
	int i;
	for(i=0;i<size;i++)
		ptr[i] = str.ptr[i];
	return *this;
 } 
void SimpleString::reverse()
{
	char str[size];
	int i;
	for(i=0;i<size;i++){
		str[i]=ptr[size-i-1];
	}
	strcpy(ptr,str);
 } 
bool SimpleString::operator==(const SimpleString &str) const
{
	if(!strncmp(ptr,str.ptr,size)) return 1;
	else return 0;
 } 
