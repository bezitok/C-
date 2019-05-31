#include<bits/stdc++.h>

using namespace std;

class Arr{
	public:
		int n;
		int* a;
		Arr(){
			n = 0;
			a = NULL;
		}
		void inputArr(){
			cin>>n;
			a = (int *) malloc(n*sizeof(int));
			for(int i = 0;i<n;i++){
				cin>>a[i];
			}
			
		}
		void xuatArr(){
			for(int i = 0;i<n;i++){
				cout<<*(a+i)<<" ";
			}
		}
		Arr& operator ++ (int){
			int temp = 99999999;
			for(int i = 0;i<n;i++){
				if(temp>*(a+i))
					temp = *(a+i);
			}
			for(int i = 0;i<n;i++){
				*(a+i)+=temp;
			}
		}
		friend ostream& operator << (ostream& os,const Arr &arr);
};

ostream& operator << (ostream& os,const Arr &arr){
	for(int i = 0;i<arr.n;i++){
		os<<*(arr.a+i)<<" ";
	}
};
int main(){
	Arr a;
	a.inputArr();
	cout<<a;
	a++;
	cout<<a;
		return 0;
}
