#pragma once
class ShaderService
{
private:
	const char * m_vertexShaderSource;
	const char * m_fragmentShaderSource;
public:
	ShaderService();
	~ShaderService();
	void setVertexShaderSource(const char * vertexShaderSource);
	void setFragmentShaderSource(const char * fragmentShaderSource);
	const char * getVertexShaderSource();
	const char * getFragmentShaderSource();
};

