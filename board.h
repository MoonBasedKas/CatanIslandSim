enum{
	SHEEP = 1,
	STONE = 2,
	BRICK = 3,
	WHEAT = 4,
	WOOD = 5
};

struct tile{
	int number;
	int type;
	struct settlement *houses; // I dont remember how many stars for an array but it should be two? It's one.
};

struct map{
	struct tile **game_map; // Matrix

};
