#include <iostream>
#include "PizzaStore.h"

int main()
{
    /**
     * With the Factory pattern getting the pizza you want is a matter
     * of going to the correct store and placing the order for your
     * flavor of choice. You go to the right store for the right kind
     * of product instead of bunching everything into a single class
     * or function.
     */

    NewYorkPizzaStore myNYPizzaStore;
    DesiPizzaStore myDesiPizzaStore;

    std::cout << "Let's order a NewYork style Pizza" << std::endl;
    std::unique_ptr<Pizza> myNYPizza = myNYPizzaStore.OrderPizza("Cheese");
    if (myNYPizza != nullptr)
    {
        std::cout << myNYPizza->PresentOrder() << std::endl;
    }
    else
    {
        std::cout << "You picked an invalid flavor!" << std::endl;
    }

    std::cout << "Let's order a Desi style Pizza" << std::endl;
    std::unique_ptr<Pizza> myDesiPizza = myDesiPizzaStore.OrderPizza("Tandoori");
    if (myDesiPizza != nullptr)
    {
        std::cout << myDesiPizza->PresentOrder() << std::endl;
    }
    else
    {
        std::cout << "You picked an invalid flavor!" << std::endl;
    }
}