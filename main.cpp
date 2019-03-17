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
/*
//Partition does 1 scan of the array? A questionable question.
template <class T>
void partition(T a[], int start, int stop, int & pivot) {
	std::swap(a[pivot], a[start]);
		// moves pivot to start
	T ∗ temp = new T[stop − start];
	int k = 0; // next available position in temp
	for (int i = start + 1; i < stop; ++i) {
		if (a[i] < a[start]) {
			temp[k] = a[i];
			++k;
		} else if (!a[i] < a[start]) {
			break;
		}
	}		
	temp[k] = a[start]; // pivot
	pivot = start + k; // final index in a
	++k;
	for (int i = pivot; i < stop; ++i)
		if (!(a[i] < a[start])){
			temp[k] = a[i];
			++k;
		}
	std::copy(temp, temp + k, a + start);
	delete temp;
}

template <class T>
void FirstQuickSort(T a[5],int i, int j){
	if(j-i>=2){
		T pivot=a[0];
		partition( a, i, j, pivot );
		
		
		
		for(int b=1;b<=j;++b){
			if(a[b]<pivot){
				
			
		}
	}
	
}
*/
int main(){
	int a[5] = {29, 92, 38, 48, 11};
	insertion_sort(a,0,6);
	return 0;	
}
