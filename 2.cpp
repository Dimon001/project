#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	int x,z;
	int c;
	cout << "¬ведите x: ";
    cin >> x;
 
    cout << " ¬ведите z: ";
    cin >> z;
    cout<<"¬ведите число:";
    cin>> c;
    if (c > x && c < z){
    	cout << "„исло:" << c <<"входит в диапозон (" << x << "," << z << ")"<<endl;
	}
	else
    {
        cout << "„исло: " << c << " не входиьт в диапозон (" << x << "," << z << ")" <<endl;
    }
   return 0;
}
