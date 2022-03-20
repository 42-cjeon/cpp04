/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:16 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:19:32 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat(void) {
  std::cout << "wrong cat default constructor called" << std::endl;
  type_ = "WrongCat";
}

WrongCat::~WrongCat(void) {
  std::cout << "wrong cat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const { std::cout << "meow~" << std::endl; }
