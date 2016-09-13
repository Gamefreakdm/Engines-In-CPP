#include <iostream>
#include <Windows.h>
#define Exe(x) ShellExecute(NULL, "open", x, NULL, NULL, SW_SHOWNORMAL);
#define In(x) std::cin>>x;
#define Out(x) std::cout<<x<<std::endl;
const char OP(const char& in);
int main() {
	char in1 = 'a';
	while (in1 != 'q') {
		Out("Shutdown Timer: t")
			Out("Bitwise Calculator: b")
			Out("Quadratic Formula Calculator: q")
			Out("ACII Code Converter: a")
			Out("Factor Whole Numbers: f")
			Out("All In One Physics Calculator: p")
			Out("Random Number Generator: r")
			In(in1)
			char in2 = in1;
		in1 = OP(in1);
		if (in1 == 'z')
			Out(in2 << " is not a valid answer." << "/n" << "Please enter one of these options.")

	}
	return 0;
}

const char OP(const char& in) {
	switch (in) {
	case 't':
		Exe("Programs\\Shutdown_Timer.exe")
			break;
	case 'T':
		Exe("Programs\\Shutdown_Timer.exe")
			break;
	case 'b':
		Exe("Programs\\Bitwise_Calculator.exe")
			break;
	case 'B':
		Exe("Programs\\Bitwise_Calculator.exe")
			break;
	case 'q':
		Exe("Programs\\Quadratic_Formula_Calculator.exe")
			break;
	case 'Q':
		Exe("Programs\\Quadratic_Formula_Calculator.exe")
			break;
	case 'a':
		Exe("Programs\\ACII.exe")
			break;
	case 'A':
		Exe("Programs\\ACII.exe")
			break;
	case 'f':
		Exe("Programs\\Factor.exe")
			break;
	case 'F':
		Exe("Programs\\Factor.exe")
			break;
	case 'p':
		Exe("Programs\\AIOP.exe")
			break;
	case 'P':
		Exe("Programs\\AIOP.exe")
			break;
	case 'r':
		Exe("Programs\\RA.exe")
			break;
	case 'R':
		Exe("Programs\\RA.exe")
			break;
	default:
		return 'z';
		break;
	}
	return 'q';
}
