class Square {
    double m_sideLength;

public:
    Square() : m_sideLength(0) {}

    Square(double sideLength) : m_sideLength(sideLength) {}

    virtual double getSideLength() {
        return this->m_sideLength;
    }
};

class SquareHole {
    double m_sideLength;

public:
    SquareHole(double sideLength) : m_sideLength(sideLength) {}

    bool canFit(Square& square) {
        return this->m_sideLength >= square.getSideLength();
    }
};

class Circle {
    double m_radius;

public:
    Circle(double radius) : m_radius(radius) {}

    double getRadius() {
        return this->m_radius;
    }
};

class CircleToSquareAdapter : public Square {
    Circle m_circle;

public:
    CircleToSquareAdapter(Circle& circle) : Square(), m_circle(circle) {}

    double getSideLength() override {
        return 2 * this->m_circle.getRadius();
    }
};
