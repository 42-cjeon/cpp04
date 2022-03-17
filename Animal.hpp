/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:48:52 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 22:52:52 by cjeon            ###   ########.fr       */
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
    virtual void makeSound(void);

  protected:
    std::string type_;
};

#endif
