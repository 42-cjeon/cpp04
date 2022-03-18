/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:44:32 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 17:55:20 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) {
  type_ = "Dog";
}

Dog::Dog(const Dog &origin) : Animal(origin) {
  std::cout << "dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << "dog assignment operator called" << std::endl;
  Animal::operator=(rhs);
  return *this;
}

Dog::~Dog(void) {
  std::cout << "dog constructor called" << std::endl;
}

void Dog::makeSound(void) const { std::cout << "Bark!!" << std::endl; }
