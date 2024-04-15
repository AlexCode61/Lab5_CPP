#include "common.h"

int main()
{
    int m, k, t, id;
    string L;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numTrains;
    cout << "Введите количество поездов: ";
    cin >> numTrains;

    Train trains[MAX_TRAINS];
    fillTrainsInfo(trains, numTrains);
    displayTrainsInfo(trains, numTrains);

    cout << "Введите количество мест для бронирования" << endl;
    cin >> m;
    cout << "Введите количество id города назначения" << endl;
    cin >> id;
    cout << "Введите день отправления" << endl;
    cin >> k;
    cout << "Введите максимальное время отправления" << endl;
    cin >> t;

    L = "Город " + to_string(id);

    reserveSeats(trains, numTrains, L, k, t, m);

	return 0;
}
