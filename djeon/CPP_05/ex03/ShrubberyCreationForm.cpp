/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:27 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:27:36 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("default", "default", 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("default", target, 145, 137) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &input) : Form(input) { }

ShrubberyCreationForm::NotOpenFileException::NotOpenFileException(std::string input) : message(input) { }

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

ShrubberyCreationForm::NotOpenFileException::~NotOpenFileException(void) throw() { }

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &input) {
    Form::operator = (input);
    return *this;
}

const char* ShrubberyCreationForm::NotOpenFileException::what() const throw() {
    return message.c_str();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    std::ofstream writeFile;
    std::string fileName = getTarget() + "_shrubbery";
    Form::execute(executor);
    writeFile.open(fileName);
    if (!writeFile.is_open())
        throw NotOpenFileException("not open file");
    writeFile <<"                               $"<< std::endl;
    writeFile <<"                              :$$"<< std::endl;
    writeFile <<"                         seeee$$$Neeee"<< std::endl;
    writeFile <<"                           R$$$F$$$$F"<< std::endl;
    writeFile <<"                             $$$$$$"<< std::endl;
    writeFile <<"                            @$$P*$$B"<< std::endl;
    writeFile <<"                           z$#\"  $#$b"<< std::endl;
    writeFile <<"                           \" d   'N \""<< std::endl;
    writeFile <<"                            @\"     ?r"<< std::endl;
    writeFile <<"                          xF .       \"N"<< std::endl;
    writeFile <<"                       .$&gt; P54.R       `$"<< std::endl;
    writeFile <<"                     $*   '*\"$$$  uoP***~"<< std::endl;
    writeFile <<"                      #Noo \"?$N\"   #oL"<< std::endl;
    writeFile <<"                         f       o$#$$\"e."<< std::endl;
    writeFile <<"                        $  @b    hoR$$r ^\"$$b"<< std::endl;
    writeFile <<"                     .M   ?B$E   *.B$$       .R"<< std::endl;
    writeFile <<"                   .*     *\\ *.4*R         ..*"<< std::endl;
    writeFile <<"                oo#     ooL    d#R.     P##~"<< std::endl;
    writeFile <<"                $c    .\"\"P#$  @   P     k"<< std::endl;
    writeFile <<"                  R$r ''?L$$  P  \"r     'N"<< std::endl;
    writeFile <<"                    ^$ \"$$$` $.....JL     \"N."<< std::endl;
    writeFile <<"                  .$\\           * P5\"LR      $.."<< std::endl;
    writeFile <<"               ..* 4*R     xr    'PFN$$   .k    \"*****."<< std::endl;
    writeFile <<"            od#\"   d#*.  \"*$$P~   \"?$*\" '#$$$\"       u\""<< std::endl;
    writeFile <<"         e\"\"      f   M   @F\"$  ec       x$\"$.     :\""<< std::endl;
    writeFile <<"         M        &gt;  \"d       $$$$?$           .$$F`"<< std::endl;
    writeFile <<"          \"P..  .$.....$L $$.4$$. \"   @#3$$   $E."<< std::endl;
    writeFile <<"             '**..  *   R..$$ `R$*k.  fdM$$&gt;     *.."<< std::endl;
    writeFile <<"               J\"       *k$$$~  \"*$**o$o$$P        '*oo."<< std::endl;
    writeFile <<"              P           #        \"$$$#*o          &gt;  '####*oooo"<< std::endl;
    writeFile <<"           .e\"            :e$$e.  F3  ^\"$P  :$$s :e@$ee        s\""<< std::endl;
    writeFile <<"         $P` M7&gt;    $P$$k \"$\"?$3 @\"#N      CxN$$&gt; .$$$       .P"<< std::endl;
    writeFile <<"      M$~   J\\##   44N&gt;$$  .d$.$d   @&amp;      `$$$  F  .8..$$$*"<< std::endl;
    writeFile <<"  .***     :   JM   *d$$*.$$.P  M  .P5     M          **."<< std::endl;
    writeFile <<"  \"oo      J  .dP    ud$$od#   $oooooo$  oo$oo           ###ou"<< std::endl;
    writeFile <<"     \"####$beeeee$.'$eeP#~        \"\"      $$$.    e$$$o       #heeee"<< std::endl;
    writeFile <<"        :\"    \" z$r ^            o$N     '\"  \"   4$z&gt;$$             \"\"\"#$$$"<< std::endl;
    writeFile <<"       .~      F$4$B       r    F @#$.       ..   $8$$P M7                $"<< std::endl;
    writeFile <<"     .*  $     8 $$B     .J$..  hP$$$F     .'PB$       J~##             .d~"<< std::endl;
    writeFile <<"   .P  *$$$*    \"*\"       $$$    #**~      hdM$$&gt;     &lt;   JM.......*****"<< std::endl;
    writeFile <<" .P     $#*k       .o#&gt;  P\" \"k   ..         '$$P      d  .JP'h"<< std::endl;
    writeFile <<"\"\"\"hr ^        xe\"\"  &gt;          \"\"c           ee    @beeeee$.)"<< std::endl;
    writeFile <<"      \"\"\"t$$$$F\"      M        $`   R          &gt; \"$r     \"     \"c"<< std::endl;
    writeFile <<"                              oooooooooo"<< std::endl;
    writeFile <<"                              z        z"<< std::endl;
    writeFile <<"                              z.,ze.$$$z"<< std::endl;

    writeFile.close();
}