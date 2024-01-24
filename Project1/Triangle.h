#pragma once
class Triangle
{
private:
	unsigned int m_vbo;
public :
	Triangle(float * vertices);
	~Triangle();
	void Draw();
};

