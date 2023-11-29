#pragma once

#include <iostream>
#include "Damageable.h"
using namespace std;

class Element : public Damageable
{

	public:
		enum Capacity {
			Inactive,
			Attack,
			Defense,
			Support,
			Special
		};

	private:
		Capacity m_type = Capacity::Inactive;
		string m_actionName = "None";
		int m_attack = 0;
		int m_defense = 0;

	public:
		Element(Capacity capacity, string nameAction, string name, int health);
		Element(string name, int health);

		string GetNameCapacity();
		string GetNameAction();

		int GetAttack();
		int GetDefense();

		void TakeDamage(int);

};

