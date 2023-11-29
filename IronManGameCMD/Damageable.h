#pragma once

#include "Object.h"

class Damageable : public Object
{
	protected:
		int m_health = 0;
		int m_healthMax = 1;
	public:
		Damageable(string name, int health);

		int GetHealth();
		int GetMaxHealth();

		void Heal(int);
		void TakeDamage(int);
};