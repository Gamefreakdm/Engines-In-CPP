#include<math.h>
#include <iostream>
using namespace std;
double SolveVertexx(double a, double b);
double SimAxis(double a, double b, double c);
double SolveSub(double va, double vb, double vc);
double SolveVertexy(double a, double b, double c);
double SolvePlus(double va, double vb, double vc);

int main() {
	char Input = 'y';
	while (Input == 'y') {
		cout << "Enter the value of a" << endl;
		double va = 0;
		cin >> va;
		cout << "Enter the value of b" << endl;
		double vb = 0;
		cin >> vb;
		cout << "Enter the value of c" << endl;
		double vc = 0;
		cin >> vc;
		cout << "Calculating roots" << endl;
		double fpn = SolvePlus(va, vb, vc);
		double fsn = SolveSub(va, vb, vc);
		if (fpn == 0)
			cout << "No solution" << endl;
		else
			cout << " " << fpn << ", " << fsn << endl;
		cout << "Calculating Simitry Axis" << endl;
		cout << SimAxis(va, vb, vc) << endl;
		cout << "Calculating Vertex" << endl;
		cout << SolveVertexx(va, vb) << ", " << SolveVertexy(va, vb, vc) << endl;
		cout << "Would you like to calculate again?" << endl;
		cin >> Input;
	}
	return 0;
}

double SolvePlus(double va, double vb, double vc) {
	if (pow(vb, 2) - 4 * va * vc < 0)
		return 0;
	return (-vb + sqrt(pow(vb, 2) - 4 * va * vc)) / (2 * va);
}
double SolveSub(double va, double vb, double vc) {
	return (-vb - sqrt(pow(vb, 2) - 4 * va * vc)) / (2 * va);
}
double SimAxis(double a, double b, double c) {
	if ((b > 0 && a > 0 && c > 0) || (b < 0 && a < 0 && c > 0))
		return b / (2 * a);
	return -b / (2 * a);
}
double SolveVertexx(double a, double b) {
	if (b < 0 && a > 0)
		return -b / (2 * a);
	return b / (2 * a);
}
double SolveVertexy(double a, double b, double c) {
	return c - (a * pow(b / (2 * a), 2));
}
