
#include "../headder/load.h"

TEMP
SimMath::Vector2d<type>::Vector2d(type x, type y) {
	this->x = x;
	this->y = y;
}

TEMP
SimMath::Vector2d<type> SimMath::Vector2d<type>::operator+(Vector2d<type>* other) {
	Vector2d<type> ans;
	ans.x = (this->x + other->x);
	ans.y = (this->y + other->y);
	return ans;
}

TEMP
SimMath::Vector2d<type> SimMath::Vector2d<type>::operator-(Vector2d<type>* other) {
	Vector2d<type> ans;
	ans.x = (this->x - other->x);
	ans.y = (this->y - other->y);
	return ans;
}

TEMP
SimMath::Vector3d<type>::Vector3d(type x, type y, type z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

