/*
    Copyright (c) 2019 Adrian "asie" Siekierka

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#include "GBACart.h"
#include "IDEDrive.h"

class GBACartMemoryPak: public GBACart {
public:
    GBACartMemoryPak();
    ~GBACartMemoryPak();
    virtual u16 RomRead16(u32 addr);
    virtual void RomWrite16(u32 addr, u16 value);
private:
    u16 *Memory;
    u16 Unlocked;
};