/*
 * coffeemenu.h
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#ifndef COFFEEMENU_H
#define COFFEEMENU_H

#include "Coffee.h"
#include <map>
#include <cstddef>

class CoffeeMenu {
public:
    static CoffeeMenu& getInstance();

    void displayMenu() const;
    Coffee getCoffeeById(int id) const;
    size_t getMenuSize() const;

    CoffeeMenu(const CoffeeMenu&) = delete;
    CoffeeMenu& operator=(const CoffeeMenu&) = delete;

private:
    CoffeeMenu();
    std::map<int, Coffee> coffees;
};

#endif // COFFEEMENU_H
