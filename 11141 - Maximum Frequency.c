#include<stdio.h>
#include<string.h>
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25,z=26;
int alphabets[100];

int main(){
	char input[200000]={};
    int index;
    while(gets(input)){
		int max_frequency_number=0;
        int length= strlen(input);
        if(input=="\n")
            printf("0\n");
    	else{
            //printf("length=%d\n", length);
            // count max frequency
			for(index=0;index<length;index++){
                if (input[index]=='a' || input[index]=='A'){
                    alphabets[a]++;
                    if(alphabets[a]>max_frequency_number)
                        max_frequency_number = alphabets[a];
                    //printf("a++: %d\n", max_frequency_number);
                }
                else if(input[index]=='b' || input[index]=='B'){
                    alphabets[b]++;
                    if(alphabets[b]>max_frequency_number)
                        max_frequency_number = alphabets[b];
                }
                else if(input[index]=='c' || input[index]=='C'){
                    alphabets[c]++;
                    if(alphabets[c]>max_frequency_number)
                        max_frequency_number = alphabets[c];
                }
                else if(input[index]=='d' || input[index]=='D'){
                    alphabets[d]++;
                    if(alphabets[d]>max_frequency_number)
                        max_frequency_number = alphabets[d];
                }
                else if(input[index]=='e' || input[index]=='E'){
                    alphabets[e]++;
                    if(alphabets[e]>max_frequency_number)
                        max_frequency_number = alphabets[e];
                }
                else if(input[index]=='f' || input[index]=='F'){
                    alphabets[f]++;
                    if(alphabets[f]>max_frequency_number)
                        max_frequency_number = alphabets[f];
                }
                else if(input[index]=='g' || input[index]=='G'){
                    alphabets[g]++;
                    if(alphabets[g]>max_frequency_number)
                        max_frequency_number = alphabets[g];
                }
                else if(input[index]=='h' || input[index]=='H'){
                    alphabets[h]++;
                    if(alphabets[h]>max_frequency_number)
                        max_frequency_number = alphabets[h];
                }
                else if(input[index]=='i' || input[index]=='I'){
                    alphabets[i]++;
                    if(alphabets[i]>max_frequency_number)
                        max_frequency_number = alphabets[i];
                }
                else if(input[index]=='j' || input[index]=='J'){
                    alphabets[j]++;
                    if(alphabets[j]>max_frequency_number)
                        max_frequency_number = alphabets[j];
                }
                else if(input[index]=='k' || input[index]=='K'){
                    alphabets[k]++;
                    if(alphabets[k]>max_frequency_number)
                        max_frequency_number = alphabets[k];
                }
                else if(input[index]=='l' || input[index]=='L'){
                    alphabets[l]++;
                    if(alphabets[l]>max_frequency_number)
                        max_frequency_number = alphabets[l];
                }
                else if(input[index]=='m' || input[index]=='M'){
                    alphabets[m]++;
                    if(alphabets[m]>max_frequency_number)
                        max_frequency_number = alphabets[m];
                }
                else if(input[index]=='n' || input[index]=='N'){
                    alphabets[n]++;
                    if(alphabets[n]>max_frequency_number)
                        max_frequency_number = alphabets[n];
                }
                else if(input[index]=='o' || input[index]=='O'){
                    alphabets[o]++;
                    if(alphabets[o]>max_frequency_number)
                        max_frequency_number = alphabets[o];
                }
                else if(input[index]=='p' || input[index]=='P'){
                    alphabets[p]++;
                    if(alphabets[p]>max_frequency_number)
                        max_frequency_number = alphabets[p];
                }
                else if(input[index]=='q' || input[index]=='Q'){
                    alphabets[q]++;
                    if(alphabets[q]>max_frequency_number)
                        max_frequency_number = alphabets[q];
                }
                else if(input[index]=='r' || input[index]=='R'){
                    alphabets[r]++;
                    if(alphabets[r]>max_frequency_number)
                        max_frequency_number = alphabets[r];
                }
                else if(input[index]=='s' || input[index]=='S'){
                    alphabets[s]++;
                    if(alphabets[s]>max_frequency_number)
                        max_frequency_number = alphabets[s];
                }
                else if(input[index]=='t' || input[index]=='T'){
                    alphabets[t]++;
                    if(alphabets[t]>max_frequency_number)
                        max_frequency_number = alphabets[t];
                }
                else if(input[index]=='u' || input[index]=='U'){
                    alphabets[u]++;
                    if(alphabets[u]>max_frequency_number)
                        max_frequency_number = alphabets[u];
                }
                else if(input[index]=='v' || input[index]=='V'){
                    alphabets[v]++;
                    if(alphabets[v]>max_frequency_number)
                        max_frequency_number = alphabets[v];
                }
                else if(input[index]=='w' || input[index]=='W'){
                    alphabets[w]++;
                    if(alphabets[w]>max_frequency_number)
                        max_frequency_number = alphabets[w];
                }
                else if(input[index]=='x' || input[index]=='X'){
                    alphabets[x]++;
                    if(alphabets[x]>max_frequency_number)
                        max_frequency_number = alphabets[x];
                }
                else if(input[index]=='y' || input[index]=='Y'){
                    alphabets[y]++;
                    if(alphabets[y]>max_frequency_number)
                        max_frequency_number = alphabets[y];
                }
                else if(input[index]=='z' || input[index]=='Z'){
                    alphabets[z]++;
                    if(alphabets[z]>max_frequency_number)
                        max_frequency_number = alphabets[z];
                }
            }
            printf("%d\n", max_frequency_number);
            max_frequency_number=0;
			// matrix initial
			for(index=0;index<=27;index++){
				alphabets[index]=0;
			}
    	}
    }
    return 0;
}
