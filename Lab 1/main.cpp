#include <bits/stdc++.h>
#define boost ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
//#include<ctime>
using namespace std;

class Ingredient
{
    public:
        void print_ingredients(string dish)
        {

        }
};

class Item
{
    private:
        string name;
        int price;
        int order_frequency;
        vector<Ingredient> ingredients;

    public:
        void set_name(string n)
        {
            name = n;
        }
        string get_name()
        {
            return name;
        }
        void set_price(int p)
        {
            price = p;
        }
        int get_price()
        {
            return price;
        }
        void ordered()
        {
            order_frequency++;
        }
};

class Order
{
    private:
        int total_bill;
        vector<Item> items;

    public:
        void print_date_time()
        {
            time_t tt;
            struct tm * ti;
            time (&tt);
            ti = localtime(&tt);
            cout << asctime(ti) << "\n";
        }
        void print_bill(vector<Item> items);
};

class Customer
{
    private:
        string name;
        long long int mobile_number;
        int total_spending;
        vector<Order> order;

    public:
        bool isPremium;
        void set_name(string n)
        {
            name = n;
        }
        string get_name()
        {
            return name;
        }
        void set_mobile_number(long long int n)
        {
            mobile_number = n;
        }
        long long int get_mobile_number()
        {
            return mobile_number;
        }
        void set_total_spending(int n)
        {
            total_spending = n;
        }
        int get_mobile_number()
        {
            return total_spending;
        }
        void add_to_order_history();
        void print_order_history();
};

class Restaurant
{
    private:
        int seating_capacity;

    public:
        void set_seating_capacity(int seats)
        {
            seating_capacity = seats;
        }
        int get_seating_capacity()
        {
            return seating_capacity;
        }
        void print_customer_records(Customer c);
        void print_items(Item i[]);
        void book_a_seat();
        void place_order(Order o);
        void search_for_item(Item i);
        void generate_bill();
        Customer find_customer();
        Customer find_premium_customer();
        void add_customer(Customer c);
};

int main()
{
    boost;
    cout << "Restaurant app begins!\n";
    Restaurant r = new Restaurant();
    r.set_seating_capacity(10);

    return 0;
}
