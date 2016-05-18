#include "./graphics/window.h"

using namespace std;
using namespace BlasterEngine;
using namespace Graphics;

int main() {
	
	Window window("BlasterEngine", 960, 540);

	glClearColor(.2f, .3f, .8f, 1.0f);

	while (!window.closed()) {
		cout << window.getWidth() << ", " << window.getHeight() << endl;
		window.clear();
		glBegin(GL_QUADS);
		glVertex2f(-0.5f,0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(-0.5f, -0.5f);
		glEnd();
		window.update();
	}

	return 0;
}