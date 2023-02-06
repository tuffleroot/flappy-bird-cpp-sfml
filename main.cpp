#include<SFML/Graphics.hpp>
#include"Globals.h"
#include"Game.h"
int main()
{
	sf::RenderWindow win(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "Flappy Bird");
	Game game(win);
	game.startGameLoop();
	return 0;
}