#include <iostream>
#include <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int x,y,n,z,m,b;
	int zz = 0;
	double p;
	bool rt = true;
	p=3.1415;
	

	

	while (rt) {
	cout<<"����� ������ ��� ���������?"<<endl;
	cout<<"1.������� "<<endl;
	cout<<"2.���� "<<endl;
	cout<<"3.����������� "<<endl;
	cout<<"������� ������ ����� ������ "<<endl;
	cin>>x;
	cout<<"����� �������� ��� ���������?"<<endl;
	cout<<"1.�������"<<endl;
	cout<<"2.��������"<<endl;
	cout<<"������� ������ ����� ��� �������� "<<endl;
	cin>>n;
	
	if(n==1){
	
		if(x==1){
		cout<<"������� ����� �������"<<endl;
		cin>>y;
		cout<<y*y;
		}
		else if(x==2){
		cout<<"������� ������"<<endl;
		cin>>y;
		cout<<y*y*p;
		}
		else if(x==3){
		cout<<"������� ����� ���������"<<endl;
		cin>>y;
		cout<<"������� ������"<<endl;
		cin>>z;
		cout<<0.5*y*z;
		}
	}
	else if(n==2){
		if(x==1){
		cout<<"������� ����� �������"<<endl;
		cin>>y;
		cout<<y*4;
		}
		else if(x==2){
		cout<<"������� ������"<<endl;
		cin>>y;
		cout<<2*p*y;
		}
		else if(x==3){
		cout<<"������� ������ �������"<<endl;
		cin>>m;
		cout<<"������� ������ �������"<<endl;
		cin>>n;
		cout<<"������� ������ �������"<<endl;
		cin>>b;
		cout<<m+n+b;
		}
	}
	cout << endl;
	cout << "���������?" << endl;
	cout << "1.�� " << endl;
	cout << "2.��� " << endl;
	cin >> zz;
	if ( zz == 1) {
		rt = true;
	}
	else if (zz == 2) {
		cout << "�����!;)" << endl;
		break;
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
