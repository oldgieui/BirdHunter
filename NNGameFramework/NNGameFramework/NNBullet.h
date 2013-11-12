#pragma once
#include "NNSprite.h"
#include "NNObject.h"

class NNBullet : public NNObject
{

public:
	NNBullet(void);
	virtual ~NNBullet(void);
	void Move( float dTime );
protected:
	bool		m_CheckByPoo;
	bool		m_CheckByBird;

	int			m_BulletSpeed;
	NNSprite*	m_pBullet;
};