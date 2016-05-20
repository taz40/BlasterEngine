#include "./graphics/window.h"

#include "./maths/Vec2.h"


using namespace std;
using namespace BlasterEngine;
using namespace Graphics;
using namespace maths;

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

		if (Input::Input::getKey(GLFW_KEY_ESCAPE)) {
			window.close();
		}

		window.update();
	}

	return 0;
}