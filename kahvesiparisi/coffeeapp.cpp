/*
 * coffeeapp.cpp
 *
 *  Created on: 14 Tem 2025
 *      Author: levent
 */

#include "CoffeeApp.h"
#include "CoffeeMenu.h"
#include "CoffeeOrderService.h"

CoffeeApp::CoffeeApp()
    : menu(CoffeeMenu::getInstance()),
      service(std::make_unique<CoffeeOrderService>(menu)) {}

CoffeeApp::~CoffeeApp() = default; // unique_ptr handles cleanup

void CoffeeApp::run() {
    service->startOrderProcess();
}
