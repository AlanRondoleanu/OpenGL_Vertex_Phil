#include "Vector3.h"

int main()
{
	// --- Constructors --- \\

	double constructorTest;

	constructorTest = Vector3().getX();
	// Expected = 0
	Vector3 V2(5,0,0);
	constructorTest = V2.getX();
	// Expected = 5
	Vector3 V3(V2);
	constructorTest = V3.getX();
	// Expected = 5

	// --- Functions --- \\

	double functionTest;

	// Length
	Vector3 lengthVector(5, 2, 10);
	functionTest = lengthVector.Length();
	// Expected = 11.4

	// Length Squared
	lengthVector = Vector3(5, 2, 10);
	functionTest = lengthVector.LengthSquared();
	// Expected = 129

	// Normalize
	lengthVector.Normalise();
	// Expected x = 0.44, y = 0.18, z = 0.88

	// To String
	lengthVector = Vector3(5, 2, 10);
	std::string testString = lengthVector.ToString();
	// Expected (5.0,2.0,10.0)

	// --- Functions --- \\

	// Operator +
	Vector3 vector(3, 7, 2);
	Vector3 rhsVector(9, 2, 1);

	vector = vector + rhsVector;
	// Expected (12, 9, 3)

	// Operator -
	vector = Vector3(5, 7, 2);
	rhsVector = Vector3(2, 8, 1);

	vector = vector - rhsVector;
	// Expected (3, -1, 1)

	// Operator - self
	vector = Vector3(5, 7, 2);

	vector = -vector;
	// Expected (-5, -7, 2)

	// Operator * Scalar
	vector = Vector3(5, 7, 2);
	rhsVector = Vector3(2, 8, 1);

	double scalar = vector * rhsVector;
	// Expected (68)

	// Operator * Product
	vector = Vector3(5, 7, 2);

	vector = vector * 2;
	// Expected (10, 14, 4)

	// Operator ^
	vector = Vector3(5, 7, 2);
	rhsVector = Vector3(2, 8, 1);

	vector = vector ^ rhsVector;
	// Expected (-9, -1, 26)
}