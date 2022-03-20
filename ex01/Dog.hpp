/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:52:47 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:40:06 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(const Dog &origin);
  Dog &operator=(const Dog &rhs);
  ~Dog(void);

  void makeSound(void) const;
  const std::string &getIdea(int index) const;
  void setIdea(int index, const std::string &idea);

 private:
  Brain *brain_;
};

#endif
