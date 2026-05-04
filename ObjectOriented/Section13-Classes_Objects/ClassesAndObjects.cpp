#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Player{

    //attributes
    string name {"Frank"};
    int health {100};
    int xp {3};

    //methods
    void talk(string message);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main()
{
    Account frank_account;
    Account jim_account;

    Player frank;
    Player prodeep;


    Player players[] {frank, prodeep};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(prodeep);

    Player *james {nullptr};
    james=new Player;
    delete james;

    return 0;
}