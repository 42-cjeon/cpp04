/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:47:43 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/17 22:41:06 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

int main(void) {
  Animal k;
  Animal g;

  g = k;
  
  std::cout << g.getType() << std::endl;
  return 0;
}
