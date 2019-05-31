#include<iostream>
#include<vector>
#include<ctype.h>
#include<string>
#include<iomanip>
#include<stdio.h>
using namespace std;
class Hang{
	private:
		char maHang[4];
		char tenHang[30];
		double donGia;
	public:
		Hang(){};
		Hang(char maHang, char tenHang, double donGia){
			maHang = maHang;
			tenHang = tenHang;
			donGia = donGia;
		}
		void Nhap(){
			cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
			cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
			cout<<"Nhap don gia: "; cin>>donGia;
		}
		void Xuat(){
			cout<<setw(10)<<maHang<<right<<setw(20)<<tenHang<<right<<setw(10)<<donGia;
		}
};
class Phieu{
	private:
		char maPhieu[4];
		Hang hang;
		int n;
		vector<Hang> listPhieu;
	public:
		Phieu(){
		}
		Phieu(char maPhieu, Hang hang, int n){
			maPhieu = maPhieu;
			hang = hang;
			n = n;
		}
		void Nhap(){
			cout<<"Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
			do{
				cout<<"Nhap so luong mat hang trong phieu: "; cin>>n;
				if(n<=0){
					cout<<"So luong ko the nho hon hoac bang 0. Vui long nhap lai"<<endl;
				}
			}while(n<=0);
			for(int i=0; i<n; i++){
				cout<<"Nhap thong tin mat hang thu "<<i+1<<endl;
				hang.Nhap();
				cout<<"------------"<<endl;
				listPhieu.push_back(hang);
			}
		}
		void Xuat(){
			cout<<setw(10)<<maPhieu<<setw(10)<<n; hang.Xuat();
		}
};
main(){
	cout<<"--------------------INPUT----------------------"<<endl;
	Phieu phieu;
	phieu.Nhap();
	cout<<"------------------INFORMATION-----------------"<<endl;
	cout<<right<<setw(10)<<"Ma phieu"<<right<<setw(10)<<"So luong"<<right<<setw(10)<<"Ma hang"<<right<<setw(20)<<"Ten hang"<<right<<setw(10)<<"Don gia"<<endl;
	phieu.Xuat();
}

















