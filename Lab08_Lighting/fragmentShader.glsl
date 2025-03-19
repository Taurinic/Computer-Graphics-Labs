#version 330 core

// Inputs
in vec2 UV;
in vec3 fragmentPosition;
in vec3 Normal;

// Output
out vec3 fragmentColour;

// Uniforms
uniform sampler2D diffuseMap;
uniform float ka;
uniform float kd;
uniform vec3 lightColour;
uniform vec3 lightPosition;

uniform float constant;
uniform float quadratic;
uniform float linear;

uniform Light lightSources[maxLights];

void main()
{
     //Attentuation
    float distance = length(lightPosition - fragmentPosition);
    float attentuation = 1.0 / (constant + linear * distance + quadratic * distance * distance);

    // Object colour
    vec3 objectColour = vec3(texture(diffuseMap, UV));
    
    // Ambient reflection
    vec3 ambient = ka * objectColour;
    
    // Diffuse reflection
    vec3 light     = normalize(lightPosition - fragmentPosition);
    vec3 normal    = normalize(Normal);
    float cosTheta = max(dot(normal, light), 0);
    vec3 diffuse   = kd * lightColour * objectColour * cosTheta;

    // Calculate fragment colour
    fragmentColour = ambient + diffuse;


}