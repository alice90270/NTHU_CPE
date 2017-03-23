#include <iostream>
#include <string>
#include<stdlib.h>
#include "function.h"


void WordCount::readWords(){
	numberOfTotalWords = 0;
	while(cin>>words[numberOfTotalWords]) {
    	numberOfTotalWords++;
	}
}
int compare(const void *a, const void *b) {
    string c = *(string*)a;
    string d = *(string*)b;
    if(c>d)
        return 1;
    else return -1;
}
void WordCount::sortWords(){
	qsort(words, numberOfTotalWords, sizeof(string), compare);
	return;
}

void WordCount::countWords(){
	diffwords = new string[numberOfTotalWords];
    counting = new int[numberOfTotalWords];
    int i, j;
    diffwords[0] = words[0];
    counting[0]=0;
    numberOfDiffWords = 0;
    for(i=0;i<=numberOfTotalWords;i++){
    	if(diffwords[numberOfDiffWords]==words[i]){
    		counting[numberOfDiffWords]++;
		}else{
			numberOfDiffWords++;
			diffwords[numberOfDiffWords] = words[i];
			counting[numberOfDiffWords] = 1;
		}
	}
}
void WordCount::dumpResult()
{
    int i = 0;
    while(i < numberOfDiffWords){
        cout << diffwords[i] << " " << counting[i] << endl;
        i++;
    }
    return;
}
