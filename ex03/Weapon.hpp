#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
	public:
		Weapon(const std::string& new_type);
		Weapon(void);
		~Weapon(void);
		const std::string&	getType(void);
		void	setType(const std::string& new_type);

	private:
		std::string	type;
};

#endif