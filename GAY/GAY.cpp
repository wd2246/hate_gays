// GAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
void distance();











void game() {

    int bot = 1 + rand() % 3;
    int user = 1;
    int i = 1;
    std::cin >> user;

    if (user == 1 || user == 2 || user == 3) {

        if (user == 1 && bot == 2 || user == 2 && bot == 3 || user == 3 && bot == 1) {

            std::cout << " win " << std::endl;

        }
        else if (user == bot) {

            std::cout << " ����� " << std::endl;
        }
        else {
            std::cout << " lose " << std::endl;

        }

    }
    else {
        std::cout << " WTF " << std::endl;


    }
    //
}

void start() {
    std::cout << "�� �����, ������, ���������� � ��������, ����� �������";
    std::cout << "���� ���?\n1.��\n2.���\n";

    int chouse;

    std::cin >> chouse;

    if (chouse == 1) {
        std::cout << "�������" << std::endl;
        distance();
    }
    else {
        std::cout << "������" << std::endl;
    }

}
    
void distance() {
    std::cout << "�����, ��������� ��������, � �������";
    std::cout << "��� �� ������� � ����?\n1.�������\n2.������\n";
    
    int chouse;

    std::cin >> chouse;

    if (chouse == 1) {
        std::cout << "������������" << std::endl;
    }
    else {
        std::cout << "�����" << std::endl;
    }


}



void Street() {

    std::string question = "�������, ���� ���, �� �� ������ ���� �������, ������ ������\n";
    std::string pasword1 = "����";
    std::string pasword2 = "������";
    std::string otvet;

    std::cout << "� ������, ����� ����������� ���� �������� �� ����?\n";
    std::cout << "��� � ��������� ��� ������ � �����?\n ������: ����� ������ �� ����� �� �������, � ���� ������ ������ �����\n";
    std::cout << question;
    std::cin >> otvet;

    if (otvet == pasword1)
    {
        std::cout << "�������, ������ ���� ������� ���������, ������\n";
    }
    else if (otvet == pasword1) {
        std::cout << "���, ����� �������� �� ����������� ������, �� ���� ����, ���� ������\n";
    }
    else
    {
        std::cout << "���� ����� ��������, � �� ��� ��� ��� ������ ������. �� ��������� � �� ���� ��� �����������\n";
    }
    
       
    
    



}

void Bar() {

    std::string sentence = "������� � ��������� ������ ���� �������� �������\n";
    std::string reaction1 = "�� ����� � ���� ����� ������. ��� �� �����, �� ������ ���";
    std::string reaction2 = "����� ���������� ��� �������, ��� � ������ ��������";
    std::string reaction3 = "������ ������� ��������� �����, ������ �� ���� ����������";
    std::string otvet;
      

    std::cout << "������� ������, ��� ��������� ����\n";
    std::cout << "��� ������ ���� ���� �� ����, � ��� ����� �� �����";

    if (otvet == reaction1)
    {
        std::cout << "��"
    }



}

















//
int main()
   {
    SetConsoleCP(1251);
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    //game();
    //start();
    Street();
}







