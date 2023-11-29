#include "Object.h"

Object::Object(string name)
{
	m_name = name;
}

string Object::GetName()
{
	return m_name;
}
