#pragma once

#include <iostream>

using namespace std;

template <typename T>
class Vector2D {
	T x_;  // first coordinate
	T y_;  // second coordinate
public:
	Vector2D<T>() : x_(), y_() {};
	Vector2D<T>(const Vector2D<T> &v) : x_(v.getX()), y_(v.getY()) {};
	Vector2D<T>(T x, T y) : x_(x), y_(y) {};
	virtual ~Vector2D() {};
	T getX() const { return x_; };
	T getY() const { return y_; };
	void setX(T x);
	void setY(T y);
	void set(const Vector2D<T> &v);
	void set(T x, T y);
	T magnitude() const;
	Vector2D<T> rotate(double degrees);
	T angle(const Vector2D<T> &v) const;
	Vector2D<T> normalize();

	Vector2D<T> operator-(const Vector2D<T> &v) const;
	Vector2D<T> operator+(const Vector2D<T> &v) const;
	Vector2D<T> operator*(T d) const;
	double operator *(const Vector2D<T> &d) const;
	Vector2D<T> operator/(T d) const;
	friend ostream& operator<<(ostream& os, const Vector2D<T> &v);
};
