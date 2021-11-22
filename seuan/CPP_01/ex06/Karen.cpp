#include "Karen.hpp"

Karen::Karen(void)
{
    std::cout << "Karen Constructor called" << std::endl;
}

Karen::~Karen(void)
{
    std::cout << "Karen Destructor called" << std::endl;;
}

void Karen::debug(void)
{
    std::cout << "[ DEBUG LEVEL ]" << std::endl;
    std::cout << "😁 나는 패티 7장이랑 피클 3개 추가한 더블 쿼터 파운더 치즈 버거에 베이컨 서비스 받는 게 너무 좋아. 너무 맛있엉!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO LEVEL ]" << std::endl;
    std::cout << "🤔 햄버거에 베이컨을 추가하는 데 추가금이 든다니, 믿을 수 없어! 쥐꼬리만큼 넣어주잖아! 이딴 식이면 추가해달라고 하지도 않았겠지!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING LEVEL ]" << std::endl;
    std::cout << "😡 솔직히 난 베이컨을 무료로 추가 받을 자격이 있다고 생각해. 난 여기 몇 년째 단골손님이지만, 당신은 저번 달부터 근무한 초짜잖아." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR LEVEL ]" << std::endl;
    std::cout << "😤 몰라, 난 용납 못해. 매니저 부를거야." << std::endl;
}

std::string str_to_upper(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

void Karen::complain(std::string level)
{
    std::string lv[4] = 
    { "DEBUG", "INFO", "WARNING", "ERROR" };

    void (Karen::*ptr[])(void) = 
    { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    level = str_to_upper(level);

    int lv_val = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == lv[i])
        {
            lv_val = i;
            break ;
        }
    }
    switch (lv_val)
    {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}

