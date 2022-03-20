/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:15:21 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:21:57 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H_
#define WRONG_CAT_H_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  ~WrongCat(void);

  void makeSound(void) const;

 private:
  WrongCat(const WrongCat &origin);
  WrongCat &operator=(const WrongCat &rhs);
};

#endif
