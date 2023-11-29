#include "Damageable.h"

Damageable::Damageable(string name, int health) : Object(name)
{
	m_healthMax = health;
	m_health = m_healthMax;
}

int Damageable::GetHealth()
{
	return m_health;
}

int Damageable::GetMaxHealth()
{
	return m_healthMax;
}

void Damageable::Heal(int add)
{
	if ((m_health + add) <= m_healthMax) {
		m_health += add;
	}
}

void Damageable::TakeDamage(int sub)
{
	if ((m_health - sub) < 0) {
		m_health = 0;
	}
	else {
		m_health -= sub;
	}
}
