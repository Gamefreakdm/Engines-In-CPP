#include "Application.h"
#include <SDL2/SDL.h>

Application* Application::applicationInstance = nullptr;

Application* Application::Instance() {
	if (Application::applicationInstance == nullptr) {
		Application::applicationInstance = new Application();
	}
	return Application::applicationInstance;
}

Application::Application() {
	try {
		if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
			throw application_exception(SDL_GetError());
		}
		else {
		}
	}
	catch (application_exception& exception) {
	}
}

bool Application::Run() {
	return this->active;
}

void Application::Stop() {
	this->active = false;
}

Application::~Application() {
}
