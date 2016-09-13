#include<iostream>
#include<cmath>
#define Out(x) std::cout<<x<<std::endl;
#define In(x) std::cin>>x;
int main() {
	char in1 = 'y';
	while (in1 != 'q') {
		Out("Enter number to factor")
			int Num1;
		In(Num1)
			if (Num1 < 0)
				for (int i = -1; i > Num1; --i) {
					if (Num1 % i == 0) {
						Out(i)
					}
				}
			else
				for (int i = 1; i <= Num1; ++i) {
					if (Num1 % i == 0) {
						Out(i)
					}
				}
		Out("Would you like to factor again? (y,n)")
			In(in1)
			if (in1 == 'n' || in1 == 'N')
				in1 = 'q';
		continue;
	}
	return 0;
}
