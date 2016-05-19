#include "window.h"

using namespace std;

namespace BlasterEngine {
	namespace Graphics {

		void windowResize(GLFWwindow *window, int width, int height) {
			glViewport(0, 0, width, height);
		}

		Window::Window(const char* title, int width, int height) : m_title(title), m_width(width), m_height(height){
			if (!init()) {
				glfwTerminate();
			}
		}

		Window::~Window() {
			glfwTerminate();
		}

		void Window::update() {
			glfwPollEvents();
			glfwGetFramebufferSize(m_window, &m_width, &m_height);

			glfwSwapBuffers(m_window);
		}

		bool Window::init() {

			if (!glfwInit()) {
				cout << "Failed to init glfw." << endl;
				return false;
			}
			
			m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
			if (!m_window) {
				cout << "Failed to create window." << endl;
				return false;
			}

			glfwMakeContextCurrent(m_window);

			glfwSwapInterval(0);

			glfwSetWindowSizeCallback(m_window, windowResize);

			cout << "Vendor: " << glGetString(GL_VENDOR) << endl << "Renderer: " << glGetString(GL_RENDERER) << endl << "Version: " << glGetString(GL_VERSION) << endl;
			glfwSetWindowUserPointer(m_window, this);

			if (glewInit() != GLEW_OK) {
				cout << "Failed to init glew." << endl;
				return false;
			}

			return true;
		}

		bool Window::closed() const {
			return glfwWindowShouldClose(m_window);
		}

		void Window::clear() {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}


	}
}