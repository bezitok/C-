#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<ctype.h>
#include<string>
#include<vector>
using namespace std;
class SanPham{
	protected:
		char tenSP[30];
		int namSX;
		long gia;
	public:
		void Nhap(){
			cout<<"Nhap ten SP: "; fflush(stdin); gets(tenSP);
			cout<<"Nam SX: "; cin>>namSX;
			cout<<"Gia ban: "; cin>>gia;
		}
		void Xuat(){
			cout<<setw(10)<<tenSP<<setw(10)<<namSX<<setw(10)<<gia;
		}
};
class HoaDon:public SanPham{
	protected:
		int SLBan;
		long giaBan, tongTien, thue, lai;
	public:
		void Nhap(){
			SanPham::Nhap();
			cout<<"Nhap SL ban: "; cin>>SLBan;
			cout<<"Nhap gia ban: "; cin>>giaBan;
		}
		void Calculate(){
			tongTien = SLBan * giaBan;
			thue = tongTien * 0.1;
			lai = (giaBan - gia) * SLBan;
		}
		void Xuat(){
			SanPham::Xuat();
			cout<<setw(10)<<SLBan<<setw(10)<<giaBan<<setw(10)<<tongTien<<setw(10)<<thue<<setw(10)<<lai<<endl;
		}
};
main(){
	vector<HoaDon> listHoaDon;
	int n;
	do{
		cout<<"Nhap so luong hoa don: "; cin>>n;
		if(n<=0){
			cout<<"Nhap sai so luong. Vui long nhap lai"<<endl;
		}
	}while(n<=0);
	cout<<"----------------INPUT----------------"<<endl;
	for(int i=0; i<n; i++){
		HoaDon hoaDon;
		cout<<"Nhap thong tin cho hoa don "<<i+1<<endl;
		hoaDon.Nhap();
		cout<<"----------"<<endl;
		listHoaDon.push_back(hoaDon);
	}	
	cout<<"-------------------OUTPUT------------------"<<endl;
	cout<<setw(4)<<"STT"<<setw(10)<<"Ten SP"<<setw(7)<<"Nam SX"<<setw(7)<<"Gia ban"<<setw(7)<<"SL Ban"<<setw(7)<<"Gia ban"<<setw(10)<<"Tong tien"<<setw(10)<<setw(7)<<"Thue"<<setw(7)<<"Lai"<<endl;
	for(int i=0; i<listHoaDon.size(); i++){
		cout<<setw(4)<<i+1;
		listHoaDon.at(i).Calculate();
		listHoaDon[i].Xuat();
	}
	cout<<"-------------------------"<<endl;
	if(listHoaDon.size()<2){
		cout<<"Khong the xoa"<<endl;
	}else{
		listHoaDon.erase(listHoaDon.begin()+1);
	}
	cout<<"------------------------"<<endl;
	for(int i=0; i<listHoaDon.size(); i++){
		listHoaDon[i].Xuat();
	}
	
	
	
	
	
	
}
