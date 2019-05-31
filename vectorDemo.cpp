#include<iostream>
#include<vector>
using namespace std;
main(){
	vector <int> numList;
	for(int i=0; i<11; i++){
		numList.push_back(i);
	}
	for(int i=0; i<numList.size(); i++){
		cout<<numList.at(i)<<"\t";
	}
	system("pause");
	return 0;
}
