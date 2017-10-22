//
// Created by dad on 10/21/17.
//

#ifndef RAWPOINTERWITHPOLYMORPH_CHILD_H
#define RAWPOINTERWITHPOLYMORPH_CHILD_H

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


#endif // RAWPOINTERWITHPOLYMORPH_CHILD_H
