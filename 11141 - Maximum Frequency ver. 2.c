#include<stdio.h>
#include<string.h>
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25,z=26;
int alphabets[100];

int main(){
	char input[200000]={};
    int index, letter;
    while(gets(input)){
		int max_frequency_number=0;
        int length= strlen(input);
        int letter=0;
        if(input=="\n")
            printf("0\n");
    	else{
            //printf("length=%d\n", length);
            // count max frequency
			for(index=0;index<length;index++){
                if(input[index]>='a'&&input[index]<='z')
                    letter=input[index]-'a';
                else if(input[index]>='A'&&input[index]<='Z')
                    letter=input[index]-'A';
                else
                    continue;
                //printf("letter= %d\n", letter);
                alphabets[letter]++;
                if(alphabets[letter]>max_frequency_number)
                    max_frequency_number = alphabets[letter];
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
