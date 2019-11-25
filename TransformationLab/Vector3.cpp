#include "Vector3.h"

Vector3::Vector3()
{
	X = 0.0;
	Y = 0.0;
	Z = 0.0;
}

Vector3::Vector3(double t_x, double t_y, double t_z)
{
	X = t_x;
	Y = t_y;
	Z = t_z;
}

Vector3::Vector3(Vector3& t_v)
{
	X = t_v.X;
	Y = t_v.Y;
	Z = t_v.Z;
}

double Vector3::Length()
{
	return sqrt(X * X + Y * Y + Z * Z);
}

double Vector3::LengthSquared()
{
	return X * X + Y * Y + Z * Z;
}

void Vector3::Normalise()
{
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		X /= magnit;
		Y /= magnit;
		Z /= magnit;
	}
}

Vector3 Vector3::operator+(Vector3 t_v1, Vector3 t_v2)
{
	return { t_v1.X + t_v2.X, t_v1.Y + t_v2.Y, t_v1.Z + t_v2.Z };
}

Vector3 Vector3::operator-(Vector3 t_v1, Vector3 t_v2)
{
	return { t_v1.X - t_v2.X, t_v1.Y - t_v2.Y, t_v1.Z - t_v2.Z };
}

Vector3 Vector3::operator-(Vector3 t_v)
{
	Vector3 v1;
	v1.X = -t_v.X;
	v1.Y = -t_v.Y;
	v1.Z = -t_v.Z;

	return v1;
}

double Vector3::operator*(Vector3 t_v1, Vector3 t_v2)
{
	return (t_v1.X * t_v2.X + t_v1.Y * t_v2.Y + t_v1.Z * t_v2.Z);
}

Vector3 Vector3::operator*(double k, Vector3 t_v1)
{
	return { t_v1.X * (float)k, t_v1.Y * (float)k, t_v1.Z * (float)k };
}

Vector3 Vector3::operator*(float k, Vector3 t_v1)
{
	return { t_v1.X * k, t_v1.Y * k, t_v1.Z * k };
}

Vector3 Vector3::operator*(int k, Vector3 t_v1)
{
	return { t_v1.X * k, t_v1.Y * k, t_v1.Z * k };
}

Vector3 Vector3::operator^(Vector3 t_v1, Vector3 t_v2)
{
	return { t_v1.Y * t_v2.Z - t_v1.Z * t_v2.Y, t_v1.Z * t_v2.X - t_v1.X * t_v2.Z, t_v1.X * t_v2.Y - t_v1.Y * t_v2.X };
}

std::string Vector3::ToString()
{
	return { "(" + std::to_string(X) + "," + std::to_string(Y) + "," + std::to_string(Z) + ")" };
}
