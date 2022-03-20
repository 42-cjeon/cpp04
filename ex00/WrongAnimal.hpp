/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:08 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:19:18 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H_
#define WRONG_ANIMAL_H_

#include <string>

class WrongAnimal {
 public:
  WrongAnimal(void);
  ~WrongAnimal(void);

  const std::string &getType(void) const;
  void makeSound(void) const;

 protected:
  std::string type_;

 private:
  WrongAnimal(const WrongAnimal &origin);
  WrongAnimal &operator=(const WrongAnimal &rhs);
};

#endif
