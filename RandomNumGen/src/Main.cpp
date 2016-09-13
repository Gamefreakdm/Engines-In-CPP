#include <iostream>
#include <stdlib.h>
#include <time.h>
#include<string>
#define In(x) std::cin>>x;
#define Out(x) std::cout<<x<<std::endl;
const int getAnswer(int num);

int main() {
	srand(time(NULL));
	std::string input = "";
	int num = 0;
	while (input != "q") {
		if (num == 0) {
			Out("What is the largest number?")
				In(num)
		}
		Out(getAnswer(num))
			Out("Would you like to generate again?")
			In(input)
			if (input == "yes") {
				Out("Would you like a new number?")
					In(input)
					if (input == "yes") {
						num = 0;
						input = "";
						continue;
					}
			}
			else if (input == "no")
				input = "q";
	}
	return 0;
}

const int getAnswer(int num) {
	return rand() % num;
}
