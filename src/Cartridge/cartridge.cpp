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

#include "cartridge.h"

/**
 * @brief Cartridge constructor
 * 
 * @param[in] path Path of the rom
*/
Cartridge::Cartridge(const std::filesystem::path& rom_path) : m_rom_path(rom_path)
{
    //Empty for now
}

/**
 * @brief Get information from the rom file
 * 
 * @return Reading status code
*/
unsigned char Cartridge::ReadInfo() const
{
    return 0;
}