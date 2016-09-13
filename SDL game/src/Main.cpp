#include<SDL2/SDL.h>
#include<iostream>
#define log(x) std::cout<<x<<std::endl;
int main(int argc, char *argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	return 0;
}
bool Running = false;
void Run() {
	while (Running) {
	}
}
