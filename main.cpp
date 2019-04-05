//main file 
//craeted by Andy Mahoney
//3/16/19

#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>

using namespace std;

int n = 10000;

class Integer{
private:
	mutable int Integer_count = 0;
	int Integer_value;

public:
	Integer() {
		Integer_value = 0;
	}

	Integer(int a) {
		Integer_value = a;
	}
	void copy(Integer Other){
		this->Integer_value=Other.Integer_value;
		this->Integer_count++;
	}
	int get() {
		return Integer_count;
	}
	const int value(){
		return this->Integer_value;
	}
	bool operator<(const Integer & y) const {
		Integer_count++;
		if (Integer_value < y.Integer_value) {
			return true;
		} else {
			return false;
		}
	}
	Integer& operator =(Integer& y){
		this->copy(y);
	}
};

template <class T>
void selection_sort(T a[], int start, int stop) {
	while (stop - start > 1) {
		auto itr_max = std::max_element(a + start, a + stop);
		std::swap(*itr_max, a[stop-1]);
		--stop;
	}
}

template <class T>
void insertion_sort(T a[5], int i, int j){
	for( int k = i + 1; k < (j - 1); k++ ) {
		int x = a[k];
		int p = k - 1;
		while( p >= i && x < a[p] ) {
			a[p+1] = a[p];
			--p;
		}
		a[p+1] = x;
	}
	for( int b = 0; b < 5; b++ ){
		cout << " " << a[b] << " ";
	}
	cout << endl;
}

template <class T>
void merge(T a[], int start, int middle, int stop) {
	int i1 = start;

	int i2 = middle;

	T * result = new T[stop - start];

	int j = 0;

	while (i1 < middle && i2 < stop) {
		if (a[i1] < a[i2]) {
			result[j] = a[i1];
			++i1;
		} else {
			result[j] = a[i2];
			++i2;
		}
		++j;
	}
	delete [] result;
}

template <class T>
void mergesort(T a[], int start, int stop) {
	if (stop - start > 1) {
		int middle = (start + stop) / 2;

		mergesort(a, start, middle);
		mergesort(a, middle, stop);

		std::inplace_merge(a + start, a + middle, a + stop);
	}
}

template <class T>
void partition(T a[], int start, int stop, int & pivot) {
	T temp2 = a[start];
	a[start] = a[pivot];
	a[pivot] = temp2;
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
	}
	temp[k] = a[start];
	pivot = start + k;
	//++k;
	++b;
	std::copy(temp, temp + b, a + start);
	delete temp;
}

template <class T>
void firstquicksort (T a[], int start, int stop) {
	if (stop - start > 1) {
		int pivot = start + 1;
		cout << start  << endl;
		cout << "This shit be the pivot = " << pivot << endl;
		partition(a, start, stop, pivot);
		cout << endl;
		quicksort(a, start, pivot);
		quicksort(a, pivot + 1, stop);
	}
}

template <class T>
void randquicksort (T a[], int start, int stop) {
	if (stop - start > 1) {
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

template <class T>
void inPlacePartition(T a[], int i, int j, int & k) {
    int p = i; //smaller region
    int q = i; //larger region
    int r = j - 1; //pivot to be
    T temp = a[r];
    a[r] = a[k];
    a[k] = temp;
    while(q < r) {
        if(a[q].value() <= a[r].value()) {
	    T temp3 = a[q];
	    a[q] = a[p];
	    a[p] = temp3;
            ++p;
        }
        ++q;
    }
    T temp2 = a[r];
    a[r] = a[p];
    a[p] = temp2;
    k = p;
}

template <class T>
void inPlaceQuickSort(T a[], int start, int stop) {
        if( stop - start > 1) {
            int pivot = start + rand() % (stop - start);
            inPlacePartition(a, start, stop, pivot);
            inPlaceQuickSort(a, start, pivot);
            inPlaceQuickSort(a, pivot + 1, stop);
        }
}

int main(){
	int a[5] = {52, 92, 102, 11, 99};
	Integer yeet(5);
	Integer yoot(0);

	if (yoot < yeet) {
		cout << yoot.value();
	}
	//for(int i = 0; i < 5; i++) {
	//	cout << " " <<  a[i];
	//}
	//cout << endl;
	return 0;
}
