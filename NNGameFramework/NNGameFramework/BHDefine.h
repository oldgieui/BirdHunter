﻿#pragma once
#include "NNSprite.h"
#include "NNSound.h"
#include <time.h>
#include <vector>

#define RESOLUTION_WIDTH	800
#define RESOLUTION_HEIGHT	600

#define INIT_PLAYERSPEED	200
#define PLAYER_WIDTH		100
#define PLAYER_HEIGHT		100
#define PLAYER_POSITION_X	350
#define PLAYER_POSITION_Y	500
#define PLAYER_SPRITE_REAL_EDGE 30
#define PLAYER_SPRITE		L"Image/character.png"
#define PLAYER_ZINDEX		1

#define BIRD_WIDTH			30
#define BIRD_HEIGHT			30

#define BIRD_SET_MAX_WIDTH		100
#define BIRD_SET_MAX_HEIGHT		100

#define NORMAL_BIRD_LEFT_SPRITE	 L"Image/BIRD_A_LEFT.png"
#define NORMAL_BIRD_RIGHT_SPRITE L"Image/BIRD_A_RIGHT.png"
#define NORMAL_BIRD_WIDTH	30.f
#define NORMAL_BIRD_HEIGHT	30.f
#define NORMAL_BIRD_ZINDEX	2
#define NORMAL_BIRD_SPEED	100

#define EASY_BIRD_LEFT_SPRITE	 L"Image/BIRD_B_LEFT.png"
#define EASY_BIRD_RIGHT_SPRITE L"Image/BIRD_B_RIGHT.png"
#define EASY_BIRD_WIDTH	50.f
#define EASY_BIRD_HEIGHT	50.f
#define EASY_BIRD_ZINDEX	2
#define EASY_BIRD_SPEED	100

#define NORMAL_POO_WIDTH	30.f
#define NORMAL_POO_HEIGHT	30.f
#define NORMAL_POO_ZINDEX	2
#define NORMAL_POO_SPEED	50
#define NORMAL_POO_SPRITE L"Image/poo.png"

#define NORMAL_BULLET_WIDTH		25.f
#define NORMAL_BULLET_HEIGHT	25.f
#define NORMAL_BULLET_SPEED		100
#define NORMAL_BULLET_ZINDEX	2
#define NORMAL_BULLET_SPRITE	L"Image/BULLET_A.png"

#define WINDOW_WIDTH_LEFT_EDGE	0.f
#define WINDOW_WIDTH_RIGHT_EDGE 800.f
#define WINDOW_HEIGHT_UP_EDGE	0.f
#define WINDOW_HEIGHT_DOWN_EDGE	600.f

#define GUN_WIDTH 70

#define POLLUTION_WARNING_LV_01	5
#define POLLUTION_WARNING_LV_02 15
#define POLLUTION_WARNING_LV_03	25
#define POLLUTION_WARNING_LV_04	40

#define MAP_DEFAULT		L"Image/map.png"
#define MAP_WARNING_01	L"Image/mapWarning001.png"
#define MAP_WARNING_02	L"Image/mapWarning002.png"
#define MAP_WARNING_03	L"Image/mapWarning003.png"
#define MAP_WARNING_04	L"Image/mapWarning004.png"

// agebreak : 함수째로 Define 하지 않는다. 만약 하는 경우에는 Create를 Define에 명시한다.
#define SE_GAMESTART	NNSound::Create("Sound/GAME_START.wav")
#define SE_BIRD_DIE_00	NNSound::Create("Sound/BIRD_DIE_00.wav")
#define SE_BIRD_DIE_01	NNSound::Create("Sound/BIRD_DIE_01.wav")
#define SE_BIRD_DIE_02	NNSound::Create("Sound/BIRD_DIE_02.wav")
#define SE_POO_BOOM_00	NNSound::Create("Sound/POO_BOOM_00.wav")
#define SE_POO_BOOM_01	NNSound::Create("Sound/POO_BOOM_01.wav")
#define SE_POO_BOOM_02	NNSound::Create("Sound/POO_BOOM_02.wav")
#define SE_POO_BOOM_03	NNSound::Create("Sound/POO_BOOM_03.wav")
#define SE_POO_BOOM_04	NNSound::Create("Sound/POO_BOOM_04.wav")
#define SE_WARNING		NNSound::Create("Sound/WARNING.wav")

