#pragma once
#include "NNObject.h"

class NNSprite;

class NNPlayerCharacter : public NNObject
{
public:

	NNPlayerCharacter(void);
	~NNPlayerCharacter(void);
	
	void	Move( float dTime );
	void	Update( float dTime );
	float	GetSpriteHeight()	{ return m_SpriteHeight; }
	float	GetSpriteWidth()	{ return m_SpriteWidth; }

private:
	NNSprite*	 m_pChar;
	bool		 m_CheckByPoo;
	int			 m_PlayerSpeed; //이속증가, 감소 아이템시 사용
	//좌우가 바뀌는 아이템 사용시 사용
	//PlayerCharacterDirection m_Direction;
	float		 m_SumTime; 
	float		 m_SpriteHeight;
	float		 m_SpriteWidth;
};