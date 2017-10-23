/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief A specification for a parent class in the Human class hierarchy.
 * @file Parent.h
 * @author Jim Daehn
 */

#ifndef CSC232_PARENT_H
#define CSC232_PARENT_H

#include "Human.h"

class Parent : public Human {
public:
    explicit Parent(const std::string& name = "Parent");
    virtual std::string whoAmI() const override;
    virtual ~Parent() = default;

private:
    std::string name_;
};


#endif // CSC232_PARENT_H
