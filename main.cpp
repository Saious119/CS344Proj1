//main file 
//craeted by Andy Mahoney
//3/16/19

#include<iostream>
#include<vector>
#include<cstdlib>

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

int insertion_sort(int a[5],int i,int j){
	for(int k=i+1;k<(j-1);k++){
		int x = a[k];
		int p = k-1;
		while(p>=i && x<a[p]){
			a[p+1]=a[p];
			--p;
		}
		a[p+1]=x;
	}
	for(int b=0; b<5;b++){
		cout<<" "<<a[b]<<" ";
	}
	cout<<endl;
}

template <class T>
void partition(T a[], int start, int stop, int & pivot) {
	std::swap(a[pivot], a[start]);
		//puts pivot in fist position
	T * temp = new T[stop - start];
	int k = 0;
	int e = stop - 1;
	int b = 0;
	for (int i = start + 1; i < stop; ++i) {
		if (a[i] < a[start]) {
			temp[k] = a[i];
			++k;
			++b;
		}
		else {
			temp[e] = a[i];
			--e;
			++b;
		}
		for( int i = start; i < stop; i++ ) {
			cout << temp[i] << " ";
		}
		cout << "BREAK" << endl;
	}
	temp[k] = a[start];
	pivot = start + k;
	//++k;
	++b;
	for( int i = start; i < stop; i++ ) {
			cout << temp[i] << " ";
		}
		cout << "it done been yeeted" << endl;
	
	std::copy(temp, temp + b, a + start);
	delete temp;
}

template <class T>
void quicksort (T a[], int start, int stop) {
	if (stop - start > 1) {
		//int pivot = start + 1;
		srand(time(NULL));
		int pivot = rand() % ( stop - start ) + start;
		cout << start  << endl;
		cout << "This shit be the pivot = " << pivot << endl;
		partition(a, start, stop, pivot);
		cout << endl;
		quicksort(a, start, pivot);
		quicksort(a, pivot + 1, stop);
	}
}

int main(){
	int a[5] = {52, 92, 102, 11, 99};
	//insertion_sort(a,0,6);
	for(int i = 0; i < 5; i++) {
		cout << " " <<  a[i];
	}
	cout << endl;

	quicksort (a, 0, 5);
	for(int i = 0; i < 5; i++) {
		cout << " " <<  a[i];
	}
	return 0;	
}