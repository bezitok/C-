#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void Swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void InputArray(int X[], int &n){
	srand(time(NULL));
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	for(int i=0; i<n; i++){		
		X[i] = rand() % 101 - 50;
	}
}
void OutputArray(int X[], int n){
	for(int i=0; i<n; i++){
		cout<<X[i]<<"\t";
	}
}
void InsertionSort(int X[], int n){
	for(int i=1; i<n; i++){
		int t = X[i];
		int j = i-1;
		while(j>=0 && X[j]>t){
			X[j+1] = X[j];
			j--;
		}
		X[j+1] = t;
	}
}
main(){
	int X[100], n;
	InputArray(X,n);
	cout<<"Mang truoc khi sap xep: "<<endl;
	OutputArray(X, n);
	cout<<"\n"<<"Mang sau khi xep: "<<endl;
	InsertionSort(X,n);
	OutputArray(X,n);
}
