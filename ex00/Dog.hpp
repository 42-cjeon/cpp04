/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:52:47 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:18:41 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H_
#define DOG_H_

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  ~Dog(void);

  void makeSound(void) const;

 private:
  Dog(const Dog &origin);
  Dog &operator=(const Dog &rhs);
};

#endif
