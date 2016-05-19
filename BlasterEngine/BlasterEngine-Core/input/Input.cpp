#include "Input.h"

namespace BlasterEngine {
	namespace Input {

		bool Input::keys[];
		bool Input::buttons[];
		double Input::MouseXPos;
		double Input::MouseYPos;
		
		void Input::onKeyEvent(GLFWwindow* window, int key, int scancode, int action, int mods) {
			if (action == GLFW_RELEASE) {
				keys[key] = false;
			}else {
				keys[key] = true;
			}
		}

		void Input::onCursorEvent(GLFWwindow* window, double xPos, double yPos) {
			MouseXPos = xPos;
			MouseYPos = yPos;
		}

		void Input::onMouseButtonEvent(GLFWwindow* window, int button, int action, int mods) {
			if (action == GLFW_RELEASE) {
				buttons[button] = false;
			} else {
				buttons[button] = true;
			}
		}

		bool Input::getKey(int key) {
			return keys[key];
		}

		bool Input::getButton(int button) {
			return buttons[button];
		}

		double Input::getXPos() {
			return MouseXPos;
		}

		double Input::getYPos() {
			return MouseYPos;
		}

	}
}