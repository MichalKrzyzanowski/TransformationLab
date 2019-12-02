#include <SFML/Graphics.hpp>
#pragma once


class Vector2f
{
private:

public:
	double X;
	double Y;

	Vector2f();
	Vector2f(double t_x, double t_y);
	Vector2f(Vector2f& t_v);

	double Length();
	double LengthSquared();
	void Normalise();

	Vector2f operator +(Vector2f t_v1) const;
	Vector2f operator -(Vector2f t_v1) const;
	Vector2f operator -() const;

	double operator *(Vector2f t_v1) const;
	Vector2f operator *(double k) const;
	Vector2f operator *(float k) const;
	Vector2f operator *(int k) const;

	std::string ToString();

};

