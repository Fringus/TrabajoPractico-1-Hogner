#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::Texture texturaPersonaje;
	sf::Texture texturaEnemigo;
	sf::Sprite enemigo;
	sf::Sprite personaje;

	if (!texturaPersonaje.loadFromFile("personaje.png"))
	{
		printf("ASD");
	}

	texturaPersonaje.loadFromFile("personaje.png");
	personaje.setTexture(texturaPersonaje);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			personaje.move(-0.03f, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			personaje.move(0.03f, 0);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			personaje.move(0, -0.03f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			personaje.move(0, 0.03f);

		window.draw(personaje);
		window.display();
	}
	return 0;
}