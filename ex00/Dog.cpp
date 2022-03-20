/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:44:32 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:18:20 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog(void) {
  std::cout << "dog default constructor called" << std::endl;
  type_ = "Dog";
}

Dog::~Dog(void) { std::cout << "dog destructor called" << std::endl; }

void Dog::makeSound(void) const { std::cout << "Bark!!" << std::endl; }
