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

            std::cout << " ничья " << std::endl;
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
    std::cout << "Ты АЛЕКС, плавец, нихлдишься в бассейне, время плавать";
    std::cout << "Попу мыл?\n1.Да\n2.НЕТ\n";

    int chouse;

    std::cin >> chouse;

    if (chouse == 1) {
        std::cout << "Молоедц" << std::endl;
        distance();
    }
    else {
        std::cout << "Свинья" << std::endl;
    }

}
    
void distance() {
    std::cout << "Алекс, тренирока началась, в бассейн";
    std::cout << "Как ты залезеш в воду?\n1.Спушусь\n2.Прыгну\n";
    
    int chouse;

    std::cin >> chouse;

    if (chouse == 1) {
        std::cout << "Профессионал" << std::endl;
    }
    else {
        std::cout << "Нубло" << std::endl;
    }


}



void Street() {

    std::string question = "Понятно, дело твоё, но ты знаещь наши правила, говори пароль\n";
    std::string pasword1 = "Кнут";
    std::string pasword2 = "Хлопок";
    std::string otvet;

    std::cout << "О Дуглас, решил пропустисть пару стаканов на ночь?\n";
    std::cout << "Или в просадить все деньги в покер?\n Дуглас: Денег сейчас на покер не водится, у меня вообще другие планы\n";
    std::cout << question;
    std::cin >> otvet;

    if (otvet == pasword1)
    {
        std::cout << "Молодец, знаешь наше исинное призвание, заходи\n";
    }
    else if (otvet == pasword1) {
        std::cout << "Что, решил потопить за собирателей урожая, ты либо пьян, либо отупел\n";
    }
    else
    {
        std::cout << "Тебе мозги вправить, а то мне тут уже стоять счучно. НЕ собираюсь я от тебя это выслушивать\n";
    }
    
       
    
    



}

void Bar() {

    std::string sentence = "Выйграл у очередных олухов пару десятков зеленых\n";
    std::string reaction1 = "Ты будто в этой бухте живешь. Как не приду, ты всегда тут";
    std::string reaction2 = "Твоей вежливости нет предела, как и твоему сарказму";
    std::string reaction3 = "Скорее наколол очередных лохов, обычно ты этим занимаешся";
    std::string otvet;
      

    std::cout << "Доброго вечера, мой заблудший друг\n";
    std::cout << "Как видешь пока тебя не было, я зря вмемя не терял";

    if (otvet == reaction1)
    {
        std::cout << "Ты"
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







