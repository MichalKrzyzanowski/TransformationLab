#include <SFML/Graphics.hpp>
#include "Vector3.h"
#include <string>
#include <iostream>

int main()
{
	Vector3 vector3{};
	Vector3 vectorAnswer{};
	double doubleAnswer{ 0 };
	Matrix3 matrixDefault{};
	Matrix3 matrixAnswer{};
	Matrix3 stuff{ 1,1,1,2,2,2,3,3,3 };
	float angle{ 90 };


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
	vectorAnswer = -vector3;
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
	std::cout << matrixDefault.toString() << "\n\n";

	std::cout << "default constructor vector3\n";
	Matrix3 matrixA = Matrix3{ Vector3{ 1,1,1 } , Vector3{2, 2, 2}, Vector3{3, 3, 3} };
	std::cout << matrixA.toString() << "\n\n";

	std::cout << "default constructor doubles\n";
	Matrix3 matrixB = Matrix3{ 1.0,1.0,1.0,2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrixB.toString() << "\n\n";

	std::cout << "operator * matrix by vector3\n";
	Matrix3 matrixC = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	vectorAnswer = matrixC * Vector3{ 4,3,6 };
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "transpose\n";
	Matrix3 matrixD = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	matrixD.Transpose();
	std::cout << matrixD.toString() << "\n\n";

	std::cout << "operator + \n";
	Matrix3 matrixE = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnsE = matrixE + Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrixAnsE.toString() << "\n\n";

	//(matrix + matrixAnswer).toString();

	std::cout << "operator -\n";
	Matrix3 matrixF = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerF = matrixF - Matrix3{ 1.0, 1.0, 1.0, 2.0,2.0,2.0,3.0,3.0,3.0 };
	std::cout << matrixAnswerF.toString() << "\n\n";

	std::cout << "operator * double\n";
	Matrix3 matrixG= Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerG = matrixG * 3.0;
	std::cout << matrixAnswerG.toString() << "\n\n";

	std::cout << "operator * matrix by matrix\n";
	Matrix3 matrixH = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerH = matrixH * Matrix3{ 2.0, 2.0, 2.0, 3.0,3.0,3.0,4.0,4.0,4.0 };
	std::cout << matrixAnswerH.toString() << "\n\n";

	// FIX THIS!!


	std::cout << "operator -\n";
	Matrix3 matrixI = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerI = -matrixI;
	std::cout << matrixAnswerI.toString() << "\n\n";

	std::cout << "determinant\n";
	Matrix3 matrixJ = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	doubleAnswer = matrixJ.Determinant();
	std::cout << doubleAnswer << "\n\n";

	std::cout << "row\n";
	Matrix3 matrixK = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	vectorAnswer = matrixK.Column(0);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "column\n";
	Matrix3 matrixL = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	vectorAnswer = matrixL.Column(1);
	std::cout << vectorAnswer.ToString() << "\n\n";

	std::cout << "inverse\n";
	Matrix3 matrixM = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerM = matrixM.Inverse(matrixM);
	std::cout << matrixAnswerM.toString() << "\n\n";

	std::cout << "rotation\n";
	Matrix3 matrixN = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerN = matrixN.Rotation(25);
	std::cout << matrixAnswerN.toString() << "\n\n";

	std::cout << "translate\n";
	Matrix3 matrixO = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerO = matrixO.Translate(2,2);
	std::cout << matrixAnswerO.toString() << "\n\n";

	std::cout << "scale\n";
	Matrix3 matrixP = Matrix3{ 4.0, 4.0, 4.0, 4.0,2.0,5.0,2.0,5.0,-3.0 };
	Matrix3 matrixAnswerP = matrixP.Scale(2,2);
	std::cout << matrixAnswerP.toString() << "\n\n";

	std::cout << "rotationX\n";
	Matrix3 matrixQ = Matrix3{ 5,3,9,7,5,2,6,4,9 };
	Matrix3 matrixAnswerQ = matrixQ.RotationX(angle);
	std::cout << matrixAnswerQ.toString() << "\n\n";

	std::cout << "rotationY\n";
	Matrix3 matrixR = Matrix3{ 5,3,9,7,5,2,6,4,9 };
	Matrix3 matrixAnswerR = matrixR.RotationY(angle);
	std::cout << matrixAnswerR.toString() << "\n\n";

	std::cout << "rotationZ\n";
	Matrix3 matrixS = Matrix3{ 5,3,9,7,5,2,6,4,9 };
	Matrix3 matrixAnswerS = matrixS.RotationZ(angle);
	std::cout << matrixAnswerS.toString() << "\n\n";


	return 0;
}