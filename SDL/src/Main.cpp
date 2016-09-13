#include "Application.h"

int main(int argc, char *argv[]) {
	while (Application::Instance()->Run())
		;
	return 0;
}
