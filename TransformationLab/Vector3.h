#include <SFML/Graphics.hpp>
#pragma once


class Vector3
{
private:

public:
	double X;
	double Y;
	double Z;

	Vector3();
	Vector3(double t_x, double t_y, double t_z);
	Vector3(Vector3& t_v);

	double Length();
	double LengthSquared();
	void Normalise();

	static Vector3 operator +(Vector3 t_v1, Vector3 t_v2);
	static Vector3 operator -(Vector3 t_v1, Vector3 t_v2);
	static Vector3 operator -(Vector3 t_v);

	static double operator *(Vector3 t_v1, Vector3 t_v2);
	static Vector3 operator *(double k, Vector3 V1);
	static Vector3 operator *(float k, Vector3 V1);
	static Vector3 operator *(int k, Vector3 V1);
	static Vector3 operator ^(Vector3 V1, Vector3 V2);

	std::string ToString();

};

