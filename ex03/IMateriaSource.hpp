/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:38:22 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 03:13:19 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_H_
#define IMATERIA_SOURCE_H_

#include <string>

class AMateria;

class IMateriaSource {
 public:
  IMateriaSource(void);
  virtual ~IMateriaSource(void);
  virtual void learnMateria(AMateria* materia) = 0;
  virtual AMateria *createMateria(std::string const& type) = 0;

 private:
  IMateriaSource(const IMateriaSource &);
  IMateriaSource &operator=(const IMateriaSource &);
};

#endif
