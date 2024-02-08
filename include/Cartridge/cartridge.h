/***************************************************************************
 * Author: testnco
 * Project: GameBoy-emulator
 * 
 * Copyright (c) 2024 testnco
 **************************************************************************/

////////////////////////////////////////////////////////////////
//
//  -- Cartridge class
//
//  Read the rom file to get the cartridge information

#ifndef __CARTRIDGE_H__
#define __CARTRIDGE_H__

#include <iostream>
#include <filesystem>
#include <fstream>

class Cartridge
{
    public:
        Cartridge(std::filesystem::path rom_path);
        bool GetInfo();

    private:
        
};

#endif // __CARTRIDGE_H__