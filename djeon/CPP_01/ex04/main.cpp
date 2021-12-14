/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:38:21 by djeon             #+#    #+#             */
/*   Updated: 2021/11/25 09:57:55 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {
    int index;
    std::string str;
    std::ifstream readFile;
    std::ofstream writeFile;

    if (argc != 4) {
        std::cout << "please input arg, format : (file name) (str1) (str2)" << std::endl;
        return -1;
    }
    if (argv[1] == '\0' || argv[2] == '\0' || argv[3] == '\0') {
        std::cout << "invalid arg" << std::endl;
        return -1;
    }

    std::string before(argv[2]);
    std::string after(argv[3]);
    std::string output_file(argv[1]);
    output_file += ".replace";
    readFile.open(argv[1]);
    writeFile.open(output_file);
    if (readFile.is_open()) {
        while (!readFile.eof()) {
            getline(readFile, str); // 개행을 제외한 문자열만 str에 입력된다.
            str += '\n';
            index = -1;
            while (str.find(before, index + 1) != std::string::npos) {
                index = str.find(before, index + 1);
                str.erase(index, before.length());
                str.insert(index, after);
            }
            writeFile.write(str.c_str(), str.size()); // 첫번째 인자로 const char* 형만 입력될 수 있다. string in c != string in cpp
        }
        readFile.close();
        writeFile.close();
    }
    else
        std::cout << "invalid file" << std::endl;
    return 0;
}
