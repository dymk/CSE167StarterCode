#pragma once

#include <GL/glew.h>
#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <OpenGL/gl.h>
#endif /* __APPLE__ */
#include <OpenGL/glext.h>

#include <GLFW/glfw3.h>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>

class OBJObject
{
private:
std::vector<unsigned int> indices;
std::vector<glm::vec3> vertices;
std::vector<glm::vec3> normals;
glm::mat4 toWorld;

public:
	OBJObject(const char* filepath);

	void parse(const char* filepath);
	void draw();
};
