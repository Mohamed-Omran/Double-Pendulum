#include "Interface.h"

Interface::Interface() {
	window.create(sf::VideoMode(800, 600), "MOHAMED");
}



void Interface:: control() {

		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
}
void Interface::clear() {

	window.clear(sf::Color::Black);
}


void Interface::drawDP(double m1, double m2, double l1, double l2, double theta1, double theta2, sf::Vector2f pos) {

	double conv = 3.14192 / 180.0;
	sf::Vector2f center1 (pos.x + l1 * sin(theta1 ),(float) pos.y + l1 * cos(theta1 ) );
	sf::Vector2f center2 ( center1.x + l2 * sin(theta2 ), center1.y + l2 * cos(theta2));
	
	cout << theta1 << "  " << theta2 << endl;
	 //cout << center1.x << "  " << center1.y << "  " << center2.x << "  " << center2.y << endl;
	// origin circle:
	sf::CircleShape origin(7.0);
	origin.setOrigin(7.0,7.0);
	origin.setPosition(pos);
	origin.setFillColor(sf::Color::Green);
	window.draw(origin);

	// mass1 :
	sf::CircleShape mass1(15.0);
	mass1.setOrigin(15.0,15.0);
	mass1.setPosition(center1);
	mass1.setFillColor(sf::Color::Green);
	window.draw(mass1);


	sf::CircleShape mass2(10.0);
	mass2.setOrigin(10.0,10.0);
	mass2.setPosition(center2);
	origin.setFillColor(sf::Color(250,50,40));
	//cout << mass2.getPosition().x << "  " << mass2.getPosition().y << endl;
	window.draw(mass2);




	//// first arm:
	//sf::RectangleShape line1(sf:: Vector2f(l1,3.0));
	//line1.setOrigin(pos);
	//line1.setRotation(theta1);
	//line1.setFillColor(sf::Color::Cyan);
	//window.draw(line1);
	//
	

}

void Interface::display() {
	window.display();
}