// libgcdf
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

///
/// \file
///

#ifndef GCDF_H
#define GCDF_H

#include <stdbool.h>
#include <stdint.h>

///
/// Finds greatest common devisors of given integers.
///
/// \param[in] count How many numbers are expected to be taken in to account
/// \return gcd(x, y, z, ...)
uint32_t gcdf_gcd(uint32_t count, ...);

///
/// Finds lowest common factor of given integers.
///
/// \param[in] count How many numbers are expected to be taken in to account
/// \return lcf(x, y, z, ...)
uint32_t gcdf_lcf(uint32_t count, ...);

#endif
