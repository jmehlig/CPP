/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:17:54 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 09:36:59 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !\n\n";
}

void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. You "
               "didn’t put enough bacon in my burger! If you did, I wouldn’t "
               "be asking for more!\n\n";
}

void Harl::warning(void) {
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void) {
  std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void Harl::setLevels(void)
{
  Levels[0] = "debug";
  Levels[1] = "info";
  Levels[2] = "warning";
  Levels[3] = "error";
}

void Harl::setFunctions(void)
{
  Functions[0] = &Harl::debug;
  Functions[1] = &Harl::info;
  Functions[2] = &Harl::warning;
  Functions[3] =  &Harl::error;
}

void Harl::complain(std::string level)
{    
    // functions["debug"] = &Harl::debug;
    // functions["info"] = &Harl::info;
    // functions["warning"] = &Harl::warning;
    // functions["error"] = &Harl::error;
    // this->fcnptr = functions[level];
    this->setLevels();
    this->setFunctions();
    for (int i = 0; i < 4; i++)
    {
      if (level.compare(Levels[i]) == 0)
        (this->*Functions[i])();
    }
}