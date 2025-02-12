#version 330 core

layout(location = 0) in vec3 position;
layout(location = 1) in vec3 colour;

out vec3 fragmentColour;

void main() 
{

	//Shift the vertex position by 0.5 to the right 
	vec3 shiftedPosition = position + vec3(1.1, 0.0, 0.0);

	//Output vertex position 
	gl_Position = vec4(shiftedPosition, 1.0);

	//Output Vertex Colour
	fragmentColour = colour;


}