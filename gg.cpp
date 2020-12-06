#include <iostream>
using namespace std;
int main() {
	for (int i=0; i<2, i++) {
		for(int j=0; j<2; j++) {
			cout<< i%2 << j%2 << " = " << (i%2 || j%2) << endl;
		}
	}
}
