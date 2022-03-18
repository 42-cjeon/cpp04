/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:29:10 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:55:45 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {}

Brain::Brain(const Brain& origin) {
  for (int i = 0; i < kMaxIdeas; ++i) {
    ideas_[i] = origin.ideas_[i];
  }
}

Brain& Brain::operator=(const Brain& rhs) {
  for (int i = 0; i < kMaxIdeas; ++i) {
    ideas_[i] = origin.ideas_[i];
  }
}

std::string& Brain::operator[](int i) {
  if (i < 0 || kMaxIdeas <= i) {
    std::string empty;
    return empty;
  }
  return ideas_[i];
}

Brain::~Brain(void) {}
