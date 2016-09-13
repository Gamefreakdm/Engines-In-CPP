#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	int Hs = 0;
	int Min = 0;
	int Sec = 0;
	cout << "How many hours until shutdown?" << endl;
	cin >> Hs;
	cout << "How many minutes?" << endl;
	cin >> Min;
	cout << "How many seconds?" << endl;
	cin >> Sec;
	int time = 3600;
	int ts = Sec;
	int tm = Min;
	int tss = 0;
	int th = Hs;
	while (1 == 1) {
		if (tm == 0) {
			th--;
			cout << th << ", " << tm << ", " << ts << endl;
			tm = 60;
		}
		if (ts == 0) {
			tm--;
			cout << th << ", " << tm << ", " << ts << endl;
			ts = 60;
		}
		if (tss == 0) {
			ts--;
			cout << th << ", " << tm << ", " << ts << endl;
			tss = 60;
		}
		if (time == 0) {
			tss--;
			cout << th << ", " << tm << ", " << ts << endl;
			time = 3600;
		}
		time--;
		if (th == 0 && tm == 0 && ts == 0 && tss == 0)
			system("shutdown -s");
	}
}

