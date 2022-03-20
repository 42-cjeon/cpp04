/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 02:43:40 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 03:00:33 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H_
#define CURE_H_

#include "AMateria.hpp"

class Cure : public AMateria {
 public:
  Cure(void);
  Cure(const Cure &origin);
  ~Cure(void);

  AMateria *clone(void) const;
  void use(ICharacter &target);
  
  private:
    Cure &operator=(const Cure &rhs);
};

#endif
