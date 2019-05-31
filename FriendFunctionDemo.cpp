#include<iostream>
using namespace std;
class HinhChuNhat{
	private:
		float a, b;
	public:
		HinhChuNhat();
		HinhChuNhat(float a, float b){
			this->a = a;
			this->b = b;
		}
		friend void DienTich(HinhChuNhat);
};
void DienTich(HinhChuNhat H){
	cout<<"Nhap a: "; cin>>H.a;
	cout<<"Nhap b: "; cin>>H.b;
	float dienTich = H.a*H.b;
	cout<<"Dien tich = "<<dienTich<<endl;
}
main(){
	HinhChuNhat H(4,5);
	DienTich(H);
	system("pause");
	return 0;
}
