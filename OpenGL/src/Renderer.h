#pragma once

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define DEBUG

#define ASSERT(x)	if(!(x)) __debugbreak();
#ifdef DEBUG
#define GLCall(x)	GLClearError();\
					x;\
					ASSERT(GLLogCall(#x, __FILE__, __LINE__));
#else 
#define GLCall(x) x
#endif // DEBUG

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);

class Renderer
{
public:
	void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader) const;
	void Clear() const;
	void SetClearColor(float v0, float v1, float v2, float v3) const;
};