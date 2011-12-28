#ifndef __ENGINE_H__
#define __ENGINE_H__

#include <SDL/SDL.h>
#include "backgammon.h"


#define IA 1
#define HUMAN 2

typedef struct player_infos
{
	char *nameP1;
	int typeP1;
	
	char *nameP2;
	int typeP2;

} player_infos;

typedef struct message
{
	char *text;
	SDL_Rect position;
	
}message;

typedef struct list_messages
{
	message tab[10];
	int nb_messages;
	
	
}list_messages;

//initialise la structure player_infos avec le nom de chaque joueur et son type (IA ou HUMAN)
void init_player(player_infos*, char *nameP1, int typeP1, char *nameP2, int typeP2);

//initialise l'état du jeu au départ
void init_game(SGameState*);

void add_message(list_messages*, char* , int x, int y, int width, int height);

#endif
