/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:13:44 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/23 19:21:48 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>

Character::Character(const std::string &name) : name_(name) {
  for (int i = 0; i < kMaxMateria; ++i) {
    materia_[i] = NULL;
  }
}

Character::~Character(void) {
  for (int i = 0; i < kMaxMateria; ++i) {
    delete materia_[i];
  }
}

Character &Character::operator=(const Character &rhs) {
  if (this == &rhs) {
    return *this;
  }
  for (int i = 0; i < kMaxMateria; ++i) {
    if (materia_[i]) {
      delete materia_[i];
      materia_[i] = NULL;
    }
    if (rhs.materia_[i]) {
      materia_[i] = rhs.materia_[i]->clone();
    }
  }
  name_ = rhs.name_;
  return *this;
}

Character::Character(const Character &origin) : name_(origin.name_) {
  for (int i = 0; i < kMaxMateria; ++i) {
    if (origin.materia_[i]) {
      materia_[i] = origin.materia_[i]->clone();
    } else {
      materia_[i] = NULL;
    }
  }
}

const std::string &Character::getName(void) const { return name_; }

void Character::equip(AMateria *m) {
  std::cout << "Character <" << name_ << "> ";
  if (m == NULL) {
    std::cout << "can't equip Materia <NULL>" << std::endl;
    return;
  }
  for (int i = 0; i < kMaxMateria; ++i) {
    if (materia_[i] == NULL) {
      std::cout << "equipt Materia <" << m->getType() << ">" << std::endl;
      materia_[i] = m->clone();
      return;
    }
  }
  std::cout << "can't equip Materia <" << m->getType() << "> no space left"
            << std::endl;
}

void Character::unequip(int idx) {
  std::cout << "Character <" << name_ << "> ";
  if (idx < 0 || kMaxMateria <= idx) {
    std::cout << "can't unequip Materia in slot " << idx
              << ". that slot is invalid" << std::endl;
    return;
  }
  if (materia_[idx] == NULL) {
    std::cout << "can't unequip Materia in slot " << idx
              << ". that slot is empty" << std::endl;
    return;
  }
  std::cout << "successfully unquip Materia <" << materia_[idx]->getType()
            << "> in slot" << idx << std::endl;
  delete materia_[idx];
  materia_[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  std::cout << "Character <" << name_ << "> ";
  if (idx < 0 || kMaxMateria <= idx) {
    std::cout << "can't use Materia in slot " << idx << ". that slot is invalid"
              << std::endl;
    return;
  }
  if (materia_[idx] == NULL) {
    std::cout << "can't use Materia in slot " << idx << ". that slot is empty"
              << std::endl;
    return;
  }
  materia_[idx]->use(target);
}
