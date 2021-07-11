#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "SString.h"

#include "Module.h"
#include "PugiXml/src/pugixml.hpp"
#include "SDL/include/SDL.h"

class App;

class Player : public Module
{
public:

	Player() : active(false)
	{}

	void Init()
	{
		active = true;
	}

	// Called before render is available
	// L01: DONE 5: Sending config file to all modules
	bool Awake(pugi::xml_node&) override;

	// Called before the first frame
	bool Start() override;


	// Called each loop iteration
	bool PreUpdate() override;


	// Called each loop iteration
	bool Update(float dt) override;


	// Called each loop iteration
	bool PostUpdate() override;


	// Called before quitting
	bool CleanUp() override;

	// Player movement 
	int position_x;
	int position_y;
	float angle;

	SDL_Rect player_sprite;
	SDL_Texture* sprite_sheet;
	

public:

	SString name;
	bool active;

};

#endif // __MODULE_H__