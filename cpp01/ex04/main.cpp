/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danevans <danevans@student.42.f>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:56:06 by danevans          #+#    #+#             */
/*   Updated: 2024/09/25 10:44:01 by danevans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <iterator>

void	ft_search(std::string& file_content, const std::string& s1, const std::string& s2){
	size_t pos = 0;
	while ((pos = file_content.find(s1, pos)) != std::string::npos){
		file_content.erase(pos, s1.length());
		file_content.insert(pos, s2);
		pos += s2.length();
	}
	
}

int main (int ac, char *argv[]){
	if (ac != 4){
		std::cout << "Usage: " << "<filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1] ;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string newFile = filename + ".replace";
	
	std::ifstream inputFile(filename.c_str());
	if (!inputFile){
		std::cerr << "Error, couldnt open file" << std::endl;
		return 1;
	}
	std::string file_content((std::istreambuf_iterator<char>(inputFile)),std::istreambuf_iterator<char>());
	inputFile.close();
	ft_search(file_content, s1, s2);
	std::ofstream outputFile(newFile.c_str());
	if (!outputFile){
		std::cerr << "Error, couldnt create file" << std::endl;
		return 1;
	}
	outputFile << file_content;
	outputFile.close();
}