/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:01 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:18:59 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal(void) : type_("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string &WrongAnimal::getType(void) const { return type_; }

void WrongAnimal::makeSound(void) const {
  std::cout << "... absolute silence ..." << std::endl;
}
