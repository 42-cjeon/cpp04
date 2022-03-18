/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:45:59 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:19:57 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) {
  std::cout << "cat default constructor called" << std::endl;
  type_ = "Cat";
}

Cat::Cat(const Cat &origin) : Animal(origin) {
  std::cout << "cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "cat assignment operator called" << std::endl;
  Animal::operator=(rhs);
  return *this;
}

Cat::~Cat(void) {
  std::cout << "cat destructor called" << std::endl;
}

void Cat::makeSound(void) const { std::cout << "meow~" << std::endl; }
