#pragma once
#include <string>
#include <memory>

class Pizza
{
public:
    Pizza() = default;
    virtual ~Pizza() = default;

    virtual std::string PresentOrder() = 0;
};

class PizzaStore
{
public:
    PizzaStore() = default;
    virtual ~PizzaStore() = default;

    virtual std::unique_ptr<Pizza> CreatePizza(std::string strPizzaType) = 0;
};

////////////////////////////////////////////////////////////
////////////// CONCRETE IMPLEMENTATIONS ////////////////////
////////////////////////////////////////////////////////////

class NewYorkPizza : public PizzaStore
{
public:
    class NewYorkCheesePizza;
    class NewYorkPepperoniPizza;

public:
    NewYorkPizza() = default;
    ~NewYorkPizza() override = default;

    std::unique_ptr<Pizza> CreatePizza(std::string strPizzaType) override;
};

class DesiPizza : public PizzaStore
{
public:
    class DesiBbqPizza;
    class DesiTandooriPizza;

public:
    DesiPizza() = default;
    ~DesiPizza() override = default;

    std::unique_ptr<Pizza> CreatePizza(std::string strPizzaType) override;
};