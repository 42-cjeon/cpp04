/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:47:43 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:40:15 by cjeon            ###   ########.fr       */
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
    std::cout << "origin: " << a.getType() << "; Copy ctor: " << b.getType()
              << "; Copy assign: " << c.getType() << std::endl;
  }
  {
    Cat a;
    Cat b = a;
    Cat c;

    c = a;
    std::cout << "origin: " << a.getType() << "; Copy ctor: " << b.getType()
              << "; Copy assign: " << c.getType() << std::endl;
  }
  std::cout << "--- virtual dtor test ---" << std::endl;
  {
    Animal *arr[100];
    for (int i = 0; i < 100; ++i) {
      if (i % 2 == 0) {
        arr[i] = new Dog();
      } else {
        arr[i] = new Cat();
      }
    }
    for (int i = 0; i < 100; ++i) {
      delete arr[i];
    }
  }
  std::cout << "--- deep copy test ---" << std::endl;
  {
    Cat cat;
    cat.setIdea(0, "some amazing ieda!");

    Cat cat2(cat);
    std::cout << cat2.getIdea(0) << std::endl;
    cat2.setIdea(0, "another idea");
    std::cout << cat2.getIdea(0) << std::endl;
    std::cout << cat.getIdea(0) << std::endl;
  }
  std::cout << "Press Enter to continue.." << std::endl;
  char buf;
  std::cin.read(&buf, 1);
  return 0;
}
