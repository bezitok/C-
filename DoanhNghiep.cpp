#include<iostream>
#include<ctype.h>
#include<string>
#include<iomanip>
#include<stdio.h>
#include<vector>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(){
		}
		Date(int d, int m, int y){
			this->day = d;
			this->month = m;
			this->year = y;
		}
		void setYear(int y){
			this->year = y;
		}
		int getYear(){
			return year;
		}
		void Nhap(){
			cout<<"Nhap ngay thanh lap"<<endl;
			cout<<"Nhap ngay: "; cin>>day;
			cout<<"Nhap thang: "; cin>>month;
			cout<<"Nhap nam: "; cin>>year;
		}
		void Xuat(){
			cout<<setw(10)<<day<<"/"<<month<<"/"<<year;
		}
};
class DiaChi{
	private:
		char dienThoai[12];
		char phuong[30];
		char quan[30];
		char thanhPho[30];
	public:
		DiaChi(){
		}
		void setThanhPho(char thanhPho){
			thanhPho = thanhPho;
		}
		string getThanhPho(){
			return thanhPho;
		}
		void Nhap(){
			cout<<"Nhap so dien thoai: "; fflush(stdin); gets(dienThoai);
			cout<<"Nhap phuong: "; fflush(stdin); gets(phuong);
			cout<<"Nhap quan: "; fflush(stdin); gets(quan);
			cout<<"Nhap thanh pho: "; fflush(stdin); gets(thanhPho);
		}
		void Xuat(){
			cout<<setw(7)<<phuong<<"-"<<setw(7)<<quan<<"-"<<setw(8)<<thanhPho<<"-"<<dienThoai;
		}
};
class DoanhNghiep{
	private:
		int maDN;
		char tenDN[60];
		Date ngayTL;
		DiaChi diaChi;
		char giamDoc[30];
		long doanhThu;
	public:
		void Nhap(){
			cout<<"Nhap ma DN: "; cin>>maDN;
			cout<<"Nhap ten DN: "; fflush(stdin); gets(tenDN);
			ngayTL.Nhap();
			diaChi.Nhap();
			cout<<"Nhap ten giam doc: "; fflush(stdin); gets(giamDoc);
			cout<<"Doanh thu: "; cin>>doanhThu;
		}
		void Xuat(){
			cout<<setw(5)<<maDN<<setw(15)<<tenDN; ngayTL.Xuat(); diaChi.Xuat(); cout<<setw(20)<<giamDoc<<setw(15)<<doanhThu;
		}
};
main(){
	int n;
	vector<DoanhNghiep> listDoanhNghiep;
	do{
		cout<<"Nhap so luong doanh nghiep: "; cin>>n;
		if(n<=0){
			cout<<"Nhap sai. Nhap lai"<<endl;
		}
	}while(n<=0);
	cout<<"--------------INPUT--------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"Nhap thong tin cho doanh nghiep "<<i+1<<endl;
		DoanhNghiep doanhNghiep;
		doanhNghiep.Nhap();
		listDoanhNghiep.push_back(doanhNghiep);
		cout<<"----------------------------------"<<endl;		
	}
	cout<<"--------------OUTPUT--------------"<<endl;
	cout<<setw(5)<<"Ma DN"<<setw(15)<<"Ten DN"<<setw(12)<<"Ngay TL"<<setw(25)<<"Dia chi/SDT"<<setw(20)<<"Giam doc"<<setw(15)<<"Doanh thu"<<endl;
	for(int i=0; i<listDoanhNghiep.size(); i++){
		listDoanhNghiep[i].Xuat();
	}
	cout<<"-------------------"<<endl;
	
}








































