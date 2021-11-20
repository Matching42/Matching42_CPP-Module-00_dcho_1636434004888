#include <iostream>
#include <fstream>

int is_same_str(std::string str, std::string s1, int i)
{
    std::string tmp;
    int len = s1.length();

    while (len--)
        tmp += str[i++];
    for (int j = 0; j < tmp.length(); j++)
    {
        if (tmp[j] != s1[j])
            return (0); 
    }
    return (1);
}

std::string replace_str(std::string str, std::string s1, std::string s2)
{
    std::string rtn;
    std::string tmp;
    int i = 0;

    while (str[i])
    {
        if (str[i] == s1[0])
        {
            if (is_same_str(str, s1, i))
            {
                rtn += s2;
                for (int j = 0; j < s1.length(); j++)
                    i++;
            }
            else
                rtn += str[i++];
        }
        else
            rtn += str[i++];
    }
    return (rtn);
}

int main (int ac, char **av) 
{
    if (ac == 3)
    {
        std::string s1 = av[1];
        std::string s2 = av[2];
        
        if (!s1.length() || !s2.length())
            return (0);
        std::cout << "Strings input succeed." << std::endl;

        std::string line;
        std::string replace;
        std::ifstream infile ("example.txt");
        std::ofstream outfile("example.replace");

        if (infile.is_open() || outfile.is_open())
        {
            while ( std::getline(infile,line) )
            {
                replace = replace_str(line, s1, s2);
                outfile << replace << std::endl;
            }
            infile.close();
            outfile.close();
            std::cout << "Replace suceed." << std::endl;
        }
        else 
            std::cout << "Unable to open file"; 
    }
    else
    {
        std::cout << "Replace failed." << std::endl;
        std::cout << "Usage: ./replace s1 s2" << std::endl;
        return (0);
    }
    return (0);
}
