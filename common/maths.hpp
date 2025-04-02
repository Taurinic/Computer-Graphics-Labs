#pragma once

#include<iostream>
#include<cmath>
#include<glm/glm.hpp>
#include<glm/gtx/io.hpp>

//Quaternion class 
class Quaternion
{
public:
	float w, x, y, z;

	//Constructors
	Quaternion();
	Quaternion(const float w, const float x, const float y, const float z);
};



//Math class 
class Maths {

public:

	//transformation matrices 
	static glm::mat4 translate(const glm::vec3 &v);

	//Calculate scaling matrix 
	static glm::mat4 scale(const glm::vec3& v);

	//Calculate axis angle rotation matrix 
	static float radians(float angle);
	static glm::mat4 rotate(const float& angle, glm::vec3 v);
};