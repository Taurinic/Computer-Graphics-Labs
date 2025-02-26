#include <common/maths.hpp>


glm::mat4 Maths::translate(const glm::vec3 &v)
{
	glm::mat4 translate(1.0f);
	translate[3][0] = v.x, translate[3][1] = v.y, translate[3][2] = v.z;
	return translate;
}

glm::mat4 Maths::scale(const glm::vec3& v)
{
	glm::mat4 scale(1.0f);
	scale[0][0] = v.x; scale[1][1] = v.y; scale[2][2] = v.z;
	return scale;
}