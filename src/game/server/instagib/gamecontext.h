#ifndef GAME_SERVER_INSTAGIB_GAMECONTEXT_H
// hack for headerguard linter
#endif

#ifndef IN_CLASS_IGAMECONTEXT

class CGameContext
{
#endif // IN_CLASS_IGAMECONTEXT

public:
	const char *ServerInfoPlayerScoreKind() override { return "points"; }

private:
#ifndef IN_CLASS_IGAMECONTEXT
};
#endif
