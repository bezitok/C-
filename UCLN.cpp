#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int UCLN(int a, int b){
	if(b==0)
		return a;
	else
		return UCLN(b, a%b);
}
void InputArray(int X[], int n){
	srand(time(NULL));
	for(int i=0; i<n; i++){
		X[i] = rand() % 101 - 50;
	}
}
void OutputArray(int X[], int n){
	for(int i=0; i<n; i++){
		cout<<X[i]<<"\t";
	}
}
int SearchMax(int X[], int n){
	int max = X[0];
	for(int i=0; i<n; i++){
		if(X[i]>max){
			max = X[i];
		}
	}
	return max;
}
int SearchMin(int X[], int n){
	int min = X[0];
	for(int i=0; i<n; i++){
		if(X[i]<min){
			min = X[i];
		}
	}
	return min;
}
main(){
	int X[100], n;
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	InputArray(X,n);
	OutputArray(X,n);
	cout<<"\nMax cua day la: "<<SearchMax(X,n)<<endl;
	cout<<"Min cua day la: "<<SearchMin(X,n)<<endl;
	cout<<"UCLN cua max va min la: "<<UCLN(SearchMax(X,n),SearchMin(X,n));
}

















