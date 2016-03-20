#pragma once
#pragma comment(lib, "Winmm.lib")

#ifndef SYNTHESIZER_H
#define SYNTHESIZER_H

#include <windows.h>   /* required before including mmsystem.h */
#include <mmsystem.h>  /* multimedia functions (such as MIDI) for Windows */
#include <iostream>
#include <chrono>
#include <thread>

class Synthesizer
{
public:
	Synthesizer(int intrument=0);
	void spela(int h�jd, int l�ngd,int volym);
private:
	int Synthesizer::h�jdtomidi(int h�jd);
private:
	HMIDIOUT device;

};

#endif // SYNTHESIZER_H