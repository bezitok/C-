#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
using namespace std;
main(){
	int n;
	int a;
	vector<int> listNumber;
	cout<<"Nhap so phan tu cua mang: "; cin>>n;
	srand(time(NULL));
	for(int i=0; i<n; i++){
		a = rand() % 151 - 30;
		listNumber.push_back(a);
	}
	cout<<"Mang vua nhap: "<<endl;
	for(int i=0; i<listNumber.size(); i++){
		cout<<listNumber[i]<<"\t";
	}
}
