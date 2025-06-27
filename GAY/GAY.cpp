// GAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
void distance();
void Bar();



struct GG
{
    unsigned age;
    std::string name;
    int hp;
    unsigned attack;
    unsigned weapon;
    
};




    GG Duglas;
    GG enemy;
    



       






void game() {
 
    int bot = 1 + rand() % 3;
    int user;
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

void InitGame() {


    Duglas.hp = 100;
    Duglas.attack = 10;
    Duglas.name = "Duglas";
    Duglas.age = 23;


    enemy.name = "guard";
    enemy.age = 37;
    enemy.weapon = 15;
    enemy.hp = 120;

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
        Bar();
    }
    else if (otvet == pasword1) {
        std::cout << "Что, решил потопить за собирателей урожая, ты либо пьян, либо отупел\n";
    }
    else
    {
        std::cout << "Тебе мозги вправить, а то мне тут уже стоять счучно. НЕ собираюсь я от тебя это выслушивать\n";
    }
    
       
}

    void Interface() {

    }

void Fight() {

    
    int chance = 1 + rand() % 100;

    int choice;

    std::cin >> choice;




    switch (choice)
    {
    case 1: {
        std::cout << "Удар по голове\n";

        if (chance <= 20) {
            int r = Duglas.attack + (1 + rand() % 35);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLASS ATTACK\t" << r << std::endl << 
            "ENEMY HP \t" << enemy.hp << std::endl;

        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;

        }
            std::cout << "HP DUGLAS: \t" << Duglas.hp <<
            std::endl << "ENEMY HP \t" << enemy.hp << std::endl;
    }
        break;
        
        

    case 2:
        std::cout << "Удар по груди\n";

        if (chance <= 35){
        int r = Duglas.attack + (1 + rand() & 30);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLAS ATTACK\n" << r << std::endl;
            
        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;
        }
        std::cout << "HP DUGLAS: \t" << Duglas.hp <<
            std::endl << "ENEMY HP \t" << enemy.hp << std::endl;
        break;


    case 3:
        std::cout << "Удар по рукам\n";

        if (chance <= 70) {
            int r = Duglas.attack + (1 + rand() & 15);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLAS ATTACK\n" << r << std::endl <<
                "ENEMY HP \t" << enemy.hp << std::endl;

           
           
        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;
        }
        std::cout << "HP DUGLAS: \t" << Duglas.hp <<
            std::endl << "ENEMY HP \t" << enemy.hp << std::endl;
        break;


    case 4:
        std::cout << "Удар по животу\n";

        if (chance <= 40) {
            int r = Duglas.attack + (1 + rand() & 20);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLAS ATTACK\n" << r << std::endl <<
                "ENEMY HP \t" << enemy.hp << std::endl;

        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;
        }
        std::cout << "HP DUGLAS: \t" << Duglas.hp;
        break;


    case 5:
        std::cout << "Удар в пах\n";

        if (chance <= 30) {
            int r = Duglas.attack + (1 + rand() & 40);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLAS ATTACK\n" << r << std::endl;

        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;
        }
        std::cout << "HP DUGLAS: \t" << Duglas.hp <<
            std::endl << "ENEMY HP \t" << enemy.hp << std::endl;
        break;


    case 6:
        std::cout << "Удар по ногам\n";

        if (chance <= 25) {
            int r = Duglas.attack + (1 + rand() & 20);
            enemy.hp -= r;
            std::cout << "POPAL\n" << "DUGLAS ATTACK\n" << r << std::endl;
        }
        else {
            std::cout << "MISS\n";
            Duglas.hp -= Duglas.attack + enemy.weapon;
        }
        std::cout << "HP DUGLAS: \t" << Duglas.hp <<
            std::endl << "ENEMY HP \t" << enemy.hp <<
        break;

    }




}







void Bar() {

    std::string sentence = "Выйграл у очередных олухов пару десятков зеленых\n";
    std::string reaction1 = "Ты будто в этой бухте живешь. Как не приду, ты всегда тут\n";
    std::string reaction2 = "Твоей вежливости нет предела, как и твоему сарказму\n";
    std::string reaction3 = "Скорее наколол очередных лохов, обычно ты этим занимаешся\n";

    int otvet;


    std::cout << "Доброго вечера, мой заблудший друг\n";
    std::cout << "Как видешь пока тебя не было, я зря вмемя не терял\n";
    std::cout << sentence << std::endl << "1. " << reaction1 << "2. " << reaction2 << "3. " << reaction3;
    std::cin >> otvet;

    switch (otvet)
    {
        case 1: 
            std::cout << "Ты знаещь в округе похожую дыру где можно проворачивать такие схемы" << "\n";
            break;
        

        case 2: 

            std::cout << "Я не позволяю себе вести подобно этому пьющему сброду, невеже Джимми и дубине Монти. Я с уважением отношусь даже к своему врагу " << "\n";
            break;
        
        case 3: 


            std::cout << "Они сами виноваты, что целенаправлено несут мне свои деньги, не зная моих правил" << "\n";
            break;
        

          deafault: 
              std::cout << "ZALUPA" << "\n";
              break;
        



    }

    std::cout << "Кстати, а где Джимми и Монти?\n";
    std::cout << "'Бритва' около бара, ножы свои в стоб метает\n";
    std::cout << "Монти где-то ходит, как всегда\n";









}


//
int main()
{

 SetConsoleCP(1251);
 srand(time(NULL));
 setlocale(LC_ALL, "Russian");
  
InitGame();
 
 std::cout << "Name : " << Duglas.name << " \nAge : " << Duglas.age << std::endl;
 

 





 //game();
 //start();
 //Street();
 //Bar();
 while (Duglas.hp > 0 && enemy.hp > 0) {
 Fight();

 }
}








