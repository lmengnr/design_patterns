class Pizza;

class PizzaStore
{
public:
    PizzaStore() = default;
    virtual ~PizzaStore() = default;

    virtual Pizza CreatePizza() = 0;
};

////////////////////////////////////////////////////////////
////////////// CONCRETE IMPLEMENTATIONS ////////////////////
////////////////////////////////////////////////////////////

class NewYorkPizza : public PizzaStore
{
public:
    NewYorkPizza() = default;
    ~NewYorkPizza() override = default;

    Pizza CreatePizza() override;
};

class DesiPizza : public PizzaStore
{
public:
    DesiPizza() = default;
    ~DesiPizza() override = default;

    Pizza CreatePizza() override;
};