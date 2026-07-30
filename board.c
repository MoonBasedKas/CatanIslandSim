struct tile *init_tile(int number, int type){
	struct tile *new = malloc(sizeof(struct tile));
	new->number = number;
	new->type = type;
	new->settlements = malloc(sizeof(struct settlements) * 6);
	memset(new->settlements, sizeof(settlements * 6, 0));
	return new;
}

struct map *init_map(){

}

int **mapdata(char *file){
	char *buffer = malloc (16);//
	int **data = malloc(sizeof(int *) * MAPSIZE); 
	FILE fp = fopen(file);



	free(buffer);
}

