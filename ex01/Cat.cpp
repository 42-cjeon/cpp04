/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:45:59 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:37:23 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) {
  std::cout << "cat default constructor called" << std::endl;
  type_ = "Cat";
  brain_ = new Brain();
}

Cat::Cat(const Cat &origin) {
  std::cout << "cat copy constructor called" << std::endl;
  type_ = "Cat";
  brain_ = new Brain();
  *brain_ = *origin.brain_;
}

Cat &Cat::operator=(const Cat &rhs) {
  std::cout << "cat assignment operator called" << std::endl;
  *brain_ = *rhs.brain_;
  return *this;
}

Cat::~Cat(void) {
  std::cout << "cat destructor called" << std::endl;
  delete brain_;
}

void Cat::makeSound(void) const { std::cout << "meow~" << std::endl; }

const std::string &Cat::getIdea(int index) const { return (*brain_)[index]; }

void Cat::setIdea(int index, const std::string &idea) {
  (*brain_)[index] = idea;
}
