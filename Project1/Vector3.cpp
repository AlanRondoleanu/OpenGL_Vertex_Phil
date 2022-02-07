#include "Vector3.h"

// Constructor 1
Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}
// Constructor 2
Vector3::Vector3(double t_x, double t_y, double t_z)
{ // To allow other values for X, Y and Z to be declared
    x = t_x;
    y = t_y;
    z = t_z;
}
// Constructor 3
Vector3::Vector3(Vector3& t_vector)
{  // To allow other values for X, Y and Z to be declared
    x = t_vector.x;
    y = t_vector.y;
    z = t_vector.z;
}
// A method to return the length of the vector
double Vector3::Length()
{
	return sqrt(x * x + y * y + z * z);
}
// A method to return the length squared of the vector
double Vector3::LengthSquared()
{
	return (x * x + y * y + z * z);
}
// A method to reduce the length of the vector to 1.0
void Vector3::Normalise()
{
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		x /= magnit;
		y /= magnit;
		z /= magnit;
	}
}
// Return variables as a string
std::string Vector3::ToString()
{
	return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}