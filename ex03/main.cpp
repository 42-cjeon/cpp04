/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 04:00:06 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 02:00:54 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#include <iostream>

int main() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
 
  ICharacter* me = new Character("me");
 
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
 
  ICharacter* bob = new Character("bob");
 
  me->use(0, *bob);
  me->use(1, *bob);
 
  delete bob;
  delete me;
  delete src;
 
  return 0;
}
