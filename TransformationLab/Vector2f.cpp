#include "Vector2f.h"

Vector2f::Vector2f()
{
	X = 0.0;
	Y = 0.0;
}

Vector2f::Vector2f(double t_x, double t_y)
{
	X = t_x;
	Y = t_y;
}

Vector2f::Vector2f(Vector2f& t_v)
{
	X = t_v.X;
	Y = t_v.Y;
}

double Vector2f::Length()
{
	return sqrt(X * X + Y * Y);
}

double Vector2f::LengthSquared()
{
	return X * X + Y * Y;
}

void Vector2f::Normalise()
{
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		X /= magnit;
		Y /= magnit;
	}
}

Vector2f Vector2f::operator+(Vector2f t_v1) const
{
	return { X + t_v1.X, Y + t_v1.Y };
}

Vector2f Vector2f::operator-(Vector2f t_v1) const
{
	return { X - t_v1.X, Y - t_v1.Y };
}

Vector2f Vector2f::operator-() const
{
	Vector2f v1;
	v1.X = -X;
	v1.Y = -Y;

	return v1;
}

double Vector2f::operator*(Vector2f t_v1) const
{
	return (X * t_v1.X + Y * t_v1.Y);
}

Vector2f Vector2f::operator*(double k) const
{
	return { X * (float)k, Y * (float)k };
}

Vector2f Vector2f::operator*(float k) const
{
	return { X * k, Y * k };
}

Vector2f Vector2f::operator*(int k) const
{
	return { X * k, Y * k };
}

std::string Vector2f::ToString()
{
	return { "(" + std::to_string(X) + "," + std::to_string(Y) +")" };
}
