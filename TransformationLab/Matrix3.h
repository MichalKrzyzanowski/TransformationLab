#include <SFML/Graphics.hpp>
#pragma once

class Vector3;

class Matrix3
{
public:
	double A11;
	double A12;
	double A13;

	double A21;
	double A22;
	double A23;

	double A31;
	double A32;
	double A33;

	Matrix3();
	Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3);
	Matrix3(double _A11, double _A12, double _A13,
			double _A21, double _A22, double _A23,
			double _A31, double _A32, double _A33);

	Vector3 operator *(Vector3 V1) const;

	Matrix3 Transpose() const;

	Matrix3 operator +(Matrix3 M2) const;
	Matrix3 operator -(Matrix3 M2) const;
	Matrix3 operator *(double x) const;
	Matrix3 operator *(Matrix3 M2) const;


	double Determinant(Matrix3 M1) const;
	Vector3 Row(int i) const;
	Vector3 Column(int i) const;
	Matrix3 Inverse(Matrix3 M1) const;
	Matrix3 Rotation(int _angle) const;
	Matrix3 Translate(int dx, int dy) const;
	Matrix3 Scale(int dx, int dy) const;

	Matrix3 operator -() const;

	Matrix3 RotationX(int _angle) const;
	Matrix3 RotationY(int _angle) const;
	Matrix3 RotationZ(int _angle) const;

	Matrix3 Scale3D(int dx) const;

	std::string toString();
private:
	

	const double PI{ 3.14159265359 };
};

