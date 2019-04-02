#include<iostream>

using namespace std;

class Integer{
public:
	void defaultConstructor(){ this->Integer_value =0;}
	void IntegerConstructor(int x){this->Integer_value=x;}
	void copy(Integer Other){this->Integer_count=Other.Integer_count;Integer_count++;}
	int value(){return Integer_count;}
	const bool Integer& operator <(const Integer& y){
		this->Integer_count++;
		int yval=y.value();
		if(this->value()<y.value()){return true;}
		else{return false;}
	}
	Integer& operator =(Integer& y){
		this->Integer_count++;
		this->value()=y.value();
	}

private:
	int Integer_count = 0;
	int Integer_value;
};
/*
const bool Integer::operator < (const Integer &x, const Integer &y){
	this->Integer_count++;
	if(x.value()<y.value()){return true;}
	else{return false;}
};

void Integer::operator =(Integer& y){
	this->Integer_count++;
	this.value()=y.value();	
}
*/
int main(){
	Integer firstInt;
	return 0;
}
