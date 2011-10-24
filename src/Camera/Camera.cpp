#include "Base.h"
#include "Camera/Camera.h"

Camera::Camera()
{
	this->Position.x = 0.;
	this->Position.y = 0.;
	this->Position.z = 0.;
	
	this->Orientation.Pitch = 0.;
	this->Orientation.Yaw = 0.;
	this->Orientation.Roll = 0.;
}

Camera::~Camera()
{
}

void Camera::Update(sf::RenderWindow& App)
{
	// Not yet implemented.
}

void Camera::UpdateMatrix()
{
	// DrSchnz: Getting link errors?  Add "opengl32" to the linker options!
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();
	glTranslatef(this->Position.x, this->Position.y, this->Position.z);
	glRotatef( this->Orientation.Pitch, 1.0f, 0.0f, 0.0f );
	glRotatef( this->Orientation.Yaw, 0.0f, 1.0f, 0.0f );
	glRotatef( this->Orientation.Roll, 0.0f, 0.0f, 1.0f );
}
