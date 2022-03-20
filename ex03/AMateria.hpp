/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:21:12 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 04:28:50 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H_
#define AMATERIA_H_

#include <string>

class ICharacter;

class AMateria {
  public:
    AMateria(const std::string &type);
    AMateria (const AMateria &origin);
    virtual ~AMateria();

    const std::string &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target) = 0;

  protected:
    const std::string type_;

  private:
    AMateria(void);
    AMateria &operator=(const AMateria &rhs);

};

#endif
