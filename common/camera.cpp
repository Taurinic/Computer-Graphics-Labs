#include <common/camera.hpp>


Camera::Camera(const glm::vec3 Eye, const glm::vec3 Target)
{
	eye = Eye;
	target = Target;
}

void Camera::calculateMatrices()
{
	//Calculate the view matrix 
	view = glm::lookAt(eye, eye + front, worldUp);

	//Calculate the projection matrix
	projection = glm::perspective(fov, aspect, near, far);


}

void Camera::calculateCameraVectors() {
    // Calculate front vector from yaw and pitch angles
    front.x = cos(glm::radians(yaw)) * cos(glm::radians(pitch));
    front.y = sin(glm::radians(pitch));
    front.z = sin(glm::radians(yaw)) * cos(glm::radians(pitch));
    front = glm::normalize(front);

    // Calculate right vector
    right = glm::normalize(glm::cross(front, glm::vec3(0.0f, 1.0f, 0.0f)));

    // Calculate up vector
    up = glm::normalize(glm::cross(right, front));

    // Constrain pitch to avoid gimbal lock
    if (pitch > 89.0f)
        pitch = 89.0f;
    if (pitch < -89.0f)
        pitch = -89.0f;
}