/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief A specification for the a child class in the Human class hierarchy.
 * @file Child.h
 * @author Jim Daehn
 */

#ifndef CSC232_CHILD_H
#define CSC232_CHILD_H

#include "Parent.h"

class Child : public Parent {
public:
    explicit Child(const std::string& name = "Child", const std::string& parent = "Parent");
    virtual std::string whoAmI() const override;
    virtual std::string whoIsMyParent() const;
    virtual ~Child() = default;

private:
    std::string parent_;
};


#endif // CSC232_CHILD_H
