class Meal {
private:
    double cost;
    bool takeOut;
    string main;
    string drink;

public:
    double getCost() {
        return cost;
    }

    bool getTakeOut() {
        return takeOut;
    }

    string getMain() {
        return main;
    }

    string getDrink() {
        return drink;
    }

    void setCost(double cost) {
        this->cost = cost;
    }

    void setTakeOut(bool takeOut) {
        this->takeOut = takeOut;
    }

    void setMain(string main) {
        this->main = main;
    }

    void setDrink(string drink) {
        this->drink = drink;
    }
};

class MealBuilder {
private:
    Meal m_meal;

public:
    MealBuilder() {
        // Meal is default constructed
    }

    MealBuilder& addCost(double cost) {
        m_meal.setCost(cost);
        return *this;
    }

    MealBuilder& addTakeOut(bool takeOut) {
        m_meal.setTakeOut(takeOut);
        return *this;
    }

    MealBuilder& addMainCourse(string main) {
        m_meal.setMain(main);
        return *this;
    }

    MealBuilder& addDrink(string drink) {
        m_meal.setDrink(drink);
        return *this;
    }

    Meal build() {
        return m_meal;
    }
};
