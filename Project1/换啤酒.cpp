#include <iostream>
using namespace std;
int main() {
	cout << "���������ж���Ǯ��" << endl;
	int money,sum,new_,ping,gai;
	cin >> money;
	new_ = sum = ping = gai = (money / 2);
	while (ping>=2||gai>=4) {
		new_ = ping / 2 + gai / 4;
		sum += new_;
		ping = ping%2+ new_;
		gai = gai%4+ new_;
		}
	cout << "��һ���ܺȵ� " << sum << " ƿơ��" << endl;
	return 0;
}