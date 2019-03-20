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
int partition(T a[], int start, int stop, int pivot) {
	std::swap( a[pivot], a[start] );
		// moves pivot to start
    int reasons = stop - start;
    T * temp = new T [reasons];

	int k = 0; // next available position in temp
	int y = 1; // for decrementing things
	for (int i = start + 1; i < stop; ++i) {
		if (a[i] < a[start]) {
			temp[k] = a[i];
cout << "k: " << k << " " << temp[k] << endl;
			++k;
		} else if ((a[i] >= a[start])) {
			temp[reasons -y] = a[i];
cout << "r-y: " << reasons-y << " " << temp[reasons-y] << endl;
			++y;
		}
	}
	temp[k] = a[start]; // pivot
cout << "pivot: " << k << " " << temp[k] << endl;
cout << k << " " << y << endl;
	std::copy( temp, temp + k, a + start );
	delete temp;
	return( k );
}

template <class T>
void FirstQuickSort(T a[], int i, int j ){
	if(j-i>=2){
		int pivot = i;
		int pi = partition( a, i, j, pivot );
		FirstQuickSort( a, i, (pi - 1) );
		FirstQuickSort( a, (pi+1), j );
	}

}

int main(){
	int a[6] = {29, 92, 38, 48, 11, 10};

	std::cout << "Original: " << std::endl;
	for( int i = 0; i < 6; ++i )
        std::cout << a[i] << " ";
    cout << std::endl;
	FirstQuickSort( a, 0, 6 );
	std::cout << "fQS: " << std::endl;
	for( int i = 0; i < 6; ++i )
        std::cout << a[i] << " ";
    cout << std::endl;

	return 0;
}
*/
int main(){
	int a[5] = {29, 92, 38, 48, 11};
	insertion_sort(a,0,6);
	return 0;	
}
