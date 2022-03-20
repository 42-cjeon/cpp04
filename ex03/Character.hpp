/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:35:37 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 02:19:32 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
  public:
    Character(const std::string &name);
    ~Character(void);
    Character &operator=(const Character &rhs);
    Character(const Character &origin);

    const std::string &getName(void) const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
  
  private:
    enum { kMaxMateria = 4 };
    std::string name_;
    AMateria *materia_[kMaxMateria];
    Character(void);

};

#endif
