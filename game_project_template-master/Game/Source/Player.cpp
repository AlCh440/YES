#include "Player.h"
#include "App.h"
#include "Textures.h"

bool Player::Awake(pugi::xml_node&)
{
    return true;
}

bool Player::Start()
{
    sprite_sheet = app->tex->Load("Assets/Texture/sprite_sheet.png");

    return true;
}

bool Player::PreUpdate()
{
    return true;
}

bool Player::Update(float dt)
{
    return true;
}

bool Player::PostUpdate()
{
    return true;
}

bool Player::CleanUp()
{
    return true;
}
