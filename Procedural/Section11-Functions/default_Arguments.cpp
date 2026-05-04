#include<iostream>
using namespace std;

void calculate_cost(double total_cost,double basic_cost, double tax=0.06)
{
    total_cost=basic_cost + basic_cost*tax;
    cout<<"Total cost: "<<total_cost<<endl;
}


int main()
{
    double total_cost {0.0};


    calculate_cost(total_cost,100);//will use default value of 0.06 as argument is empty

    calculate_cost(total_cost,100,0.08); //will use 0.08

}