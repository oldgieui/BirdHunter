#pragma once
#pragma  comment( lib, "fmodex_vc.lib" )

#include "NNConfig.h"
#include "Library/FMOD/inc/fmod.hpp"
#include "Library/FMOD/inc/fmod_errors.h"
#include <vector>
#include <array>
#include "BHDefine.h"

class NNSoundManager : public NNObject
{
public:
	static NNSoundManager* GetInstance();
	static void ReleaseInstance();
	
	void Init(void);
	void Update( float dTime );

	FMOD::Sound* CreateSound( std::string path );
	FMOD::Sound* CreateLoopSound( std::string path );

	void Play(FMOD::Sound* sound);
	void PlayAndGetChannel(FMOD:: Sound* sound, FMOD::Channel** channel);
	void Pause(FMOD::Channel* channel);
	void Resume(FMOD::Channel* channel);
	bool IsPaused(FMOD::Channel* channel);
	void Reset(FMOD::Channel* channel);
	void Stop(FMOD::Channel* channel);

	void SetVolume( FMOD::Channel* channel, float volume);
	
	bool IsPlay( FMOD::Channel* channel );

	FMOD::System* GetSystem() { return m_System; }
	FMOD::Channel*		m_Dchannel;
	FMOD::Channel*		m_BgmChannel;
	FMOD::Channel*		m_WarningChannel;

	std::vector<FMOD::Sound*> SE_BirdDie;
	std::vector<FMOD::Sound*> SE_PooBoom;
	std::vector<FMOD::Sound*> SE_NormalGunShot;
	std::array<FMOD::Sound*, SYSTEMSOUND_MAX> SE_SystemSound;

private:
	NNSoundManager(void);
	~NNSoundManager(void);
	static NNSoundManager* m_pInstance;

	FMOD::System*		m_System;
	
};

