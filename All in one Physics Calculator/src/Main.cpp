#include<iostream>
#include<cmath>
using namespace std;
void getProgram(char i);
double CalcKE(double m, double v);
double CalcPowt(double w, double t);
double CalcPowVC(double v, double i);
double CalcMom(double m, double v);
double CalcGPE(double m, double h);
double CalcAvS(double d, double t);
double CalcWork(double f, double d);
double CalcAcel(double v, double t);
double CalcForce(double m, double a);
double CalcAvV(double AvS, double AvS2);
double Vib(double f, double l);
double CalcFc(double m, double v, double r);
int main() {
	char input = 'y';
	while (input != 'q') {
		if (input == 'z') {
			cout << "Do you want to continue? y/n" << endl;
			cin >> input;
			if (input == 'n')
				input = 'q';
			else
				input = 'y';
		}
		if (input == 'y') {
			cout << "Choose operation" << endl;
			cout << "Average Speed: s\nAcceleration: a\nForce: f\nKenetic Energy: k\nMomentum: m\nPower: p\nAverage Velocity: v\nGPE: g\nCentripetal Force: c\nWork: w\nVibrations r\nQuit: q" << endl;
			cin >> input;
			if (input != 'q') {
				getProgram(input);
				input = 'z';
			}
		}
	}
	return 0;
}

void getProgram(char i) {
	switch (i) {
	case 's':
	{
		cout << "Enter distance. (meters)" << endl;
		double d = 0;
		cin >> d;
		cout << "Enter amount of time. (seconds)" << endl;
		double t = 0;
		cin >> t;
		cout << CalcAvS(d, t) << endl;
	}
	break;
	case 'a':
	{
		cout << "Enter velocity. (m/s)" << endl;
		double v = 0;
		cin >> v;
		cout << "Enter amount of time. (seconds)" << endl;
		double t = 0;
		cin >> t;
		cout << CalcAcel(v, t) << endl;
	}
	break;
	case 'f':
	{
		cout << "Enter mass. (kg)" << endl;
		double m = 0;
		cin >> m;
		cout << "Enter acceleration. (m/s^2)" << endl;
		double a = 0;
		cin >> a;
		cout << CalcForce(m, a) << " N" << endl;
	}
	break;
	case 'k':
	{
		cout << "Enter Velocity (m/s)" << endl;
		double v = 0;
		cin >> v;
		cout << "Enter mass (kg)" << endl;
		double m = 0;
		cin >> m;
		cout << CalcKE(m, v) << endl;
		break;
	}
	case 'm':
	{
		cout << "Enter velocity (m/s)" << endl;
		double v = 0;
		cin >> v;
		cout << "Enter mass (kg)" << endl;
		double m = 0;
		cin >> m;
		cout << CalcMom(m, v) << endl;
		break;
	}
	case 'p':
	{
		cout << "Over time 1 or curret * volts 2" << endl;
		char input = 'a';
		cin >> input;
		switch (input) {
		case '1':
		{
			cout << "Enter work." << endl;
			double w = 0;
			cin >> w;
			cout << "Enter amount of time. (seconds)" << endl;
			double t = 0;
			cin >> t;
			cout << CalcPowt(w, t) << endl;
		}
		break;
		case '2':
		{
			cout << "Enter volts" << endl;
			double v = 0;
			cin >> v;
			cout << "Enter current" << endl;
			double i = 0;
			cin >> i;
			cout << CalcPowVC(v, i) << endl;
		}
		break;
		}
		break;
	}
	case 'v':
	{
		cout << "Enter starting speed. (m/s)" << endl;
		double ssp = 0;
		cin >> ssp;
		cout << "Enter ending speed. (m/s)" << endl;
		double esp = 0;
		cin >> esp;
		cout << CalcAvV(ssp, esp) << endl;
		break;
	}
	case 'g':
	{
		cout << "Enter mass. (kg)" << endl;
		double m = 0;
		cin >> m;
		cout << "Enter height. (meters)" << endl;
		double h = 0;
		cin >> h;
		cout << CalcGPE(m, h) << endl;
	}
	break;
	case 'r':
	{
		cout << "Enter frequency" << endl;
		double f = 0;
		cin >> f;
		cout << "Enter wave length. (meters)" << endl;
		double m = 0;
		cin >> m;
		cout << Vib(f, m) << endl;
	}
	break;
	}
}

double CalcAvS(double d, double t) {
	return d / t;
}

double CalcAcel(double v, double t) {
	return v / t;
}

double CalcAvV(double AvS, double AvS2) {
	return (AvS + AvS2) / 2;
}

double CalcForce(double m, double a) {
	return a * m;
}

double CalcWork(double f, double d) {
	return f * d;
}

double CalcPowt(double w, double t) {
	return w / t;
}
double CalcPowVC(double v, double i) {
	return v * i;
}

double CalcMom(double m, double v) {
	return m * v;
}

double CalcKE(double m, double v) {
	return 0.5 * (m * pow(v, 2));
}

double CalcFc(double m, double v, double r) {
	return (m * pow(v, 2)) / r;
}

double CalcGPE(double m, double h) {
	return m * (9.8 * h);
}
double Vib(double f, double l) {
	return f * l;
}
