#pragma once

#include <iostream>
using namespace std;

class Object
{

	private:
		string m_name;
	public:
		Object(string);

		string GetName();
};