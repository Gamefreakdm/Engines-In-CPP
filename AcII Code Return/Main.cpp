#include<iostream>
#include<string>
using namespace std;
#define OUT(x) cout<<x<<endl
#define IN(x) cin>>x;
int main() {
	string input = "";
	while (input != "no") {
		if (input != "yes" && input != "Yes" && input != "") {
			OUT(input);
			OUT("is not a valid answer.");
			OUT("Would you like to find another? (yes/no)");
			IN(input);
			continue;
		}
		std::string s1 = "";
		input = "";
		OUT("Enter letter, number or symbol");
		IN(s1);
		int x = 0;
		for (unsigned int i = 0; i < s1.length(); i++)
			x += s1.at(i);
		OUT(x);
		OUT("Would you like to find another? (yes/no)");
		IN(input)
	}
	return 0;
}
