/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:28:40 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 19:43:40 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

enum Type
{
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    ERROR
};

class Literal
{
    private:
        Type type;
        int in_int;
        float in_f;
        double in_d;
        char in_char;

    public:
        Literal();
        ~Literal();
        Literal(Literal &l);
        Literal &operator=(Literal &l);
        Type getType();
        int getInt();
        float getFloat();
        double getDouble();
        char getChar();
        void setType(Type s);
        void setInt(int i);
        void setFloat(float f);
        void setDouble(double d);
        void setChar(char c);
        void setInput(std::string in);
        void convert_all();
        void convert_int();
        void convert_f();
        void convert_d();
        void convert_c();
        std::string findType(char *argv);
};

std::ostream &operator<<(std::ostream &out_stream, const Literal &l);