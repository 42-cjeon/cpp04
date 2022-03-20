/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:48:52 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:37:03 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal {
 public:
  Animal(void);
  virtual ~Animal(void);

  const std::string &getType(void) const;
  virtual void makeSound(void) const;

 protected:
  std::string type_;

 private:
  Animal(const Animal &origin);
  Animal &operator=(const Animal &rhs);
};

#endif
