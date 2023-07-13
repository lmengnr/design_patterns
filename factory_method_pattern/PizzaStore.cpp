#include "PizzaStore.h"

class NewYorkPizza::NewYorkCheesePizza : public Pizza
{
public:
    NewYorkCheesePizza() = default;
    ~NewYorkCheesePizza() override = default;

    std::string PresentOrder()
    {
        return std::string("Here's you NewYorkCheese Pizza!");
    }
};

class NewYorkPizza::NewYorkPepperoniPizza : public Pizza
{
public:
    NewYorkPepperoniPizza() = default;
    ~NewYorkPepperoniPizza() override = default;

    std::string PresentOrder()
    {
        return std::string("Here's you NewYorkPepperoni Pizza!");
    }
};

std::unique_ptr<Pizza> NewYorkPizza::CreatePizza(std::string strPizzaType)
{
    std::unique_ptr<Pizza> pYourPizza;
    if (strPizzaType == "Cheese")
    {
        pYourPizza = std::make_unique<NewYorkCheesePizza>();
    }
    else if (strPizzaType == "Pepperoni")
    {
        pYourPizza = std::make_unique<NewYorkPepperoniPizza>();
    }
    else
    {
        //TODO: Look into better error handling
        return nullptr;
    }
}