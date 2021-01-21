#pragma once

class VertexBuffer
{
public:
	using uint = unsigned int;

	VertexBuffer(const void* data, uint size);
	~VertexBuffer();

	void Bind() const;
	void Unbind() const;
	
private:
	uint m_RendererID;
};