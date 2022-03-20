/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:52:06 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:37:26 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(const Cat &origin);
  Cat &operator=(const Cat &rhs);
  ~Cat(void);

  void makeSound(void) const;
  const std::string &getIdea(int index) const;
  void setIdea(int index, const std::string &idea);

 private:
  Brain *brain_;
};

#endif
