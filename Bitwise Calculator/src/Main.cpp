#include<iostream>
#include<string>
using namespace std;
#define Tell(x) cout<<x<<endl;
#define In(x) cin>>x;
const void cal(const int& n1, const int& n2, const string& S);
const int rightshift(const int& a, const int& b);
const int leftshift(const int& a, const int& b);
const int wave(const int& a);
const int AND(const int& a, const int& b);
const int line(const int& a, const int& b);
const int dline(const int& a, const int& b);
const int dAND(const int& a, const int& b);
const int upc(const int& a, const int& b);

int main() {
	bool Running = true;
	double n1 = 0;
	string s = "";
	double n2 = 0;
	while (Running) {
		n1 = 0;
		n2 = 0;
		s = "";
		Tell("Enter the operator you are using.")
			In(s)
			if (s != "~" && s != "^" && s != "&" && s != "|" && s != "&&" && s != "||" && s != "<<" && s != ">>") {
				Tell(s << " is not a valid operator, please enter a bitwise operator")
					continue;
			}
		if (s != "~") {
			Tell("Now enter the first number.")
				In(n1)
				Tell("Now enter the second number.")
				In(n2)
				Tell("Calculating...")
		}
		else {
			Tell("Enter your number.")
				In(n1)
		}
		cal(n1, n2, s);
		Tell("Would you like to preform another operation?")
			In(s)
			if (s == "no")
				Running = false;
	}
	return 0;
}

const void cal(const int& n1, const int& n2, const string& S) {
	if (S == "&") {
		Tell(AND(n1, n2));
	}
	else if (S == "<<") {
		Tell(leftshift(n1, n2));
	}
	else if (S == ">>") {
		Tell(rightshift(n1, n2));
	}
	else if (S == "~") {
		Tell(wave(n1));
	}
	else if (S == "|") {
		Tell(line(n1, n2));
	}
	else if (S == "^") {
		Tell(upc(n1, n2));
	}
	else if (S == "||") {
		Tell(dline(n1, n2));
	}
	else if (S == "&&") {
		Tell(dAND(n1, n2));
	}
}

const int rightshift(const int& a, const int& b) {
	return a >> b;
}
const int leftshift(const int& a, const int& b) {
	return a << b;
}
const int wave(const int& a) {
	return ~a;
}
const int line(const int& a, const int& b) {
	return a | b;
}
const int upc(const int& a, const int& b) {
	return a ^ b;
}
const int AND(const int& a, const int& b) {
	return a & b;
}
const int dline(const int& a, const int& b) {
	return a || b;
}
const int dAND(const int& a, const int& b) {
	return a && b;
}
