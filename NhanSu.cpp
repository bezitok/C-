#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<string>
#include<iomanip>
using namespace std;
class Date{
	public:
		int day, month, year;
		void Nhap(){
			cout<<"Nhap ngay: "; cin>>day;
			if(day<1 || day>31){
				cout<<"Ngay nhap sai. Vui long nhap lai."<<endl;
				Nhap();
			}
			do{
				cout<<"Nhap thang: "; cin>>month;
				if(month<1 || month>12){
					cout<<"Thang nhap sai. Vui long nhap lai."<<endl;
				}
			}while(month<1||month>12);
			cout<<"Nhap nam: "; cin>>year;
		}
		void Xuat(){
			cout<<setw(13)<<day<<"/"<<month<<"/"<<year;
		}
};
class NhanSu{
	public:
		int maNhanSu;
		char hoTen[50];
		Date date;
		void Nhap(){
			cout<<"Nhap ma nhan su: "; cin>>maNhanSu;
			cout<<"Nhap ho ten: "; 
			fflush(stdin);
			gets(hoTen);
			date.Nhap();
		}
		void Xuat(){
			cout<<setw(15)<<maNhanSu<<right<<setw(20)<<hoTen; date.Xuat(); cout<<endl;
		}
};

main(){
	int n;
	do{
		cout<<"Nhap so luong nhan su muon them: "; cin>>n;
		if(n<=0){
			cout<<"So luong khong the nho hon hoac bang 0. Vui long nhap lai"<<endl;
		}
	}while(n<=0);
	vector<NhanSu> listNhanSu;
	for(int i=0; i<n; i++){
		NhanSu nhanSu;
		nhanSu.Nhap();
		listNhanSu.push_back(nhanSu);
	}
	cout<<"-----------------------INFROMATION------------------------"<<endl;
	cout<<setw(15)<<"Ma nhan su"<<setw(20)<<"Ho ten"<<setw(20)<<"Ngay sinh"<<endl;
	for(int i=0; i<listNhanSu.size(); i++){
		listNhanSu.at(i).Xuat();
	}
}



















