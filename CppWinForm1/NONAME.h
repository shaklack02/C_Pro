#pragma once
#include <Windows.h>
#include "process.h"
#include <string>
#include <iomanip>




namesapce PatchDATA
{
public:
	enum Cheat_Activation {  INCREASE_HP, NO_DAMAGE,  INCREASE_EXP, DECREASE_EXP, INCREASE_AP, SKILLS_COST_NOTHING , NO_COST, INCREASE_MONEY_ON_PURCHASE  };
	std::string Options[9] = {  "--INCREASE HP ", "--NO DAMAGE ",                 //HP 0-2
						        "--INCREASE EXP ", "--DECREASE EXP ",             //EXP 3-5
						        "--INCREASE AP ", "--SKILLS COST NOTHING ",        // AP 6-8
						        "--NO COST", "--INCREASE MONEY ON PURCHASE ", "RESTORE EVERYTHING" }; //MONEY 9-11
	//SIGNATURE
	char* pattern[8] = { "\x89\x83\xA0\x01\x00\x00\x41\xD1\xC8\x48", // HP
						"\x89\x9E\x98\x06\x00\x00\x44\x8B\xF3\x49",  //EXP
						"\x89\x86\x5C\x56\x00\x00\x2B\xC7\x48\x8B",  //AP
						"\x41\x89\xBE\x50\x56\x00\x00\x2B\xF9\x85",  //Money
						"xxxx??xxxx", "xxxx??xxxx","xxxx??xxxx","xxxxx??xxx" }; // HP , EXP , AP, Money

	void * healthDecAddress[4] = {0};     //Adresses of every PatternScan
	byte   MOriginalData[4][16] = { 0 };  //Storage FOR the old Data

	byte   MPatchedData[8][3] = { {0x01,0x83,0xA0}, //PATCH increase HP on every HIT (not tested)
 								 {0x39,0x83,0xA0}, //PATCH NOT taking damage (not tested)
								 {0x01,0x9E,0x98}, //PATCH increase MAX LEVEL [tested]
								 {0x29,0x9E,0x98}, //PATCH Decrease EXP (not tested)
								 {0x01,0x86,0x5C}, //PATCH for increasing AP (not Test)
								 {0x39,0x86,0x5C}, //PATCH no cost (not fully tested)
								 {0x41,0x39,0xBE}, //PATCH No cost (not tested yet)
								 {0x41,0x01,0xBE}};//PATCH INCREASE MONEY ON PURCHASE (not tested)
								 
	//Reading the memory
void ReadMemoryData(HANDLE hProcess, void * healthDecAddress, unsigned int Raw, unsigned int NumberOfBytes, byte MData[][16]);
void PrintCheatOptions();
int Checking_The_key(unsigned int key);
}


