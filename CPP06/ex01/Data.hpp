/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:07:24 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 18:07:27 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

class Data {
    private:
        int test_ob;

    public:
        Data();
        ~Data();
        Data(Data &d);
        Data &operator=(Data &d);
        int getTest();
        void setTest(int i);
};