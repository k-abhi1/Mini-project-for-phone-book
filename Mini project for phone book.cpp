// #include<iostream>
// using namespace std;
// #include<string>

// struct Contact {
//     string name;
//     string phoneNumber;
//     string email;
// };
// Contact phoneBook[100]; // Assuming a maximum of 100 contacts

// int contactCount = 0;

// void addContact() {
//     cout << "Enter name: ";
//     cin >> phoneBook[contactCount].name;
//     cout << "Enter phone number: ";
//     cin >> phoneBook[contactCount].phoneNumber;
//     cout << "Enter email: ";
//     cin >> phoneBook[contactCount].email;
//     contactCount++;
// }

// void searchContact() {
//     string name;
//     cout << "Enter name to search: ";
//     cin >> name;
//     for (int i = 0; i < contactCount; i++) {
//         if (phoneBook[i].name == name) {
//             cout << "Phone number: " << phoneBook[i].phoneNumber << endl;
//             cout << "Email: " << phoneBook[i].email << endl;
//             return;
//         }
//     }
//     cout << "Contact not found" << endl;
// }

// void updateContact() {
//     string name;
//     cout << "Enter name to update: ";
//     cin >> name;
//     for (int i = 0; i < contactCount; i++) {
//         if (phoneBook[i].name == name) {
//             cout << "Enter new name: ";
//             cin >> phoneBook[i].name;
//             cout << "Enter new phone number: ";
//             cin >> phoneBook[i].phoneNumber;
//             cout << "Enter new email: ";
//             cin >> phoneBook[i].email;
//             return;
//         }
//     }
//     cout << "Contact not found" << endl;
// }

// void deleteContact() {
//     string name;
//     cout << "Enter name to delete: ";
//     cin >> name;
//     for (int i = 0; i < contactCount; i++) {
//         if (phoneBook[i].name == name) {
//             for (int j = i; j < contactCount - 1; j++) {
//                 phoneBook[j] = phoneBook[j + 1];
//             }
//             contactCount--;
//             cout << "Contact deleted" << endl;
//             return;
//         }
//     }
//     cout << "Contact not found" << endl;
// }

// void displayContact() {
//     for (int i = 0; i < contactCount; i++) {
//         cout << "Name: " << phoneBook[i].name << endl;
//         cout << "Phone number: " << phoneBook[i].phoneNumber << endl;
//         cout << "Email: " << phoneBook[i].email << endl;
//         cout << endl;
//     }
// }

// int main(){

//     while(true){
//     cout<<"1. Add Contact"<<endl;
//     cout<<"2. Search Contact"<<endl;
//     cout<<"3. Update Contact"<<endl;
//     cout<<"4. Delete Contact"<<endl;
//     cout<<"5. Display Contact"<<endl;
//     cout<<"6. Exit"<<endl;
    

//     int choice;
//     cout<<"enter a choice:";
//     cin>>choice;

//     switch(choice)
//     {
//         case 1;
//         addContact();
//         break;

//         case 2;
//         searchContact();
//         break;

//         case 3;
//         updateContact();
//         break;

//         case 4;
//         deleteContact();
//         break;

//         case 5;
//         displayContact();
//         break;

//         case 6;
//         exit(0);
//         break;

//         default;
//         cout<<"invalid choice";
//         break;
//     }
    

// }
// return 0;

// }


#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string email;
};

Contact phoneBook[100]; // Assuming a maximum of 100 contacts
int contactCount = 0;

void addContact() {
    cout << "Enter name: ";
    cin >> phoneBook[contactCount].name;
    cout << "Enter phone number: ";
    cin >> phoneBook[contactCount].phoneNumber;
    cout << "Enter email: ";
    cin >> phoneBook[contactCount].email;
    contactCount++;
}

void searchContact() {
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    for (int i = 0; i < contactCount; i++) {
        if (phoneBook[i].name == name) {
            cout << "Phone number: " << phoneBook[i].phoneNumber << endl;
            cout << "Email: " << phoneBook[i].email << endl;
            return;
        }
    }
    cout << "Contact not found" << endl;
}

void updateContact() {
    string name;
    cout << "Enter name to update: ";
    cin >> name;
    for (int i = 0; i < contactCount; i++) {
        if (phoneBook[i].name == name) {
            cout << "Enter new name: ";
            cin >> phoneBook[i].name;
            cout << "Enter new phone number: ";
            cin >> phoneBook[i].phoneNumber;
            cout << "Enter new email: ";
            cin >> phoneBook[i].email;
            return;
        }
    }
    cout << "Contact not found" << endl;
}

void deleteContact() {
    string name;
    cout << "Enter name to delete: ";
    cin >> name;
    for (int i = 0; i < contactCount; i++) {
        if (phoneBook[i].name == name) {
            for (int j = i; j < contactCount - 1; j++) {
                phoneBook[j] = phoneBook[j + 1];
            }
            contactCount--;
            cout << "Contact deleted" << endl;
            return;
        }
    }
    cout << "Contact not found" << endl;
}

void displayContact() {
    for (int i = 0; i < contactCount; i++) {
        cout << "Name: " << phoneBook[i].name << endl;
        cout << "Phone number: " << phoneBook[i].phoneNumber << endl;
        cout << "Email: " << phoneBook[i].email << endl;
        cout << endl;
    }
}

int main() {
    while (true) {
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Update Contact" << endl;
        cout << "4. Delete Contact" << endl;
        cout << "5. Display Contact" << endl;
        cout << "6. Exit" << endl;

        int choice;
        cout << "Enter a choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;

            case 2:
                searchContact();
                break;

            case 3:
                updateContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                displayContact();
                break;

            case 6:
                return 0;

            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

