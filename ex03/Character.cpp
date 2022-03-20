/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:13:44 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:52:29 by cjeon            ###   ########.fr       */
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
  if (m == NULL) {
    return;
  }
  for (int i = 0; i < kMaxMateria; ++i) {
    if (materia_[i] == NULL) {
      materia_[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || kMaxMateria < idx) {
    return;
  }
  if (materia_[idx] == NULL) {
    return;
  }
  materia_[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || kMaxMateria < idx) {
    return;
  }
  if (materia_[idx] == NULL) {
    return;
  }
  materia_[idx]->use(target);
}
