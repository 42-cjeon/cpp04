/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:01 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:17:54 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(void) : type_("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin) {
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  type_ = origin.type_;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  std::cout << "WrongAnimal assignment operator called" << std::endl;
  type_ = rhs.type_;
  return *this;
}

WrongAnimal::~WrongAnimal(void) { std::cout << "WrongAnimal destructor called" << std::endl; }

const std::string &WrongAnimal::getType(void) const { return type_; }

void WrongAnimal::makeSound(void) const {
  std::cout << "... absolute silence ..." << std::endl;
}
