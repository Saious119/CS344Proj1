//main file 
//craeted by Andy Mahoney
//3/16/19

#include<iostream>
#include<vector>

using namespace std;
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
	}
	temp[k] = a[start];
	pivot = start + k;
	++k;
	++b;
	std::copy(temp, temp + b, a + start);
	delete temp;
}

template <class T>
void quicksort (T a[], int start, int stop) {
	if (stop - start > 1) {
		int pivot = start;
		partition(a, start, stop, pivot);
		quicksort(a, start, pivot);
		quicksort(a, pivot + 1, stop);
	}
}

int main(){
	int a[5] = {99, 92, 38, 11, 52};
	//insertion_sort(a,0,6);
	quicksort (a, 0, 5);
	for(int i = 0; i < 5; i++) {
		cout << " " <<  a[i];
	}
	return 0;	
}
