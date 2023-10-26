/*#include <iostream>
using namespace std;
int main(void) {
	cout << "以下是1~100的完全数:"<<endl;
	for (int x=2; x <= 100; x++) {
		int sum = 0;
		for(int n=1;n<x;n++){
			if (x % n == 0) {
				sum += n;
			}	
		}
		if (x==sum){
			cout <<sum<< " ";
		}
	}
	return 0;
}*/