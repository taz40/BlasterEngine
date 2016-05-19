#pragma once
#include <GLFW/glfw3.h>

namespace BlasterEngine {
	namespace Input {
		class Input {
		public:
			static bool keys[500];
			static bool buttons[10];
			static double MouseXPos;
			static double MouseYPos;

			static void onKeyEvent(GLFWwindow* window, int scancode, int key, int action, int mods);
			static void onCursorEvent(GLFWwindow* window, double xPos, double yPos);
			static void onMouseButtonEvent(GLFWwindow* window, int button, int action, int mods);

			static bool getKey(int key);
			static bool getButton(int button);
			static double getXPos();
			static double getYPos();
		};
	}
}