#include <SFML/Graphics.hpp>
#include "Vector3.h"
#include <string>
#include <iostream>

int main()
{
	Vector3 vector3{};

	std::cout << "constructor\n";
	std::cout << vector3.ToString() << "\n\n";

	return 0;
}