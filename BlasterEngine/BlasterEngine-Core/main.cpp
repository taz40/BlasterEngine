#include "./graphics/window.h"


using namespace std;
using namespace BlasterEngine;
using namespace Graphics;

int main() {
	
	Window window("BlasterEngine", 960, 540);

	glClearColor(.2f, .3f, .8f, 1.0f);
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	while (!window.closed()) {
		window.clear();
#if 1
		glBegin(GL_QUADS);
		glVertex2f(-0.5f,0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glVertex2f(-0.5f, -0.5f);
		glEnd();
#else

		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);

#endif
		window.update();
	}

	return 0;
}