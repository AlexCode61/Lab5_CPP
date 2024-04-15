#include "myheader.h"

void fillSubscribersInfo(abonent abonents[], int numabonents) {
    srand(time(0));

    for (int i = 0; i < numabonents; ++i) {
        cout << "Введите данные для абонента " << i + 1 << ":\n";
        cout << "ФИО: ";
        getline(cin >> ws, abonents[i].fullName);
        cout << "Место жительства: ";
        getline(cin >> ws, abonents[i].address);
        abonents[i].phoneNumber = "8-800-" + to_string(rand() % 1000 + 100) + "-" + to_string(rand() % 10000 + 1000);
    }
}

void displaySubscribersInfo(const abonent abonents[], int numabonents) {
    cout << "Информация об абонентах АТС:\n";
    for (int i = 0; i < numabonents; ++i) {
        cout << i << "| ФИО: " << abonents[i].fullName << ", ";
        cout << "Место жительства: " << abonents[i].address << ", ";
        cout << "Номер телефона: " << abonents[i].phoneNumber << endl;
    }
}

string LastName(string str) {
    int i = 0;
    string word = "";
    for (int i = 0; i < str.length(); ++i) {
        if ((str[i] == ' ') || (str[i] == '\0')) {
            return word;
        }
        word = word + str[i];
    }
}

string findPhoneNumber(const abonent abonents[], int numabonents, const string& lastName) {
    for (int i = 0; i < numabonents; ++i){
        if (LastName(abonents[i].fullName) == lastName) {
            return abonents[i].phoneNumber;
        }
    }
    return "Абонент с такой фамилией не найден.";
}
