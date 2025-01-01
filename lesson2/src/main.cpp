#include <iostream>
#include <vector>

using namespace std;

void print_menu(string name);
void add_item();
void print_list();
void delete_item();

vector<string> list;
string name;

int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        name = args[1];
        // cout << name << endl;
        print_menu(name);
    }
    else
    {
        cout << "No username provided...exiting program \n";
    }
    return 0;
}

void print_menu(string name)
{
    int choice;

    cout << " *************************** \n";
    cout << " 1 - Add to list\n";
    cout << " 2 - Remove from list\n";
    cout << " 3 - View list\n";
    cout << " 4 - Exit program\n";

    cin >> choice;

    if (choice == 4)
    {
        exit(0);
    }
    if (choice == 1)
    {
        add_item();
    }
}

void add_item()
{

    cout << "\n\n\n\n\n";
    cout << "Enter an item and press enter/return: ";

    string item;
    cin >> item;
    list.push_back(item);
    print_menu(name);
}