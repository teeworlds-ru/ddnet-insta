#include <game/server/entities/character.h>

#include "gctf.h"

CGameControllerGCTF::CGameControllerGCTF(class CGameContext *pGameServer) :
	CGameControllerInstaBaseCTF(pGameServer)
{
	m_pGameType = "gCTF";
	m_DefaultWeapon = WEAPON_GRENADE;
}

CGameControllerGCTF::~CGameControllerGCTF() = default;

void CGameControllerGCTF::Tick()
{
	CGameControllerInstaBaseCTF::Tick();
}

void CGameControllerGCTF::OnCharacterSpawn(class CCharacter *pChr)
{
	CGameControllerInstaBaseCTF::OnCharacterSpawn(pChr);

	// give default weapons
	pChr->GiveWeapon(m_DefaultWeapon, false, g_Config.m_SvGrenadeAmmoRegen ? g_Config.m_SvGrenadeAmmoRegenNum : -1);
}