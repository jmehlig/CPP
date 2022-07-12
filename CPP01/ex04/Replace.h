/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:05:11 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/11 18:17:58 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef REPLACE_H
# define REPLACE_H

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>

void replaceInFile(std::string filename, std::string s1, std::string s2);

#endif 