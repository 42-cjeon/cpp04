/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:39:50 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/23 16:07:49 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

#include "AMateria.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < kMaxMateria; ++i) {
    materia_[i] = NULL;
  }
}

MateriaSource::~MateriaSource(void) {
  for (int i = 0; i < kMaxMateria; ++i) {
    delete materia_[i];
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
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
  return *this;
}

MateriaSource::MateriaSource(const MateriaSource &origin) {
  for (int i = 0; i < kMaxMateria; ++i) {
    if (origin.materia_[i]) {
      materia_[i] = origin.materia_[i]->clone();
    } else {
      materia_[i] = NULL;
    }
  }
}

void MateriaSource::learnMateria(AMateria *materia) {
  if (materia == NULL) {
    std::cout << "Materia Source cannot learn about Materia <NULL>" << std::endl;
    return;
  }
  for (int i = 0; i < kMaxMateria; ++i) {
    if (materia_[i] == NULL) {
      materia_[i] = materia->clone();
      return;
    }
  }
  std::cout << "Materia Source cannot learn about Materia <" << materia->getType() << "> no space left" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
  for (int i = 0; i < kMaxMateria; ++i) {
    if (materia_[i] && materia_[i]->getType() == type) {
      return materia_[i]->clone();
    }
  }
  return NULL;
}
