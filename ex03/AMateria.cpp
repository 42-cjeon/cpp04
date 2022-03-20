/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 01:57:58 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/19 04:25:28 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : type_(type) {}

AMateria::AMateria(const AMateria &origin) : type_(origin.type_) {}

AMateria::~AMateria() {}

const std::string &AMateria::getType(void) const { return type_; }
