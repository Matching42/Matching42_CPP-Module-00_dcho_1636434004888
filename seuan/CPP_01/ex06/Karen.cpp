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
    std::cout << "๐ ๋๋ ํจํฐ 7์ฅ์ด๋ ํผํด 3๊ฐ ์ถ๊ฐํ ๋๋ธ ์ฟผํฐ ํ์ด๋ ์น์ฆ ๋ฒ๊ฑฐ์ ๋ฒ ์ด์ปจ ์๋น์ค ๋ฐ๋ ๊ฒ ๋๋ฌด ์ข์. ๋๋ฌด ๋ง์์!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO LEVEL ]" << std::endl;
    std::cout << "๐ค ํ๋ฒ๊ฑฐ์ ๋ฒ ์ด์ปจ์ ์ถ๊ฐํ๋ ๋ฐ ์ถ๊ฐ๊ธ์ด ๋ ๋ค๋, ๋ฏฟ์ ์ ์์ด! ์ฅ๊ผฌ๋ฆฌ๋งํผ ๋ฃ์ด์ฃผ์์! ์ด๋ด ์์ด๋ฉด ์ถ๊ฐํด๋ฌ๋ผ๊ณ  ํ์ง๋ ์์๊ฒ ์ง!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING LEVEL ]" << std::endl;
    std::cout << "๐ก ์์งํ ๋ ๋ฒ ์ด์ปจ์ ๋ฌด๋ฃ๋ก ์ถ๊ฐ ๋ฐ์ ์๊ฒฉ์ด ์๋ค๊ณ  ์๊ฐํด. ๋ ์ฌ๊ธฐ ๋ช ๋์งธ ๋จ๊ณจ์๋์ด์ง๋ง, ๋น์ ์ ์ ๋ฒ ๋ฌ๋ถํฐ ๊ทผ๋ฌดํ ์ด์ง์์." << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR LEVEL ]" << std::endl;
    std::cout << "๐ค ๋ชฐ๋ผ, ๋ ์ฉ๋ฉ ๋ชปํด. ๋งค๋์  ๋ถ๋ฅผ๊ฑฐ์ผ." << std::endl;
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

