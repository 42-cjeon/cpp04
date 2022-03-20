/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Icharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:32:30 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 04:10:30 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H_
#define ICHARACTER_H_

#include <string>

class AMateria;

class ICharacter {
 public:
  ICharacter(void);
  virtual ~ICharacter(void);
  virtual const std::string &getName(void) const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;

 private:
  ICharacter(const ICharacter &);
  ICharacter &operator=(const ICharacter &);
};

#endif
