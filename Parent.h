//
// Created by dad on 10/21/17.
//

#ifndef RAWPOINTERWITHPOLYMORPH_PARENT_H
#define RAWPOINTERWITHPOLYMORPH_PARENT_H

#include "Human.h"

class Parent : public Human {
public:
    explicit Parent(const std::string& name = "Parent");
    virtual std::string whoAmI() const override;
    virtual ~Parent() = default;

private:
    std::string name_;
};


#endif // RAWPOINTERWITHPOLYMORPH_PARENT_H
