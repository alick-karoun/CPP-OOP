#include <iostream>
#include <string>
#include <vector>

class Item{
public:
    int price;
    std::string name;

    Item(){};
    ~Item(){};
};


class Cart{
public:
    std::vector<Item&> items; //aggregation
public:
    Cart(){};
    ~Cart(){};
    void addItem(Item* item){
        items.push_back(item);

    }
    void clearItem(){
        items.clear();
    };

    void deleteItems(size_t i){
        items.erase(items.begin()+i);
    }

    void display(){
        for(const Item* item : items){
            std::cout<<item->name<<std::endl;
            std::cout<<item->price<<std::endl;
        }
    }
};

class User {};


int main(){

    Item item1;
    item1.name="Sofa";
    item1.price=30000;

    
    Item item2;
    item2.name="Coffee";
    item2.price=30000;

    if(true){
    Cart cart;
    cart.addItem(item2&);
    cart.addItem(item1&);

    cart.display();
    }

    std::cout<<"end"<<std::endl;
    
    return 0;
}