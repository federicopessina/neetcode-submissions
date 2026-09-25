#include <string>
#include <vector>

using namespace std;

class Observer {
public:
    virtual void notify(const string& itemName) = 0;
    virtual ~Observer() = default;
};

class Customer : public Observer {
private:
    string name;
    int notifications;

public:
    Customer(const string& name)
        : name(name), notifications(0) {}

    void notify(const string& itemName) override {
        ++notifications; // itemName intentionally unused
    }

    int countNotifications() const {
        return notifications;
    }
};

class OnlineStoreItem {
private:
    string itemName;
    int stock;
    vector<Observer*> observers;

    void notifyObservers() {
        for (Observer* observer : observers) {
            observer->notify(itemName);
        }
    }

public:
    OnlineStoreItem(const string& itemName, int stock)
        : itemName(itemName), stock(stock) {}

    void subscribe(Observer* observer) {
        observers.push_back(observer);
    }

    void unsubscribe(Observer* observer) {
        observers.erase(
            remove(observers.begin(), observers.end(), observer),
            observers.end());
    }

    void updateStock(int newStock) {
        int oldStock = stock;
        stock = newStock;

        if (oldStock == 0 && newStock > 0) {
            notifyObservers();
        }
    }
};