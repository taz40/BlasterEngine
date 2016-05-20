#include "Vec2.h"

namespace BlasterEngine {
	namespace maths {
		
		vec2::vec2() : vec2(0,0) {
			
		}

		vec2::vec2(float x, float y) : x(x), y(y){
			
		}

		vec2& vec2::add(const vec2& other) {
			x += other.x;
			y += other.y;
			return *this;
		}

		vec2& vec2::subtract(const vec2& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		}

		vec2& vec2::multiply(const vec2& other) {
			x *= other.x;
			y *= other.y;
			return *this;
		}

		vec2& vec2::divide(const vec2& other) {
			x /= other.x;
			y /= other.y;
			return *this;
		}

		std::ostream& operator<< (std::ostream& stream, vec2 vec) {
			stream << "Vec2 (" << vec.x << ", " << vec.y << ")";
			return stream;
		}

		vec2& operator+ (vec2 left, vec2 right) {
			vec2 temp(left.x, left.y);
			return temp.add(right);

		}

		vec2& operator- (vec2 left, vec2 right) {
			vec2 temp(left.x, left.y);
			return temp.subtract(right);
		}

		vec2& operator* (vec2 left, vec2 right) {
			vec2 temp(left.x, left.y);
			return temp.multiply(right);
		}

		vec2& operator/ (vec2 left, vec2 right) {
			vec2 temp(left.x, left.y);
			return temp.divide(right);
		}

		vec2& vec2::operator+= (const vec2& other) {
			return add(other);
		}

		vec2& vec2::operator-= (const vec2& other) {
			return subtract(other);
		}

		vec2& vec2::operator*= (const vec2& other) {
			return multiply(other);
		}

		vec2& vec2::operator/= (const vec2& other) {
			return divide(other);
		}

		bool vec2::operator== (const vec2& other) {
			return (x == other.x && y == other.y);
		}

	}
}