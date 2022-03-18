/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:16 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:24:01 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void) {
  std::cout << "wrong cat default constructor called" << std::endl;
  type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal(origin) {
  std::cout << "wrong cat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  std::cout << "wrong cat assignment operator called" << std::endl;
  WrongAnimal::operator=(rhs);
  return *this;
}

WrongCat::~WrongCat(void) {
  std::cout << "wrong cat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const { std::cout << "meow~" << std::endl; }
