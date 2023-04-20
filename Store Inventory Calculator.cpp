//This program will have a class that will store and calculate data for Items in the store inventory 
//Pedro Ayala
#include <iostream>
using namespace std;

class Inventory
{
    //Initialize private variables
    private:

        int itemNumber,
            quantity;
        double cost,
            totalCost;

    //Initialize public variables
    public:

    //set all variables to 0
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost= 0;
    }

    //Initialize all variables to values
    Inventory(int itemNum, int Quantity, double Cost)
    {
        itemNumber = itemNum;
        quantity = Quantity;
        cost = Cost;

        setTotalCost(quantity, cost);   //call total cost calculation function
    }

        void setItemNum(int);                   //sets the Item number
        void setQuantity(int);                 //sets the Item quantity
        void setCost(double);                 //sets the Item cost
        void setTotalCost(int, double);      //calculates the total cost of the Item

        ///////////////////////////////
        //User input for Item number//
        /////////////////////////////
        int getItemNum()
        {
            int itemNum = 0;
            do
            {
                cout << "Enter the item Number: " << endl;
                cin >> itemNum;
            }
            while(itemNum < 1);    //loop for input validation
            return itemNum;
        }
        /////////////////////////////////
        //User input for Item Quantity//
        ///////////////////////////////
        int getQuantity()
        {
            int Quantity = 0;
            do
            {
                cout << "Enter the Quantity: " << endl;
                cin >> Quantity;
            }
            while(Quantity < 1);    //loop for input validation
            return Quantity;
        }
        /////////////////////////////
        //User input for Item Cost//
        ///////////////////////////
        double getCost()
        {
            double Cost = 0.0;
            do
            {
                cout << "Enter the Cost: " << endl;
                cin >> Cost;
            }
            while(Cost < 1);
            return Cost;    //loop for input validation
        }

};

int main()
{

    Inventory Item;     //Define the Item object

    int itemNum = Item.getItemNum();          //asks user for the Item number
    int Quantity = Item.getQuantity();       //asks user for the Item quantity
    double Cost = Item.getCost();           //asks user for the Item cost


    Item.setItemNum(itemNum);               //sets the Item number
    Item.setQuantity(Quantity);            //sets the Item quantity
    Item.setCost(Cost);                   //sets the Item cost
    Item.setTotalCost(Quantity, Cost);   //calculates the total cost of the Item

    return 0;
}

////////////////////////////////////////////////
//Functions to initialize variables to values//
//////////////////////////////////////////////
void Inventory::setItemNum(int itemNum)
{
    itemNumber = itemNum;
}
void Inventory::setQuantity(int Quantity)
{
    quantity = Quantity;
}
void Inventory::setCost(double Cost)
{
    cost = Cost;
}

/////////////////////////////////////////////////////////////////
//Function to calculate and display the total cost of the item//
///////////////////////////////////////////////////////////////
void Inventory::setTotalCost(int quantity, double cost)
{
    totalCost = quantity * cost;
    cout << "The total cost of the product was $" << totalCost << endl;
}
