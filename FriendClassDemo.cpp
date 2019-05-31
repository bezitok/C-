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
		friend float DienTich(HinhChuNhat);
};
float DienTich(HinhChuNhat H){
	return H.a * H.b;
}
main(){
	HinhChuNhat H(4,5);
	cout<<"Dien tich: "<<DienTich(H)<<endl;
	system("pause");
	return 0;
}
