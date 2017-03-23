#include <iostream>
#include "function.h"
using namespace std;
/*
	Polynomial();
    Polynomial(const int , const int [51]);
    Polynomial add( const Polynomial) const; // add function
    Polynomial subtract( const Polynomial ) const; // subtract function
    Polynomial multiplication( const Polynomial ) const; // multiplication function
    void output() const;
*/ 
Polynomial::Polynomial(){
	int i;
	for(i=0;i<101;i++){
		coefficients[i]=0;
	}
	greatestPower=0;
}
Polynomial::Polynomial(const int n, const int p[51]){
	greatestPower=n;
	int i;
	for(i=0;i<101;i++){
		coefficients[i]=0;
	}
	for(i=n;i>=0;i--){
		coefficients[i]=p[i];
	}
}
Polynomial Polynomial::add( const Polynomial p) const
{
	Polynomial ans;
	int i;
	ans.greatestPower=i=this->greatestPower>=p.greatestPower? this->greatestPower:p.greatestPower;
	for(;i>=0;i--){
		ans.coefficients[i]=this->coefficients[i]+p.coefficients[i];
	}
	return ans;
}
Polynomial Polynomial::subtract( const Polynomial p) const
{
	Polynomial ans;
	int i;
	ans.greatestPower=i=this->greatestPower>=p.greatestPower? this->greatestPower:p.greatestPower;
	for(;i>=0;i--){
		ans.coefficients[i]=this->coefficients[i]-p.coefficients[i];
	}
	return ans;
}
Polynomial Polynomial::multiplication( const Polynomial p) const
{
	Polynomial ans;
	ans.greatestPower=this->greatestPower+p.greatestPower;
	int i,j;
	for(i=0;i<=this->greatestPower;i++){
		for(j=0;j<=p.greatestPower;j++){
			ans.coefficients[i+j]+=this->coefficients[i]*p.coefficients[j];
		}
	}
	return ans;
}
void Polynomial::output() const
{
	int i,j=1;
	for(i=this->greatestPower;i>=0;i--){
		if(coefficients[i]==0&&j){
			continue;
		}
		j=0;
		cout<<this->coefficients[i];
		if(i!=0) cout<<" ";
	}	
}

