/*
 * coffeeorderservice.h
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#ifndef COFFEEORDERSERVICE_H
#define COFFEEORDERSERVICE_H

#include <string>  // Add this include for std::string

// Forward declarations
class CoffeeMenu;
class Coffee;

class CoffeeOrderService {
public:
    explicit CoffeeOrderService(CoffeeMenu& menu);
    void startOrderProcess();

private:
    CoffeeMenu& menu;
    Coffee getSelectedCoffee() const;
    bool validateInput(const std::string& input) const;
    void prepareAndServe(const Coffee& coffee) const;
};

#endif // COFFEEORDERSERVICE_H
