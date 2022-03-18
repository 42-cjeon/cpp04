/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:29:10 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 19:53:55 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>
#include <exception>

Brain::Brain(void) {
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& origin) {
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < kMaxIdeas; ++i) {
    ideas_[i] = origin.ideas_[i];
  }
}

Brain& Brain::operator=(const Brain& rhs) {
  std::cout << "Brain assignment operator called" << std::endl;
  for (int i = 0; i < kMaxIdeas; ++i) {
    ideas_[i] = rhs.ideas_[i];
  }
  return *this;
}

std::string& Brain::operator[](int i) {
  if (i < 0 || kMaxIdeas <= i) {
    throw std::out_of_range("Brain Index Out of Range");
  }
  return ideas_[i];
}

Brain::~Brain(void) {
  std::cout << "Brain destructor called" << std::endl;
}
