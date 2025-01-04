// https://github.com/Jupeyy/teeworlds-fng2-mod/blob/fng_06/src/game/server/
#ifndef GAME_SERVER_INSTAGIB_LASER_TEXT_H
#define GAME_SERVER_INSTAGIB_LASER_TEXT_H

#include <game/server/entity.h>

class CLaserChar : public CEntity
{
public:
	CLaserChar(CGameWorld *pGameWorld) :
		CEntity(pGameWorld, CGameWorld::ENTTYPE_LASER) {}
	vec2 m_FromPos;
};

class CLaserText : public CEntity
{
public:
	CLaserText(CGameWorld *pGameWorld, vec2 Pos, int Owner, int AliveTicks, char *pText, int TextLen);
	CLaserText(CGameWorld *pGameWorld, vec2 Pos, int Owner, int AliveTicks, char *pText, int TextLen, float CharPointOffset, float CharOffsetFactor);
	~CLaserText() override;

	void Reset() override;
	void Tick() override;
	void TickPaused() override;
	void Snap(int SnappingClient) override;

private:
	float m_PosOffsetCharPoints;
	float m_PosOffsetChars;

	void MakeLaser(char Char, int CharOffset, int &CharCount);

	int m_Owner;

	int m_AliveTicks;
	int m_CurTicks;
	int m_StartTick;

	char *m_pText;
	int m_TextLen;

	CLaserChar **m_ppChars;
	int m_CharNum;
};

#endif
