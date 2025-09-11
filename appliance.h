#ifndef APPLIANCE_H
#define APPLIANCE_H
    class appliance
    {
    private:
        int powerRating;
        bool isOn;
    public:

    appliance();

    appliance(int powerRating);
    
    void turnOn();

    void turnOff();

    virtual double getPowerConsumption();

    int getPowerRating();

    };
#endif