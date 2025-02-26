#pragma once

#include<iostream>
#include<cmath>
#include<glm/glm.hpp>
#include<glm/gtx/io.hpp>


//Math class 
class Maths {

public:

	//transformation matrices 
	static glm::mat4 translate(const glm::vec3& v);

};