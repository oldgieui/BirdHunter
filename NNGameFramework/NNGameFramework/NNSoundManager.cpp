#include "NNSoundManager.h"


NNSoundManager* NNSoundManager::m_pInstance = nullptr;

NNSoundManager::NNSoundManager(void) : m_System(nullptr), m_Dchannel(nullptr), m_BgmChannel(nullptr)
{
	FMOD::System_Create(&m_System);
	m_System->init(32, FMOD_INIT_NORMAL, 0);
	Init();
}

NNSoundManager::~NNSoundManager(void)
{
	m_System->release();
	m_System->close();
}

void NNSoundManager::Init( void )
{
	SE_BirdDie.push_back(CreateSound("Sound/BIRD_DIE_00.wav"));
	SE_BirdDie.push_back(CreateSound("Sound/BIRD_DIE_01.wav"));
	SE_BirdDie.push_back(CreateSound("Sound/BIRD_DIE_02.wav"));
	SE_PooBoom.push_back(CreateSound("Sound/POO_BOOM_00.wav"));
	SE_PooBoom.push_back(CreateSound("Sound/POO_BOOM_01.wav"));
	SE_PooBoom.push_back(CreateSound("Sound/POO_BOOM_02.wav"));
	SE_PooBoom.push_back(CreateSound("Sound/POO_BOOM_03.wav"));
	SE_PooBoom.push_back(CreateSound("Sound/POO_BOOM_04.wav"));
	SE_NormalGunShot.push_back(CreateSound("Sound/GUNSHOT_00.wav"));
	SE_NormalGunShot.push_back(CreateSound("Sound/GUNSHOT_01.wav"));
	SE_NormalGunShot.push_back(CreateSound("Sound/GUNSHOT_02.wav"));
	SE_NormalGunShot.push_back(CreateSound("Sound/GUNSHOT_03.wav"));
	SE_SystemSound[GAMESTART] = CreateSound("Sound/GAME_START.wav");
	SE_SystemSound[WARNING] = CreateSound("Sound/WARNING.wav");
	SE_SystemSound[GAMEOVER] = CreateSound("Sound/GAME_OVER.wav");
	SE_SystemSound[GAMEBGM] = CreateLoopSound("Sound/GAME_BGM.wav");
}

NNSoundManager* NNSoundManager::GetInstance()
{
	if (m_pInstance == nullptr)
		m_pInstance = new NNSoundManager();
	return m_pInstance;
}

void NNSoundManager::ReleaseInstance()
{
	if (m_pInstance != nullptr)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

FMOD::Sound* NNSoundManager::CreateSound( std::string path )
{
	FMOD::Sound* sInstance;
	m_System->createSound(path.c_str(), FMOD_DEFAULT, nullptr, &sInstance );
	return sInstance;
}


FMOD::Sound* NNSoundManager::CreateLoopSound( std::string path )
{
	FMOD::Sound* sInstance;
	m_System->createSound(path.c_str(), FMOD_LOOP_NORMAL | FMOD_2D | FMOD_HARDWARE, nullptr, &sInstance );
	return sInstance;
}

void NNSoundManager::Play( FMOD::Sound* sound )
{
	m_System->playSound(FMOD_CHANNEL_FREE, sound, false, &m_Dchannel);
}

void NNSoundManager::PlayAndGetChannel( FMOD:: Sound* sound, FMOD::Channel** channel )
{
	m_System->playSound(FMOD_CHANNEL_FREE, sound, false, channel);
}

void NNSoundManager::Pause( FMOD::Channel* channel )
{
	channel->setPaused(true);
}

void NNSoundManager::Reset( FMOD::Channel* channel )
{
	channel->setPosition(0, FMOD_TIMEUNIT_MS);
}

void NNSoundManager::Stop( FMOD::Channel* channel )
{
	if (IsPlay(channel))
	{
		channel->stop();
		Reset(channel);
	}
}

void NNSoundManager::SetVolume( FMOD::Channel* channel, float volume )
{
	channel->setVolume(volume);
}

bool NNSoundManager::IsPlay( FMOD::Channel* channel )
{
	bool isplay;
	channel->isPlaying(&isplay);
	return isplay;
}

void NNSoundManager::Update( float dTime )
{
	m_System->update();
}














