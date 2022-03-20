/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 03:02:07 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:54:56 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H_
#define ICE_H_

#include "AMateria.hpp"

class Ice : public AMateria {
 public:
  Ice(void);
  ~Ice(void);

  AMateria *clone(void) const;
  void use(ICharacter &target);

 private:
  Ice(const Ice &origin);
  Ice &operator=(const Ice &rhs);
};

#endif
