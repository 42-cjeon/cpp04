/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:48:24 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:17:54 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal(void) : type_("Animal") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &origin) {
  std::cout << "Animal copy constructor called" << std::endl;
  type_ = origin.type_;
}

Animal &Animal::operator=(const Animal &rhs) {
  std::cout << "Animal assignment operator called" << std::endl;
  type_ = rhs.type_;
  return *this;
}

Animal::~Animal(void) { std::cout << "Animal destructor called" << std::endl; }

const std::string &Animal::getType(void) const { return type_; }

void Animal::makeSound(void) const {
  std::cout << "... absolute silence ..." << std::endl;
}
