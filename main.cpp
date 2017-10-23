/**
 * Missouri State University
 * CSC232 - Data Structures with C++, Fall 2017
 *
 * @brief An implementation of the parent class in the Human class hierarchy.
 * @file main.cpp
 * @author Jim Daehn
 */

#include <iostream>
#include <vector>
#include "Human.h"
#include "Parent.h"
#include "Child.h"

int main() {
    // Generally speaking, ptrHumanParent is a pointer to a Human, but it points specifically to a Parent object
    // that exists in the heap...
    Human* ptrHumanParent = new Parent{};
    // Generally speaking, ptrHumanChild is a pointer to a Human, but it points specifically to a Child object
    // that exists in the heap...
    Human* ptrHumanChild = new Child{};

    // The following are valid because all Humans can respond to the whoAmI() message, and therefore pointers to Humans
    // can be sent such messages (so long as they are pointing to actual objects that implement that member function
    std::cout << "ptrHumanParent->whoAmI():                             " << ptrHumanParent->whoAmI() << std::endl;
    std::cout << "ptrHumanChild->whoAmI():                              " << ptrHumanChild->whoAmI() << std::endl;

    // I can't do the following since ptrHumanChild is declared as a pointer to a Human which knows
    // nothing about whoIsMyParent()
    //std::cout << ptrHumanChild->whoIsMyParent() << std::endl;

    // However, since ptrHumanChild is pointing to a Child object, I can cast the Human pointer to a
    // Child pointer and then send it the whoIsMyParent() message...
    std::cout << "static_cast<Child*>(ptrHumanChild)->whoIsMyParent():  "
              << static_cast<Child*>(ptrHumanChild)->whoIsMyParent() << std::endl;

    // I can't do the following; a child can't point to a parent.
    // Why not? Because (in this case) a pointer to a Child object
    // would expect to be able to invoke any of a Child object's member functions
    // e.g., whoIsMyParent(), but a Parent object has no such member function
    // Child* ptrChildParent = new Parent();

    // but a parent can point to a child
    Parent* ptrParentChild = new Child();
    std::cout << "\nptrParentChild->whoAmI():                             " << ptrParentChild->whoAmI() << std::endl;
    // Since ptrParentChild is a pointer to a Parent object, it only knows of Parent
    // member functions and ptrParentChild is a valid pointer since a Child object IS_A Parent object.
    // However, to actually invoke a Child member function, I have to expose it for what is really is
    // i.e., a Child instance, and therefore I need a pointer to such an object if I want to
    // invoke it's extended behavior
    std::cout << "static_cast<Child*>(ptrParentChild)->whoIsMyParent(): "
              << static_cast<Child*>(ptrParentChild)->whoIsMyParent() << std::endl;

    std::cout << "\nAnd now for some polymorphic behavior...\nSame message, different behavior (i.e., polymorphic, or "
            "\"having many forms\")\n" << std::endl;
    std::vector<Human*> population{ptrHumanParent, ptrHumanChild, ptrParentChild};
    for (auto human : population) {
        std::cout << "human->whoAmI(): " << human->whoAmI() << std::endl;
    }

    return EXIT_SUCCESS;
}