#define BIRD_BULLET_HIT_EFFECT_SCALE_X 1.0f
#define BIRD_BULLET_HIT_EFFECT_SCALE_Y 1.0f
#define BIRD_BULLET_HIT_EFFECT_WIDTH	128.f
#define BIRD_BULLET_HIT_EFFECT_HEIGHT	128.f
#define BIRD_BULLET_HIT_EFFECT_LIFETIME 0.5f
#define BIRD_BULLET_HIT_EFFECT_BALANCE_X 80.f
#define BIRD_BULLET_HIT_EFFECT_BALANCE_Y 40.f

#define POO_BULLET_HIT_EFFECT_SCALE_X 0.5f
#define POO_BULLET_HIT_EFFECT_SCALE_Y 0.5f
#define POO_BULLET_HIT_EFFECT_LIFETIME 0.5f
#define POO_BULLET_HIT_EFFECT_BALACE_X 40.f
#define POO_BULLET_HIT_EFFECT_BALACE_Y 40.f

#define BIRD_BULLET_HIT_EFFECT_SIZE 8
#define BIRD_BULLET_HIT_EFFECT_SPRITE1 L"Image/GREEN_BIRD_DIE_001.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE2 L"Image/GREEN_BIRD_DIE_002.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE3 L"Image/GREEN_BIRD_DIE_003.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE4 L"Image/GREEN_BIRD_DIE_004.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE5 L"Image/GREEN_BIRD_DIE_005.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE6 L"Image/GREEN_BIRD_DIE_006.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE7 L"Image/GREEN_BIRD_DIE_007.png"
#define BIRD_BULLET_HIT_EFFECT_SPRITE8 L"Image/GREEN_BIRD_DIE_008.png"
#define BIRD_BULLET_HIT_EFFECT_CHANGE_SPRITE_TIME 0.15f

#define POO_BULLET_HIT_EFFECT_SIZE 7
#define POO_BULLET_HIT_EFFECT_SPRITE1 L"Image/EXPLOSION_01.png"
#define POO_BULLET_HIT_EFFECT_SPRITE2 L"Image/EXPLOSION_02.png"
#define POO_BULLET_HIT_EFFECT_SPRITE3 L"Image/EXPLOSION_03.png"
#define POO_BULLET_HIT_EFFECT_SPRITE4 L"Image/EXPLOSION_04.png"
#define POO_BULLET_HIT_EFFECT_SPRITE5 L"Image/EXPLOSION_05.png"
#define POO_BULLET_HIT_EFFECT_SPRITE6 L"Image/EXPLOSION_06.png"
#define POO_BULLET_HIT_EFFECT_SPRITE7 L"Image/EXPLOSION_07.png"
#define POO_BULLET_HIT_EFFECT_CHANGE_SPRITE_TIME 0.15f

#define BIRD_BULLET_HIT_BALANCE_X 50.f

enum BULLET_TYPE
{
	NORMAL_BULLET,
	FIRE_BULLET,
	STORM_BULLET,
};

enum BIRD_TYPE
{
	EASY_BIRD,
	NORMAL_BIRD,
	HARD_BIRD,
};

enum POO_TYPE
{
	NORMAL_POO,
	BLOOD_POO,
	BIG_POO,
};

enum GOING_DIRECTION
{
	LEFT_GO,
	RIGHT_GO,
};

class OBJECT_PROPERTY
{
public:
	int				speed;
	std::wstring	sprite_path;
	float			imageWidth;
	float			imageHeight;
	int				zIndex;
};

class BIRD_PROPERTY : public OBJECT_PROPERTY
{
public:
	GOING_DIRECTION	goingDirection;
	BIRD_TYPE		type;
};

class POO_PROPERTY : public OBJECT_PROPERTY
{
public:
	POO_TYPE			type;
};

class BULLET_PROPERTY : public OBJECT_PROPERTY
{
public:
	BULLET_TYPE		type;
};

struct HIT_RECT
{
	float left, right, down, up;

	bool HitCheck( HIT_RECT& target )
	{
		if( target.right < left || target.down < up || target.left	> right	||	target.up > down )
		{
			return false;
		}
		return true;
	}
};