#include <iostream> //Always #include <> before ""
#include <vector>
#include <list>
#include <tuple>
#include <array>

struct Position
{
	float x{};//always give default values!!!
	float y{};
};
struct Player
{
	Position position; 
	int health{ 0 };
	int strength{ 0 };

};
struct Monster
{
	Position position{ 0,0 };
};
int main()
{
	Player player5;
	//lesson 1: Accessing parts of a struct
	player5.position.x = 3;
	player5.position.y = 4;
	player5.health = 20;
	player5.strength = 5;
	//Lesson 2: cin/cout into parts of a struct
	//YOU CAN'T cin/cout into user defined types!!!
	//std::cin >> player5.health;
	//std::cin >> player5.position.x;
	std::cout << player5.health << " " << player5.position.x << std::endl;
	
	//Lesson 3: uniform initialization of a struct
	Player player6{ {5,6}, 30, 2 };


	//lesson 4: creating and initializing an array.
	std::array<int, 5> myArray{ 3, 4, 5, 6, 7 };
	//lesson 5: accessing slots  in an array.
	myArray.at(0) = 6;
	
	//lesson 6: going to far!
	//myArray.at(6);

	//lesson 7: array of structs!
	std::array<Player, 5> allPlayers;
	allPlayers.at(0).position.x = 12;
	allPlayers.at(0).position.y = 15;
	allPlayers.at(0).health = 4;
	allPlayers.at(0).strength = 10;
	allPlayers.at(1).health = 6;
	allPlayers.at(2).health = 7;
	allPlayers.at(3).health = 8;
	allPlayers.at(4).health = 9;
	
	std::array<std::array<int, 4>, 3> myArray5;
	//myArray5.at(0).at(10) = 3;
	std::cout << myArray5.size();
	//int myArray5[3][4];
	//myArray5[2][10] = 3;
	
	//lesson 8:  vectors
	//initializing
	std::vector<int> VI{ 1,2,3,6,7,8,23 };
	//starting  with a number  of slots!
	std::vector<int> v(4);
	v.at(0) = 1;
	v.at(1) = 2;
	v.at(2) = 3;
	v.at(3) = 4;
	
	//  vector of structs!
	std::vector<Player> VP{ 
		//position, strength, health 
		{{1,5}, 3, 25}, 
		{{-6, 4},32, 3 } 
	};
	//pushing an empty struct
	VP.push_back(Player());
	//using .back()  to get the last item just pushed!
	VP.back().health = 12;
	VP[VP.size() - 1].position.y = -3;
	VP.at(0).strength = 2;
	VP.at(0).position.x = 12;
	
	VP.push_back(Player());
	VP.back().health = -2;
	VP.at(1).strength = 6;
	
	//push_back() creates a copy!
	Player player1;
	player1.position.x = 1;
	player1.position.y = 2;
	player1.health = 5;
	player1.strength = 3;
	VP.push_back(player1);
	player1.position.x = -6;
	VP.push_back(player1);
	Player player2;
	player2.position.x = -3;
	player2.position.y = 8;
	player2.health = 4;
	player2.strength = 4;
	
	std::array<Player, 7> players;
	
	players.at(0).position.x = -1;
	players.at(0).position.y = 3;
	players.at(0).health = 2;
	players.at(0).strength = 7;
	
	players.at(1).position.x = -3;
	players.at(1).position.y = -10;
	players.at(1).health = 12;
	players.at(1).strength = 1;

	std::vector<Player> vPlayers;
	vPlayers.push_back(Player());
	vPlayers.back().position.x = -2;
	vPlayers.at(0).position.y = 12;
	vPlayers.at(0).health = 6;
	
	vPlayers.push_back(player2);
	player2.position.x++;
	std::cout << vPlayers.size() << std::endl;
	//.at does boundary checking i.e. [] may access memory it shouldn't!!!!
	//.at is slower!
	std::cout << "Player 1: " << vPlayers.at(0).position.x << ", " << vPlayers.at(0).position.y << std::endl;
	std::cout << "Player 2: " << vPlayers.at(1).position.x << ", " << vPlayers.at(1).position.y << std::endl;
	
	std::tuple<Player, std::string> George{ player1, "George" };

	auto & [player3, p3Name] = George;
	p3Name = "Carl";
	std::cout << p3Name;
	std::cout << player3.health;
	auto [position3, strength3, health3] = player3;
	std::cout << health3;
	return 0;
}