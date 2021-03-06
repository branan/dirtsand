/******************************************************************************
 * This file is part of dirtsand.                                             *
 *                                                                            *
 * dirtsand is free software: you can redistribute it and/or modify           *
 * it under the terms of the GNU General Public License as published by       *
 * the Free Software Foundation, either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * dirtsand is distributed in the hope that it will be useful,                *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with dirtsand.  If not, see <http://www.gnu.org/licenses/>.          *
 ******************************************************************************/

#ifndef _DS_COLOR_H
#define _DS_COLOR_H

#include "config.h"

namespace DS
{
    struct ColorRgba
    {
        float m_R, m_G, m_B, m_A;

        bool operator==(const ColorRgba& other) const
        {
            return m_R == other.m_R && m_G == other.m_G && m_B == other.m_B
                && m_A == other.m_A;
        }
        bool operator!=(const ColorRgba& other) const { return !operator==(other); }
    };

    union ColorRgba8
    {
        struct { uint8_t m_B, m_G, m_R, m_A; };
        uint32_t m_RGBA;

        bool operator==(const ColorRgba8& other) const
        {
            return m_R == other.m_R && m_G == other.m_G && m_B == other.m_B
                && m_A == other.m_A;
        }
        bool operator!=(const ColorRgba8& other) const { return !operator==(other); }
    };
}

#endif
