class Shape {
public:
    virtual ~Shape() {}
    virtual Shape* clone() const = 0;
};

class Rectangle : public Shape {
private:
    int m_width;
    int m_height;

public:
    Rectangle(int w, int h) : m_width(w), m_height(h) {}

    int getWidth() const {
        return this->m_width;
    }

    int getHeight() const {
        return this->m_height;
    }

    Shape* clone() const override {
        return new Rectangle(this->m_width, this->m_height);
    }
};

class Square : public Shape {
private:
    int m_length;

public:
    Square(int l) : m_length(l) {}

    int getLength() const {
        return this->m_length;
    }

    Shape* clone() const override {
        return new Square(this->m_length);
    }
};

class Test {
public:
    vector<Shape*> cloneShapes(const vector<Shape*>& shapes) {
        vector<Shape*> clonedShapes;
        for (const Shape* shape : shapes) {
            clonedShapes.push_back(shape->clone());
        }
        return clonedShapes;
    }
};
