/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:31 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:33:47 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    // std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    // std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy), _target(copy._target)
{
    // std::cout << "ShrubberyCreationForm copy constructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void    ShrubberyCreationForm::Action() const
{
    std::ofstream   outfile;
    std::string     filename;

    filename = getTarget().append("_Shrubbery");
    outfile.open(filename);
    if (outfile.is_open())
    {
        outfile << "              _{\\ _{\\{\\/}/}/}__\n";
		outfile << "             {/{/\\}{/{/\\}(\\}{/\\} _\n";
		outfile << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
		outfile << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
		outfile << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
		outfile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
		outfile << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
		outfile << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
		outfile << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
		outfile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
		outfile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
		outfile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
		outfile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
		outfile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
		outfile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
		outfile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
		outfile << "             {/{\\{\\{\\/}/}{\\{\\}/}\n";
		outfile << "              {){/ {\\/}{\\/} \\}\\}\n";
		outfile << "              (_)  \\.-'.-/\n";
		outfile << "          __...--- |'-.-'| --...__\n";
		outfile << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n";
		outfile << " -\"    ' .  . '    |.'-._| '  . .  '   \n";
		outfile << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
		outfile << "          ' ..     |'-_.-|\n";
		outfile << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
		outfile << "              .'   |'- .-|   '.\n";
		outfile << "  ..-'   ' .  '.   `-._.-`   .'  '  - .\n";
		outfile << "   .-' '        '-._______.-'     '  .\n";
		outfile << "        .      ~,\n";
		outfile << "    .       .        .    ' '-.\n";
		outfile.close();
		std::cout << "File created successfully!!\n";
    }
    else
        std::cerr << "Error : Can't open the file\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor called\n";
}