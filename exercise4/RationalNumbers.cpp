#include<iostream>
using namespace;
class Rational{
private:
	int numerator;
	int denominator;

public:
	Rational(){
		numerator = 0;
		denominator = 1;
	}
	
	Rational(int numerator, int denominator){
		numerator = getNumerator();
		denominator = getDenominator();
		return Rational(numerator, denominator);
	}
	
	int getNumerator(){
		cout<<"请输入分子:";
		cin>>numerator;
		return numerator;
	}
	
	int getDenominator(){
		cout<<"请输入分母:";
		cin>>denominator;
		return denominator;
	}
	
	Rational add(Rational r1, Rational r2){
		int n = r1.numerator * r2.denominator + r1.denominator * r2.numerator;
		int d = r1.denominator * r2.denominator;
		return new Rational(n, d);
	}
	
	Rational substract(Rational r1, Rational r2){
		int n = r1.numerator * r2.denominator - r1.denominator * r2.numerator;
		int d = r1.denominator * r2.denominator;
		return new Rational(n, d);
	}
	
	Rational multiply(Rational r1, Rational r2){
		int n = r1.numerator * r2.numerator;
		int d = r1.denominator * r2.denominator;
		return new Rational(n, d);
	}
	
	Rational divide(Rational r1, Rational r2){
		int n = r1.numerator * r2.denominator;
		int d = r2.numerator * r1.denominator;
		return new Rational(n, d);
	}
	
	int compareTo(Rational r1, Rational r2){
		Rational r = Rational.substract(r1, r2);
		if(r.numerator * r.denominator < 0)
			return -1;
		else if(r.numerator == 0)
			return 0;
		else
			return 1;
	}
	
	bool equals(Rational r1, Rational r2){
		if((r1.numerator == r2.numerator) && (r1.denominator == r2.denominator))
			return true;
		else
			return false;
		
	}
	
	int intValue(Rational r){
		return r.numerator / r.denominator;
	}
	
	double doubleValue(Rational r){
		return (double)r.numerator / (double)r.denominator;
	}
	
	char* toString(Rational r){
		if(r.denominator == 1){
			return itoa(r.numerator);
		}else{
			return itoa(r.numerator) + "/" + itoa(r.denominator);
		}
	}
	
	Rational operator +(Rational r2){
		return add(r1, r2);
	}
	
	Rational operator -(Rational r2){
		return substract(r1, r2);
	}	
	
	Rational operator *(Rational r2){
		return multiply(r1, r2);
	}

	Rational operator /(Rational r2){
		return divide(r1, r2);
	}
	
	int operator [](int i){
		if(i == 0)
			return numerator;
		else if(i == 1)
			return denominator;
	}
	
	Rational operator +=(Rational r1, Rational r2){
		r1 = r1 + r2;
		return r1;
	}
	
	Rational operator -=(Rational r1, Rational r2){
		r1 = r1 - r2;
		return r1;
	}
	
	Rational operator *=(Rational r1, Rational r2){
		r1 = r1 * r2;
		return r1;
	}
	
	Rational operator /=(Rational r1, Rational r2){
		r1 = r1 / r2;
		return r1;
	}
	
	Rational operator ++(Rational r){
		r.numerator = r.numerator + r.denominator;
		return r;
	}
	
	Rational operator --(Rational r){
		r.numerator = r.numerator - r.denominator;
		return r;
	}
	
	bool operator <(Rational r1, Rational r2){
		int flag = compareTo(r1, r2);
		if(flag == -1)
			return true;	
		else
			return false;
	}
	
	bool operator <=(Rational r1, Rational r2){
		int flag = compareTo(r1, r2);
		if(flag == -1 || flag == 0)
			return true;	
		else
			return false;
	}
	
	bool operator >(Rational r1, Rational r2){
		int flag = compareTo(r1, r2);
		if(flag == 1)
			return true;	
		else
			return false;
	}
	
	bool operator >=(Rational r1, Rational r2){
		int flag = compareTo(r1, r2);
		if(flag == 1|| flag == 0)
			return true;	
		else
			return false;
	}
	
	bool operator ==(Rational r1, Rational r2){
		if(equals(r1, r2))
			return true;	
		else
			return false;
	}
	
	bool operator !=(Rational r1, Rational r2){
		if(!equals(r1, r2))
			return true;
		else
			return false;
	}
};

