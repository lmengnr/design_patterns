class Pizza
{
public:
    Pizza() = default;
    virtual ~Pizza() = default;

    virtual void TakeABite() = 0;
};