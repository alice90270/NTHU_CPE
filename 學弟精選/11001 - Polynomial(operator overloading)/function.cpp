#include <iostream>
#include <string>
#include "function.h"
using namespace std;
/* 
class Polynomial
{
    friend std::ostream &operator<<(std::ostream &, const Polynomial &);
public:
    Polynomial();
    Polynomial(const int &, const int [51]);
    Polynomial operator+( const Polynomial & ) const; // addition
    Polynomial operator-( const Polynomial & ) const; // subtraction
    Polynomial operator*( const Polynomial & ) const; // multiplication
private:
    int coefficients[101];
    int greatestPower;
}; // end class Polynomial
*/ 

Polynomial::Polynomial()
{
	int i;
	for(i=0;i<101;i++){
		coefficients[i]=0;
	}
	greatestPower=0;	
}
Polynomial::Polynomial(const int &gp, const int data[51])
{
	greatestPower=gp;
	int i;
	for(i=0;i<101;i++){
		coefficients[i]=0;
	}
	for(i=gp;i>=0;i--){
		coefficients[i]=data[i];
	}
}
Polynomial Polynomial::operator+( const Polynomial &a ) const
{
	Polynomial ans;
	ans.greatestPower = this->greatestPower>=a.greatestPower?this->greatestPower:a.greatestPower;
	int i;
	for(i=ans.greatestPower;i>=0;i--){
		ans.coefficients[i] = this->coefficients[i]+a.coefficients[i];
	}
	return ans;
}
Polynomial Polynomial::operator-( const Polynomial &a ) const
{
	Polynomial ans;
	ans.greatestPower = this->greatestPower>=a.greatestPower?this->greatestPower:a.greatestPower;
	int i;
	for(i=ans.greatestPower;i>=0;i--){
		ans.coefficients[i] = this->coefficients[i]-a.coefficients[i];
	}
	return ans;
}
Polynomial Polynomial::operator*( const Polynomial &a ) const
{
	Polynomial ans;
	ans.greatestPower=this->greatestPower+a.greatestPower;
	int i,j;
	for(i=0;i<=this->greatestPower;i++){
		for(j=0;j<=a.greatestPower;j++){
			ans.coefficients[i+j]+=this->coefficients[i]*a.coefficients[j];
		}
	}
	return ans;
}
ostream &operator<<(ostream &out, const Polynomial &a)
{
	int i;
	for(i=a.greatestPower;i>=0;i--){
		if(i!=a.greatestPower) out<<" ";
		out<<a.coefficients[i];
	}
	return out;
}
