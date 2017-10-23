//
// Created by dad on 10/21/17.
//

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
