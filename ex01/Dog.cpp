/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:44:32 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 19:58:22 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) {
  std::cout << "dog default constructor called" << std::endl;
  type_ = "Dog";
  brain_ = new Brain();
}

Dog::Dog(const Dog &origin) : Animal(origin) {
  std::cout << "dog copy constructor called" << std::endl;
  brain_ = new Brain();
  *brain_ = *origin.brain_;
}

Dog &Dog::operator=(const Dog &rhs) {
  std::cout << "dog assignment operator called" << std::endl;
  *brain_ = *rhs.brain_;
  Animal::operator=(rhs);
  return *this;
}

Dog::~Dog(void) {
  std::cout << "dog destructor called" << std::endl;
  delete brain_;
}

void Dog::makeSound(void) const { std::cout << "Bark!!" << std::endl; }

const std::string &Dog::getIdea(int index) const { return (*brain_)[index]; }

void Dog::setIdea(int index, const std::string &idea) {
  (*brain_)[index] = idea;
}
