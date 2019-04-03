#include<iostream>

using namespace std;

class Integer{
public:
	void defaultConstructor(){ 
		this->Integer_value =0;
	}
	void IntegerConstructor(int x){
		this->Integer_value=x;
	}
	void copy(Integer Other){
		this->Integer_value=Other.Integer_value;
		this->Integer_count++;
	}
	const int value(){
		return this->Integer_value;
	}
	void increment(){
		Integer_count++;
	}
	bool operator<(const Integer & y)const{
		//IntegerConstructor((Integer_count)+1);
		//Integer_count++;
		//this->increment();
		//const int yval=y.value();
		if(Integer_value<y.Integer_value){return true;}
		else{return false;}
	}
	Integer& operator =(Integer& y){
		//this->Integer_count++;
		//this->value()=y.value();
		this->copy(y);
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
