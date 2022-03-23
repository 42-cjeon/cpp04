/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 04:00:06 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/24 03:14:23 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#include <iostream>

void testDeepCopy(void) {
  std::cout << "---- test deep copy ----" << std::endl;
  AMateria *ice = new Ice;
  AMateria *cure = new Cure;

  ICharacter *me = new Character("me");
  
  IMateriaSource *source;
  {
    MateriaSource temp;
    temp.learnMateria(ice);
    temp.learnMateria(cure);
    MateriaSource *temp_cpy_address = new MateriaSource(dynamic_cast<MateriaSource &>(temp));
    source = temp_cpy_address; 
  } // no unexpected quit allowed;
  AMateria *copy_ice = source->createMateria("ice");
  me->equip(copy_ice);
  ICharacter *shadow_of_me = new Character(*dynamic_cast<Character *>(me));

  delete ice;
  delete cure;
  delete copy_ice;
  delete source;  
  
  shadow_of_me->use(0, *me);

  delete me;
  delete shadow_of_me;
}

void testCombined(void) {
  std::cout << "---- test combined ----" << std::endl;

  AMateria *ice = new Ice;
  AMateria *cure = new Cure;

  IMateriaSource *source = new MateriaSource;

  source->learnMateria(ice);
  source->learnMateria(ice);
  source->learnMateria(NULL);
  source->learnMateria(cure);
  source->learnMateria(cure);
  source->learnMateria(ice);
  IMateriaSource *new_source = new MateriaSource(dynamic_cast<MateriaSource &>(*source));

  Character *me = new Character("me");
  Character *bob = new Character("bob");

  bob->equip(NULL);
  bob->unequip(42);
  AMateria *temp = new_source->createMateria("ice");
  bob->equip(temp);
  delete temp;
  temp = new_source->createMateria("cure");
  bob->equip(temp);
  delete temp;
  temp = new_source->createMateria("unknown");
  bob->equip(temp);
  temp = new_source->createMateria("ice");
  bob->equip(temp);
  delete temp;
  temp = new_source->createMateria("ice");
  bob->equip(temp);
  delete temp;
  temp = new_source->createMateria("ice");
  bob->equip(temp);
  delete temp;

  ICharacter *shadow = new Character(dynamic_cast<Character &>(*bob));
  dynamic_cast<Character &>(*me) = dynamic_cast<Character &>(*shadow);

  me->use(-1, *bob);
  me->use(0, *bob);
  me->use(1, *bob);
  me->use(2, *bob);
  me->use(3, *bob);
  me->use(4, *bob);

  delete me;
  delete bob;
  delete shadow;
  delete new_source;
  delete source;
  delete ice;
  delete cure;
}

void testCharacter(void) {
  std::cout << "---- test character ----" << std::endl;
  std::cout << "--- test try to equip NULL materia ---" << std::endl;
  AMateria *ice = new Ice;
  AMateria *cure = new Cure;
  {
    ICharacter *bob = new Character("bob");

    bob->equip(NULL);
    delete bob;
  }
  std::cout << "--- test try to equip over 4 materia ---" << std::endl;
  {
    ICharacter *bob = new Character("bob");

    bob->equip(ice);
    bob->equip(ice);
    bob->equip(ice);
    bob->equip(ice);
    bob->equip(ice);

    delete bob;
  }
  std::cout << "--- test try to unequip materia in invalid slot---" << std::endl;
  {
    ICharacter *bob = new Character("bob");

    bob->unequip(-1);
    bob->unequip(0);
    bob->unequip(1);
    bob->unequip(2);
    bob->unequip(3);
    bob->unequip(4);
    
    delete bob;
  }
  std::cout << "--- test try to use materia in invalid slot ---" << std::endl;
  {
    ICharacter *bob = new Character("bob");
    ICharacter *me = new Character("me");

    bob->use(-1, *me);
    bob->use(0, *me);
    bob->use(1, *me);
    bob->use(2, *me);
    bob->use(3, *me);
    bob->use(4, *me);

    delete bob;
    delete me;
  }
  std::cout << "--- test combined ---" << std::endl;
  {
    ICharacter *bob = new Character("bob");
    ICharacter *me = new Character("me");
  
    bob->equip(ice);
    bob->equip(cure);
    bob->use(0, *me);
    bob->use(1, *me);
    bob->unequip(0);
    bob->unequip(1);
    bob->use(0, *me);
    bob->use(1, *me);

    delete bob;
    delete me;
  }
  delete ice;
  delete cure;
}

void testMateriaSource(void) {
  std::cout << "---- test materia source ----" << std::endl;
  AMateria *ice = new Ice;
  AMateria *cure = new Cure;
  std::cout << "--- test try to learn NULL ---" << std::endl;
  {
    IMateriaSource *source = new MateriaSource;

    source->learnMateria(NULL);

    delete source;
  }
  std::cout << "--- test learn over 4 materia ---" << std::endl;
  {
    IMateriaSource *source = new MateriaSource;

    source->learnMateria(ice);
    source->learnMateria(ice);
    source->learnMateria(ice);
    source->learnMateria(ice);
    source->learnMateria(ice);

    delete source;
  } 
  delete ice;
  delete cure;
}

int main() {
  testCharacter();
  testMateriaSource();
  testDeepCopy();
  testCombined();
  return 0;
}
