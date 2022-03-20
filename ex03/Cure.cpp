/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:44:51 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 04:09:33 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

#include <iostream>

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& origin) : AMateria(origin.type_) {}

Cure::~Cure(void) {}

AMateria* Cure::clone(void) const { return new Cure(); }

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
