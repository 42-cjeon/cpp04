/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:48:52 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/18 18:23:25 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal {
 public:
  Animal(void);
  Animal(const Animal &origin);
  Animal &operator=(const Animal &rhs);
  virtual ~Animal(void);

  const std::string &getType(void) const;
  virtual void makeSound(void) const;

 protected:
  std::string type_;
};

#endif
