#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int x,z;
	int c;
	cout << "������� x: ";
    cin >> x;
 
    cout << " ������� z: ";
    cin >> z;
    cout<<"������� �����:";
    cin>> c;
    if (c > x && c < z){
    	cout << "�����:" << c <<"������ � �������� (" << x << "," << z << ")"<<endl;
	}
	else
    {
        cout << "�����: " << c << " �� ������� � �������� (" << x << "," << z << ")" <<endl;
    }
   return 0;
}
