#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>
void slow_print(const std::string& text, int delay_ms) {
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << std::endl;
}
struct RageLevel {
    std::string phrase;
    int danger_level;
};
int main() {
    std::cout << "\033[1:31m ИНИЦИАЛИЗАЦИЯ С++ ТЕРМИНАЛА 'АНТИ-ШИЗОФРЕНИК'...\033[0m" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::vector<RageLevel> database = {
        {"ТЫ ЧТО ХУЙНЮ КАКУЮ ТО НЕСЁШЬ?", 10},
        {"ПЕНСИОНЕРКА КАКОЕ ТО МЫЛО-MAIL РАЗДАЁТ, ТЫ АХУЕЛ?", 100},
        {"ПАСКУДА! ГДЕ МОИ КЛЮЧИ SSH ОТ ДОМОФОНА?", 50},
        {"НЕ НУЖЕН МНЕ ВАШ ЧЁРТОВЫЙ ДОМОФОН!", 999},
        {"ИДИ, БЛЯТЬ, ПОКА НЕ ПОЗДНО К ПСИХИАТРУ, ТЫ ЖЕ ЁБНУЛСЯ", 88},
        {"ХУЙ СОРВАЛСЯ ЧТО ЛИ? 2 ГБ НА ДИСКЕ С!", 2},
        {"ЩАС КИСЛОТОЙ...КИСЛОТОЙ КАК ЕБАНУ!!!", 500},
        {"ТЫ ЧТО, ЯЩЕРИЦУ-ХАКЕРА ИЗ OPENSUSE МНЕ ПОДКИНУЛ?", 77},
        {"Я ЩАС 02 ВЫЗОВУ! ТЫ СЛЫШИШЬ? ТЕБЯ РАЗЫСКИВАЕТ КОННАЯ МИЛИЦИЯ", 1000}
    };
    slow_print("--- НАЧИНАЮ ДОПРОС ОБЪЕКТА 'SHIZOPHRENIK' ---", 100);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    for (const auto& entry : database) {
        if (entry.danger_level > 50) {
            std::cout << "\033[1;33m[КРИТИЧЕСКИЙ УРОВЕНЬ ЯРОСТИ]: \033[0m";
        } else {
            std::cout << "[ВОРЧАНИЕ БАБУШКИ]: ";
        }
        slow_print(entry.phrase, 40);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "\n ВАЛЕНТИНА ПЕТРОВНА СМОТРИТ ТЕБЕ В ГЛАЗА. ЧТО ТЫ ЕЙ СКАЖЕШЬ?: ";
    std::string answer;
    std::getline(std::cin, answer);
    if (answer. find("php") != std::string::npos) {
        std::cout << "\033[1;41m ОШИБКА МОЗГА! \033[0m" << std::endl;
    } else {
        slow_print("ХУЙ СОРВАЛСЯ ЧТО ЛИ? КАКАЯ ТО СИСТЕМА...", 100);
    }
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "\n ВЕРДИКТ: ДАВНО ЁБНУЛСЯ? ИДИ К ПСИХИАТРУ!" << std::endl;
    return 0;
}