/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 03:03:05 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:54:43 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

#include <iostream>

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) {}

AMateria* Ice::clone(void) const { return new Ice(); }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
