#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<string>
#include<iomanip>
using namespace std;
class NSX{
	private:
		char maNSX[5];
		char tenNSX[30];
		char diaChiNSX[30];
	public:
		NSX(){
		}
		NSX(char maNSX, char tenNSX, char diaChiNSX){
			maNSX = maNSX;
			tenNSX = tenNSX;
			diaChiNSX = diaChiNSX;
		}
		void setMaNSX(char maNSX){
			maNSX = maNSX;
		}
		void setTenNSX(char tenNSX){
			tenNSX = tenNSX;
		}
		void setDiaChiNSX(char diaChiNSX){
			diaChiNSX = diaChiNSX;
		}
		string getMaNSX(){
			return maNSX;
		}
		string getTenNSX(){
			return tenNSX;
		}
		string getDiaChiNSX(){
			return diaChiNSX;
		}
		void Nhap(){
			cout<<"Nhap ma NSX: "; fflush(stdin); gets(maNSX);
			cout<<"Nhap ten NSX: "; fflush(stdin); gets(tenNSX);
			cout<<"Dia chi NSX: "; fflush(stdin); gets(diaChiNSX);
		}
		void Xuat(){
			cout<<setw(10)<<maNSX<<setw(15)<<tenNSX<<setw(20)<<diaChiNSX;
		}
};
class Hang{
	private: 
		char maHang[5];
		char tenHang[30];
		NSX nsx;
	public:
		Hang(){
		}
		Hang(char maHang, char tenHang, NSX nsx){
			maHang = maHang;
			tenHang = tenHang;
			nsx = nsx;
		}
		void setMaHang(char maHang){
			maHang = maHang;
		}
		void setTenHang(char tenHang){
			tenHang = tenHang;
		}
		void setNSX(NSX nsx){
			nsx = nsx;
		}
		string getMaHang(){
			return maHang;
		}
		string getTenHang(){
			return tenHang;
		}
		NSX getNSX(){
			return nsx;
		}
		void Nhap(){
			cout<<"Nhap ma hang: "; fflush(stdin); gets(maHang);
			cout<<"Nhap ten hang: "; fflush(stdin); gets(tenHang);
			nsx.Nhap();
		}
		void Xuat(){
			cout<<right<<setw(10)<<maHang<<right<<setw(15)<<tenHang; nsx.Xuat();
		}
};
main(){
	int n;
	vector<Hang> listHang;
	cout<<"------------NHAP THONG TIN HANG HOA------------"<<endl;
	do{
		cout<<"Nhap so luong hang hoa muon nhap: "; cin>>n;
		if(n<=0){
			cout<<"So luong khong the nho hon hoac bang 0. Vui long nhap lai"<<endl;
		}
	}while(n<=0);
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin hang hoa cho mat hang "<<i+1<<endl;
		Hang hang;
		hang.Nhap();
		cout<"-------------------------";
		listHang.push_back(hang);
	}
	cout<<"---------------THONG TIN HANG HOA-----------------"<<endl;
	cout<<right<<setw(10)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(10)<<"Ma NSX"<<setw(15)<<"Ten NSX"<<setw(20)<<"Dia Chi"<<endl;
	for(int i=0; i<listHang.size(); i++){
		listHang[i].Xuat();
	}
}

































