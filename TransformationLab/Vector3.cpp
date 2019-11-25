#include "Vector3.h"

Vector3::Vector3()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Vector3::Vector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

Vector3::Vector3(Vector3& t_v)
{
	x = t_v.x;
	y = t_v.y;
	z = t_v.z;
}

double Vector3::Length()
{
	return sqrt(x * x + y * y + z * z);
}

double Vector3::LengthSquared()
{
	return x * x + y * y + z * z;
}

void Vector3::Normalise()
{
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}

Vector3 Vector3::operator+(Vector3 t_v1, Vector3 t_v2)
{
	return { t_v1.x + t_v2.x, t_v1.y + t_v2.y, t_v1.z + t_v2.z };
}

Vector3 Vector3::operator-(Vector3 t_v1, Vector3 t_v2)
{
	return { t_v1.x - t_v2.x, t_v1.y - t_v2.y, t_v1.z - t_v2.z };
}

Vector3 Vector3::operator-(Vector3 t_v)
{
	return 
}
