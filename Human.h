/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief A specification for an abstract class, i.e., interface at
 * the root of the Human class hierarchy.
 * @file Human.h
 * @author Jim Daehn
 */

#ifndef CSC232_HUMAN_H
#define CSC232_HUMAN_H

#include <string>

class Human {
public:
    virtual std::string whoAmI() const = 0;
};


#endif // CSC232_HUMAN_H
