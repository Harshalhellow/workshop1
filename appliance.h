class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    Appliance() {
        powerRating = 0;
        isOn = false;
    }
    Appliance(int powerRating) {
        this->powerRating = powerRating;
        isOn = false;
    }

    int get_powerRating() const {
        return powerRating;
    }
    void set_powerRating(int powerRating) {
        this->powerRating = powerRating;
    }

    bool get_isOn() const {
        return isOn;
    }
    void set_isOn(bool isOn) {
        this->isOn = isOn;
    }

    virtual double getPowerConsumption() {
        return 0.0;
    }

    void turnOn() {
        isOn = true;
    }
    void turnOff() {
        isOn = false;
    }
};