#include "myheader.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numSubscribers;
    cout << "Введите количество абонентов: ";
    cin >> numSubscribers;
    cin.ignore();

    abonent subscribers[100];
    fillSubscribersInfo(subscribers, numSubscribers);

    displaySubscribersInfo(subscribers, numSubscribers);

    string lastName;
    cout << "Введите фамилию абонента для поиска номера: ";
    getline(cin >> ws, lastName);

    string phoneNumber = findPhoneNumber(subscribers, numSubscribers, lastName);
    cout << "Номер телефона: " << phoneNumber << endl;

    return 0;
}
