#ifndef GAME_EDITOR_MAPITEMS_ENVELOPE_H
#define GAME_EDITOR_MAPITEMS_ENVELOPE_H

#include <game/client/render.h>
#include <game/mapitems.h>

class CEnvelope
{
	class CEnvelopePointAccess : public IEnvelopePointAccess
	{
		std::vector<CEnvPoint_runtime> *m_pvPoints;

	public:
		CEnvelopePointAccess(std::vector<CEnvPoint_runtime> *pvPoints);

		int NumPoints() const override;
		const CEnvPoint *GetPoint(int Index) const override;
		const CEnvPointBezier *GetBezier(int Index) const override;
	};

	int m_Channels;

public:
	std::vector<CEnvPoint_runtime> m_vPoints;
	CEnvelopePointAccess m_PointsAccess;
	char m_aName[32];
	float m_Bottom, m_Top;
	bool m_Synchronized;

	CEnvelope(int Channels);

	void Resort();
	void FindTopBottom(int ChannelMask);
	int Eval(float Time, ColorRGBA &Color);
	void AddPoint(int Time, int v0, int v1 = 0, int v2 = 0, int v3 = 0);
	float EndTime() const;
	int GetChannels() const;
	void SetChannels(int Channels);
};

#endif
