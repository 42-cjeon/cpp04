/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:47:43 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:05:42 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  std::cout << "--- basic test ---" << std::endl;
  {
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << meta->getType() << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    meta->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete meta;
    delete dog;
    delete cat;
  }
  std::cout << "--- ctor/dtor, assignment operator test ---" << std::endl;
  {
    Dog a;
    Dog b = a;
    Dog c;
  
    c = a;
    std::cout << "origin: " << a.getType() 
              << "; Copy ctor: " << b.getType()
              << "; Copy assign: " << c.getType() 
              << std::endl;
  }
  {
    Cat a;
    Cat b = a;
    Cat c;
  
    c = a;
    std::cout << "origin: " << a.getType() 
              << "; Copy ctor: " << b.getType()
              << "; Copy assign: " << c.getType() 
              << std::endl;
  }
  {
    Animal a;
    Animal b = a;
    Animal c;
  
    c = a;
    std::cout << "origin: " << a.getType() 
              << "; Copy ctor: " << b.getType()
              << "; Copy assign: " << c.getType() 
              << std::endl;
  }
  return 0;
}
