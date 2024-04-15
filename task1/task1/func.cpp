#include "common.h"

void fillTrainsInfo(Train trains[], int numTrains) {
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < numTrains; ++i) {
        trains[i].Day = rand() % 10;
        trains[i].destination = "����� " + to_string(rand() % 10+1);
        trains[i].Time = rand() % 24;
        trains[i].Seats = rand() % 101;
    }
}

void displayTrainsInfo(const Train trains[], int numTrains) {
    cout << "���������� � ��������� ������ � �������:\n";
    for (int i = 0; i < numTrains; ++i) {
        cout << "����: " << trains[i].Day << ", ";
        cout << "����������: " << trains[i].destination << ", ";
        cout << "����� �����������: " << trains[i].Time << ":00 , ";
        cout << "��������� �����: " << trains[i].Seats << endl;
    }
}

void reserveSeats(Train trains[], int numTrains, const string& destination, int day, const int& time, int seats) {
    bool found = false;

    for (int i = 0; i < numTrains; ++i) {
        if ((trains[i].destination == destination) && (trains[i].Day == day) && (trains[i].Time <= time) && (trains[i].Seats >= seats)) {
            cout << "����� ������������� �����. ����� �����������: " << trains[i].Time << ":00" << endl;
            trains[i].Seats -= seats;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "���������� ��������� ����� � ������ ������." << endl;
    }
}