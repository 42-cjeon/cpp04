/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:52:06 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 22:49:38 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"

class Cat : Animal {
  public:
    Cat(void);
    Cat(const Cat &origin);
    Cat &operator=(const Cat &rhs);
    ~Cat(void);

    void makeSound(void);
};

#endif
