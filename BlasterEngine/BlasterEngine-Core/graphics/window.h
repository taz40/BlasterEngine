#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

namespace BlasterEngine {
	namespace Graphics {
		class Window {
		private:
			int m_width, m_height;
			const char* m_title;
			GLFWwindow* m_window;
		public:
			Window(const char* title, int width, int height);
			~Window();
			bool closed() const;
			void update();
			void clear();
			inline int getWidth() const { return m_width; };
			inline int getHeight() const { return m_height;  };
		private:
			bool init();
			//void windowResize(GLFWwindow *window, int width, int height);
		};
	}
}