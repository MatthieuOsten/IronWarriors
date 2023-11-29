#include "Element.h"

Element::Element(Capacity capacity, string nameAction, string name, int health) : Damageable(name,health)
{
	m_type = capacity;
	m_actionName = nameAction;
}

Element::Element(string name, int health) : Damageable(name, health)
{
	m_type = Capacity::Inactive;
	m_actionName = "None";
}

string Element::GetNameCapacity()
{
	switch (m_type)
	{
		case Element::Attack:
			return "Attack";
		case Element::Defense:
			return "Defense";
		case Element::Support:
			return "Support";
		case Element::Special:
			return "Special";
		case Element::Inactive:
			return "Inactive";
		default:
			return "None";
	}
}

string Element::GetNameAction()
{
	return m_actionName;
}

int Element::GetAttack()
{
	return m_attack;
}

int Element::GetDefense()
{
	return m_defense;
}

void Element::TakeDamage(int damage)
{
	int realDamage = damage - m_defense;
	Damageable::TakeDamage((realDamage >= 0) ? realDamage : 0);
}
