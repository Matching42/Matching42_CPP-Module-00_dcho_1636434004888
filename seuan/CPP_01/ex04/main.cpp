#include <iostream>
#include <fstream>

std::string replace_f_name(char *f_name)
{
    std::string rtn = f_name;

    int f_idx =  rtn.find(".txt");

    rtn.erase(f_idx);
    rtn.insert(f_idx, ".replace");
    return (rtn);
}

void replace_contents(std::string *contents, std::string s1, std::string s2)
{
    int idx = 0;

    while (contents->find(s1, idx) != std::string::npos)
    {
        idx = contents->find(s1, idx);
        contents->erase(idx, s1.length());
        contents->insert(idx, s2);
        idx += s2.length();
    }
}

int main (int ac, char **av) 
{
    if (ac == 4)
    {
        std::string s1(av[2]);
        std::string s2(av[3]);
        std::ifstream infile(av[1]);
        std::ofstream outfile(replace_f_name(av[1]));
        std::string contents;

        if (!s1.length() || !s2.length())
            return (0);
        if (infile.is_open() && outfile.is_open())
        {
            infile.seekg(0, std::ios::end);
            int size = infile.tellg();
            contents.resize(size);
            infile.seekg(0, std::ios::beg);
            infile.read(&contents[0], size);

            replace_contents(&contents, s1, s2);
            outfile << contents;
            std::cout << "Replace succeed." << std::endl;
        }
        else 
            std::cout << "Unable to open file." << std::endl; 
    }
    else
    {
        std::cout << "Replace failed." << std::endl;
        std::cout << "Usage: ./replace FINENAME s1 s2" << std::endl;
        return (0);
    }
    return (0);
}
