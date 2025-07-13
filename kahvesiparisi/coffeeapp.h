/*
 * coffeeapp.h
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#ifndef COFFEEAPP_H
#define COFFEEAPP_H

#include <memory> // For std::unique_ptr

// Forward declarations
class CoffeeMenu;
class CoffeeOrderService;

class CoffeeApp {
public:
    CoffeeApp();
    ~CoffeeApp();
    void run();

private:
    CoffeeMenu& menu;
    std::unique_ptr<CoffeeOrderService> service; // Using smart pointer
};

#endif // COFFEEAPP_H
