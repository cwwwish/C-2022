#include <bits/stdc++.h>

using namespace std;

class player {
public:
player(string n, string pwd, int ex, pair<int, int> pos) {
name = n;
password = pwd;
experience = ex;
position = pos;
}
void setName(string name) { this->name = name;}
string getName() { return name;}
void setPassword(string pwd) { password = pwd;}
string getPassword() { return password;}
void setExperience(int n) { experience = n;}
int getExperience() { return experience;}
void setPosition(pair<int,int> p) { position = p;}
pair<int, int> getPosition() { return position;}
void setInventory (string * inventory );
string * getInventory() { return inventory; }
void display();
  
private:
string name;
string password;
int experience;
string inventory[4];
pair<int, int> position;
};

void player::setInventory(string * inventory) {
for (int i = 0; i < 4; ++i) {
this->inventory[i] = inventory[i];
}
}

void player::display() {
cout << "Player Info -" << endl;

cout << "Name: " << name << endl;

cout << "Password: " << password << endl;

cout << "Experience: " << experience << endl;

cout << "Inventory:" << endl;

cout << "Position: " << position.first << " , " << position.second << endl;
for (auto x: inventory) {
cout << x << endl;
}
}

int main()
{
player p1("Nematocyst", "obfuscator", 1098, {55689, 76453});
string inventory[4];
inventory[0] = "sword";
inventory[1] = "shield";
inventory[2] = "food";
inventory[3] = "potion";
p1.setInventory(inventory);
player p2("Omphaloskeps", "obstreperous", 11456, {12, 5108});
inventory[0] = "sword of magic";
inventory[1] = "shield of power";
inventory[2] = "mana potion";
inventory[3] = "anti-fire potion";
p2.setInventory(inventory);
player p3("Tokamakfusion", "toroid", 15678, {99, 108});
inventory[0] = "axe of damage";
inventory[1] = "shield of warding";
inventory[2] = "strength potion";
inventory[3] = "healing potion";
p3.setInventory(inventory);
  
p1.display();
p2.display();
p3.display();
  
cout << "Press any key to continue.. " << endl;
getchar();
return 0;
}