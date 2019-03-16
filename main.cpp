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

int main(){
	int a[5] = {29, 92, 38, 48, 11};
	insertion_sort(a,0,6);
	return 0;	
}
