#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Config.hpp>
#include<SFML/Main.hpp>
#include<SFML/GpuPreference.hpp>



int main()
{
	sf::Window window(sf::VideoMode(1360, 720), "Alarm Clock",sf::Style::Resize);
	while (window.isOpen()) 
	{
		sf::Event event;
		while (window.pollEvent(event)) 
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}
	return 0;

}
