/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjeon <cjeon@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:30:10 by cjeon             #+#    #+#             */
/*   Updated: 2022/03/21 01:37:18 by cjeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H_
#define BRAIN_H_

#include <string>

class Brain {
 public:
  Brain(void);
  Brain(const Brain &origin);
  Brain &operator=(const Brain &rhs);
  std::string &operator[](int i);
  ~Brain(void);
  enum { kMaxIdeas = 100 };

 private:
  std::string ideas_[kMaxIdeas];
};

#endif
