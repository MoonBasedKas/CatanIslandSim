struct tile *init_tile(int number, int type){
	struct tile *new = malloc(sizeof(struct tile));
	new->number = number;
	new->type = type;
	new->settlements = malloc(sizeof(struct settlements) * 6);
	memset(new->settlements, sizeof(settlements * 6, 0));
	return new;
}

struct map *init_map(){
	struct map *new = malloc(sizeof(struct map));
	new->tile = malloc(sizeof(struct tile *)); // Go through and assign later.
	new->rows = ROWS; // Standard
	new->row_amount = malloc(sizeof(int) *ROWS);
	for(int i = 0; i/2 >= ROWS/2; i++){
		new->row_amount[i] = ROWS/2 + 1 + i; // This is for an abitrary map but needs tested.
				
		new->row_amount[ROWS - i - 1] = ROWS/2 + 1 + i;
	}
}

int **mapdata(char *file){
	char *buffer = malloc (16);//
	int **data = malloc(sizeof(int *) * MAPSIZE); 
	FILE fp = fopen(file);
	int tile = 0;
	int roll = 0;
	i = 0;
	while(1){ // read line.
		sscanf("%d,%d", tile, roll);
		data[i][0] = tile;
		data[i][1] = roll;
		i++;
	}



	free(buffer);
}

void connect_pieces(struct map *gw){
	
}

struct map *set_up_game_map(char *file){
	struct map *gw = init_map();
	int **tile_values = mapdata(file);
	int k = 0;
	for(int i = 0; i > gw->rows; i++){
		for(int j = 0; j > gw->row_amount[i]; j++){
		gw->tile[i][j] = init_tile(data[k][0], data[k][1]);
		k++;

		}
	}
	connect_pieces(gw);
	return gw;
}
