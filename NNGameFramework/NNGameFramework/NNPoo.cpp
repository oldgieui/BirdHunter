#include "NNPoo.h"
#include "BHDefine.h"


NNPoo::NNPoo(void)
{
}


NNPoo::~NNPoo(void)
{
}

void NNPoo::SetPoo( NNPoint BirdPosition )
{
	m_pPoo->SetPosition( BirdPosition );
}

void NNPoo::Update( float dTime )
{
	if( GetPositionY() <= WINDOW_HEIGHT_DOWN_EDGE ) 
	{
		SetPosition( GetPositionX(), GetPositionY() + m_PooSpeed * dTime );
	}
}

void NNPoo::SetProperty( POO_PROPERTY poo_property )
{
	m_PooSpeed		=	poo_property.speed;
	m_SpriteHeight	=	poo_property.setImageHeight;
	m_SpriteWidth	=	poo_property.setImageWidth;
	m_Zindex		=	poo_property.zindex;
	m_Type			=	poo_property.type;

	m_pPoo = NNSprite::Create( poo_property.sprite_path );
	m_pPoo->SetImageWidth( poo_property.setImageWidth );
	m_pPoo->SetImageHeight( poo_property.setImageHeight );
	m_pPoo->SetZindex( poo_property.zindex );
	AddChild( m_pPoo );
}
