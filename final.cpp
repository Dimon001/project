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
	cout<<"Какая фигура Вам требуется?"<<endl;
	cout<<"1.Квадрат "<<endl;
	cout<<"2.Круг "<<endl;
	cout<<"3.Треугольник "<<endl;
	cout<<"Введите нужный номер фигуры "<<endl;
	cin>>x;
	cout<<"Какое действие Вам требуется?"<<endl;
	cout<<"1.Площадь"<<endl;
	cout<<"2.Периметр"<<endl;
	cout<<"Введите нужный номер для рассчета "<<endl;
	cin>>n;
	
	if(n==1){
	
		if(x==1){
		cout<<"Введите длину стороны"<<endl;
		cin>>y;
		cout<<y*y;
		}
		else if(x==2){
		cout<<"Введите радиус"<<endl;
		cin>>y;
		cout<<y*y*p;
		}
		else if(x==3){
		cout<<"Введите длину основания"<<endl;
		cin>>y;
		cout<<"Введите высоту"<<endl;
		cin>>z;
		cout<<0.5*y*z;
		}
	}
	else if(n==2){
		if(x==1){
		cout<<"Введите длину стороны"<<endl;
		cin>>y;
		cout<<y*4;
		}
		else if(x==2){
		cout<<"Введите радиус"<<endl;
		cin>>y;
		cout<<2*p*y;
		}
		else if(x==3){
		cout<<"Введите первую сторону"<<endl;
		cin>>m;
		cout<<"Введите вторую сторону"<<endl;
		cin>>n;
		cout<<"Введите третью сторону"<<endl;
		cin>>b;
		cout<<m+n+b;
		}
	}
	cout << endl;
	cout << "Повторить?" << endl;
	cout << "1.Да " << endl;
	cout << "2.Нет " << endl;
	cin >> zz;
	if ( zz == 1) {
		rt = true;
	}
	else if (zz == 2) {
		cout << "Удачи!;)" << endl;
		break;
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
