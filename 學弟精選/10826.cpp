#include <stdio.h>

#include <stdio.h>

//int numPrime(int start, int end)
//{
//	if(end==1) return 0; 
//	int i, j;
//	int isPrime=1, sum=0;
//	for(i=start;i<=end;i++){
//		if(i%2==0||i%3==0||i%5==0){
//			if(i==2||i==3||i==5){
//				sum++;
//			}
//			continue;
//		} 
//		isPrime=1;
//		for(j=7;j*j<=i;j+=2){
//			if(i%j==0){
//				isPrime=0;
//				break;
//			}
//		}
//		if(isPrime&&i!=1) sum++; 
//	} 
//	return sum; 
// } 
int a[10000001];
int numPrime(int start, int end)
{
	
	int i, j, k,ans=0,prime;
	for(i=2;i<=end;i++){
		a[i]=1;
	}
	for(i=2;i*i<=end;i++){
		if(a[i]==0) continue; 
		prime=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
		if(prime){
			for(k=i+i;k<=end;k+=i){
				a[k]=0;
			}
		}
	} 
	for(i=start;i<=end;i++){
		if(a[i]) ans++; 
	}
	return ans; 
 } 

int main(){



    int start, end;

    while(scanf("%d %d", &start, &end)!=EOF){
        printf("%d\n", numPrime(start, end));
    }



    return 0;

}
