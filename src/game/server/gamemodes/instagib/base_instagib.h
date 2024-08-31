#ifndef GAME_SERVER_GAMEMODES_INSTAGIB_BASE_INSTAGIB_H
#define GAME_SERVER_GAMEMODES_INSTAGIB_BASE_INSTAGIB_H

#include "../base_pvp/base_pvp.h"

class CGameControllerInstagib : public CGameControllerPvp
{
public:
	CGameControllerInstagib(class CGameContext *pGameServer);
	~CGameControllerInstagib() override;
};
#endif // GAME_SERVER_GAMEMODES_BASE_INSTAGIB_H
