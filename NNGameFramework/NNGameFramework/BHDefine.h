#pragma once

#define RESOLUTION_WIDTH	800
#define RESOLUTION_HEIGHT	600

#define INIT_PLAYERSPEED	200
#define PLAYER_WIDTH		100
#define PLAYER_HEIGHT		100
#define PLAYER_POSITION_X	350
#define PLAYER_POSITION_Y	500

#define BIRD_WIDTH		30
#define BIRD_HEIGHT		30
#define INIT_BIRD_A_SPEED		200
#define INIT_BIRD_B_SPEED		70
#define INIT_BIRD_C_SPEED		80
#define INIT_BIRD_D_SPEED		90
#define INIT_BIRD_E_SPEED		100

#define POO_SPEED		30
#define POO_WIDTH		30
#define POO_HEIGHT		30

#define POO_A_SPEED		50
#define POO_A_WIDTH		20
#define POO_A_HEIGHT	20

#define POO_B_SPEED		1
#define POO_B_WIDTH		150
#define POO_B_HEIGHT	150

#define BULLET_A_WIDTH  30
#define BULLET_A_HEIGHT 30
#define BULLET_A_SPEED  100

enum BulletType
{
	Bullet_A,
	Bullet_B,
	Bullet_C,
};

enum BirdType
{
	Bird_A,
	Bird_B,
	Bird_C,
};