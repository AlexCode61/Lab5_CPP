#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <locale>

using namespace std;

struct abonent {
    string fullName;
    string address;
    string phoneNumber;
};

void fillSubscribersInfo(abonent abonents[], int numabonents);
void displaySubscribersInfo(const abonent abonents[], int numabonents);
string findPhoneNumber(const abonent abonents[], int numabonents, const string& lastName);