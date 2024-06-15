#include "UI.cpp"
#include "Tests.h"
#include "ArrayRectangularMatrix.h"
#include "SquareMatrix.h"
#include "Output.h"
#include "Sequence.h"


int main()
{
	//TEST();
	TestarSquareMatrix();
	std::cout << std::endl;
	TestarRectangularMatrix();
	std::cout << std::endl;


	MatrixMenu();
	
}