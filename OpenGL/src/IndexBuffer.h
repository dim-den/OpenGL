#pragma once

class IndexBuffer
{
public:
	using uint = unsigned int;

	IndexBuffer(const uint* data, uint count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	inline uint GetCount() const { return m_Count; }
private:
	uint m_RendererID;
	uint m_Count; 
};