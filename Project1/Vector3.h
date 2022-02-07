#pragma once

#include <math.h>
#include <iostream>
#include <string>

class Vector3
{
public:
	Vector3();
	Vector3(double t_x, double t_y, double t_z);
	Vector3(Vector3& t_vector);

	// --- Functions --- \\

	double Length();
	double LengthSquared();
	void Normalise();
	std::string ToString();

	// --- Operators --- \\

	// An overloaded operator + to return the sum of 2 vectors
	Vector3 operator+(Vector3& t_rhs)
	{  
		Vector3 temp(x + t_rhs.x, y + t_rhs.y, z + t_rhs.z);
		return temp;
	}
	// An overloaded operator - to return the difference of 2 vectors
	Vector3 operator-(Vector3& t_rhs)
	{ 
		Vector3 temp(x - t_rhs.x, y - t_rhs.y, z - t_rhs.z);
		return temp;
	}
	// An overloaded operator - to return the negation of a single vector
	Vector3 operator-()
	{
		Vector3 V1;
		V1.x = -x;
		V1.y = -y;
		V1.z = -z;
		return V1;
	}
	// An overloaded operator * to return the scalar product of 2 vectors
	double operator*(Vector3& t_rhs)
	{
		return (x * t_rhs.x + y * t_rhs.y + z * t_rhs.z);
	}
	// An overloaded operator * to return the product of a scalar by a vector
	Vector3 operator*(double k)
	{
		Vector3 temp(x * k, y * k, z * k);
		return temp;
	}
	// An overloaded operator ^ to return the vector product of 2 vectors
	Vector3 operator^(Vector3& t_rhs)
	{
		Vector3 temp(y * t_rhs.z - z * t_rhs.y, z * t_rhs.x - x * t_rhs.z, x * t_rhs.y - y * t_rhs.x);
		return temp;
	}

	// Getters
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }
	// Setters
	void setX(double t_x) { x = t_x; }
	void setY(double t_y) { x = t_y; }
	void setZ(double t_z) { x = t_z; }


private:
	double x;
	double y;
	double z;
};

