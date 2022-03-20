/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:39:36 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 03:49:24 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H_
#define MATERIA_SOURCE_H_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
  ~MateriaSource(void);
  MateriaSource(void);
  MateriaSource(const MateriaSource &origin);
  MateriaSource &operator=(const MateriaSource &rhs);

  void learnMateria(AMateria *materia);
  AMateria *createMateria(const std::string &type);

 private:
  enum { kMaxMateria = 4 };
  AMateria *materia_[kMaxMateria];
};

#endif
