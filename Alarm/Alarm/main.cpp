#include"_Clock.hpp"


#define W_WIDTH 480
#define W_HEIGHT 720



int main()
{
	sf::RenderWindow window(sf::VideoMode(W_WIDTH, W_HEIGHT), "Alarm Clock", sf::Style::Default);
	window.setFramerateLimit(60);
	
	sf::Text text;
	sf::Font font;
	init_font(font, "Minor.ttf");
	




	std::cout << get_current_time();



	while (window.isOpen())
	{
		
		init_text(font, text, get_current_time(), 36, sf::Color::White, 105, 50);
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch(event.type)
			{
			case sf::Event::Closed:
					window.close();
					break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
					window.close();
				    break;
			}





			window.clear(sf::Color::Black);


			window.draw(text);


			window.display();
		}
	}
	return 0;

}
