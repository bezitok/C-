#include<iostream>
using namespace std;
class PhanSo{
	private:
		int tu;
		int mau;
	public:
		void Xuat(){
			cout<<tu<<"/"<<mau;
		}
		PhanSo(){
		}
		PhanSo(int a, int b){
			tu = a;
			mau = b; 
		}
		void operator - ();
};
void PhanSo::operator -(){
	tu = -tu;
	mau = mau;
}
main(){
	PhanSo A(1,3);
	-A;
	A.Xuat(); 
}
