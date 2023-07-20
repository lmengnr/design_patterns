#include "PizzaStore.h"

class NewYorkPizzaStore::NewYorkCheesePizza : public Pizza
{
public:
    NewYorkCheesePizza() = default;
    ~NewYorkCheesePizza() override = default;

    std::string PresentOrder() override
    {
        return std::string("Here's you NewYorkCheese Pizza!");
    }
};

class NewYorkPizzaStore::NewYorkPepperoniPizza : public Pizza
{
public:
    NewYorkPepperoniPizza() = default;
    ~NewYorkPepperoniPizza() override = default;

    std::string PresentOrder() override
    {
        return std::string("Here's you NewYorkPepperoni Pizza!");
    }
};

std::unique_ptr<Pizza> NewYorkPizzaStore::CreatePizza(std::string strPizzaType)
{
    std::unique_ptr<Pizza> pYourPizza = nullptr;
    if (strPizzaType == "Cheese")
    {
        pYourPizza = std::make_unique<NewYorkCheesePizza>();
    }
    else if (strPizzaType == "Pepperoni")
    {
        pYourPizza = std::make_unique<NewYorkPepperoniPizza>();
    }

    return pYourPizza;
}

class DesiPizzaStore::DesiBbqPizza : public Pizza
{
    public:
    DesiBbqPizza() = default;
    ~DesiBbqPizza() override = default;

    std::string PresentOrder() override
    {
        return std::string("Here's you Desi BBQ Pizza!");
    }
};

class DesiPizzaStore::DesiTandooriPizza : public Pizza
{
    public:
    DesiTandooriPizza() = default;
    ~DesiTandooriPizza() override = default;

    std::string PresentOrder() override
    {
        return std::string("Here's you Desi Tandoori Pizza!");
    }
};

std::unique_ptr<Pizza> DesiPizzaStore::CreatePizza(std::string strPizzaType)
{
    std::unique_ptr<Pizza> pYourPizza = nullptr;
    if (strPizzaType == "BBQ")
    {
        pYourPizza = std::make_unique<DesiBbqPizza>();
    }
    else if (strPizzaType == "Tandoori")
    {
        pYourPizza = std::make_unique<DesiTandooriPizza>();
    }
    
    return pYourPizza;
}