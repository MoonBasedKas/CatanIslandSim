struct settlement{
	int player;
};

struct player{
	int wood,
	int stone,
	int sheep,
	int wheat,
	int brick
	int settlements;
	struct settlement **houses;
};
