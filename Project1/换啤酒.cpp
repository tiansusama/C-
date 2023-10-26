#include <iostream>
using namespace std;
int main() {
	cout << "请输入你有多少钱：" << endl;
	int money,sum,new_,ping,gai;
	cin >> money;
	new_ = sum = ping = gai = (money / 2);
	while (ping>=2||gai>=4) {
		new_ = ping / 2 + gai / 4;
		sum += new_;
		ping = ping%2+ new_;
		gai = gai%4+ new_;
		}
	cout << "你一共能喝到 " << sum << " 瓶啤酒" << endl;
	return 0;
}