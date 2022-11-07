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

#include "gcdf.h"
#include <stdarg.h>

static uint32_t gcdf_gcd2(uint32_t x, uint32_t y) {
  if (y == 0)
    return x;
  if (y > x)
    return gcdf_gcd2(y, x);

  return gcdf_gcd2(y, x % y);
}

uint32_t gcdf_gcd(uint32_t count, ...) {
  va_list args;
  va_start(args, count);
  int current = va_arg(args, uint32_t);
  for (uint32_t i = 0; i < count - 1; i++) {
    uint32_t next = va_arg(args, uint32_t);
    current = gcdf_gcd2(current, next);
  }

  va_end(args);
  return current;
}

static uint32_t gcdf_lcf2(uint32_t x, uint32_t y) {
  if (x == 0 || y == 0)
    return 0;

  return x * y / gcdf_gcd2(x, y);
}

uint32_t gcdf_lcf(uint32_t count, ...) {
  va_list args;
  va_start(args, count);
  int current = va_arg(args, uint32_t);
  for (uint32_t i = 0; i < count - 1; i++) {
    uint32_t next = va_arg(args, uint32_t);
    current = gcdf_lcf2(current, next);
  }

  va_end(args);
  return current;
}
