#include <SFML/Graphics.hpp>
#include "Vector3.h"
#include <string>
#include <iostream>

int main()
{
	Vector3 vector3{};
	Vector3 vectorAnswer{};
	double doubleAnswer{ 0 };
	Matrix3 matrix{};
	Matrix3 matrixAnswer{};


	/// <summary>
	/// vector tests
	/// </summary>
	/// <returns></returns>
	std::cout << "default constructor\n";
	std::cout << vector3.ToString() << "\n\n";

	std::cout << "default constructor with doubles\n";
	vector3 = Vector3(1, 2, 3);
	std::cout << vector3.ToString() << "\n\n";

	std::cout << "length\n";
	std::cout << vector3.Length() << "\n\n";

	std::cout << "length squared\n";
	std::cout << vector3.LengthSquared() << "\n\n";

	std::cout << "normalised\n";
	vector3.Normalise();
	std::cout << vector3.ToString() << "\n\n";

	vector3 = Vector3(1, 2, 3);

	std::cout << "operator +\n";
	vectorAnswer = vector3 + Vector3(1, 1, 1);
	std::cout << vectorAnswer.ToString() << "\n\n";

	// FIX THIS!!!
	std::cout << "operator - (negate)\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3;
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator -\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 - Vector3(1, 1, 1);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator * vector by vector\n";
	vector3 = Vector3(1, 2, 3);
	doubleAnswer = vector3 * Vector3(2, 2, 2);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator * vector by double\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 * 2.0;
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator * vector by float\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 * 2.0f;
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator * vector by int\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 * 2;;
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "operator * vector by matrix\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 * Matrix3{ 2,2,2,2,2,2,2,2,2 };
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "cross product\n";
	vector3 = Vector3(1, 2, 3);
	vectorAnswer = vector3 ^ Vector3{ 2,3,5 };
	std::cout << vectorAnswer.ToString() << "\n\n";


	/// <summary>
	/// matrix tests
	/// </summary>
	/// <returns></returns>
	std::cout << "default constructor\n";
	std::cout << matrix.toString() << "\n\n";

	std::cout << "default constructor vector3\n";
	matrix = Matrix3{ Vector3{ 1,1,1 } , Vector3{2, 2, 2}, Vector3{3, 3, 3} };
	std::cout << matrix.toString() << "\n\n";

	std::cout << "default constructor doubles\n";
	matrix = Matrix3{ 1.0,1.0,1.0,2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrix.toString() << "\n\n";

	std::cout << "operator * matrix by vector3\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix * Vector3{ 4,3,6 };
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "transpose\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrix.Transpose();
	std::cout << matrix.toString() << "\n\n";

	std::cout << "operator + \n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix + Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "operator -\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix - Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "operator * double\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix * 3.0;
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "operator * matrix by matrix\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix * Matrix3{ 2.0, 2.0, 2.0, 3.0,3.0,3.0,4.0,4.0,4.0 };
	std::cout << matrixAnswer.toString() << "\n\n";

	// FIX THIS!!
	std::cout << "operator -\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix;
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "determinant\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	doubleAnswer = matrix.Determinant(Matrix3{ 2.0, 2.0, 2.0, 3.0,3.0,3.0,4.0,4.0,4.0 });
	std::cout << doubleAnswer << "\n\n";

	std::cout << "row\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	vectorAnswer = matrix.Column(0);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "column\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	vectorAnswer = matrix.Column(1);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "inverse\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.Inverse(Matrix3{ 2.0, 2.0, 2.0, 3.0,3.0,3.0,4.0,4.0,4.0 });;
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "rotation\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.Rotation(25);
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "translate\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.Translate(2,2);
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "scale\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.Scale(2,2);
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "rotationX\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.RotationX(25);
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "rotationY\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.RotationY(25);
	std::cout << matrixAnswer.toString() << "\n\n";

	std::cout << "rotationZ\n";
	matrix = Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	matrixAnswer = matrix.RotationZ(25);
	std::cout << matrixAnswer.toString() << "\n\n";


	return 0;
}