#pragma once
#pragma warning(disable: 4996)
#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Config.hpp>
#include<SFML/Main.hpp>
#include<SFML/GpuPreference.hpp>
#include<iostream>
#include<ctime>



void init_font(sf::Font& font,const char* filename) 
{
	if (!font.loadFromFile("Minor.ttf"))
		std::cout << "PUT YOUR FONT BACK,DUMBASS\n";
	else std::cout << "FONT LOADED SUCCESSFULLY\n";
};

void init_text(sf::Font& font,sf::Text& text,std::string writing,unsigned int charactersize,sf::Color color,float pos_x,float pos_y)
{
	text.setFont(font);
	text.setString(writing);
	text.setCharacterSize(charactersize);
	text.setFillColor(color);
	text.setStyle(sf::Text::Bold);
	text.setPosition(pos_x, pos_y);

}

std::string get_current_time()
{
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M", timeinfo);
	std::string str(buffer);
	return str;
};