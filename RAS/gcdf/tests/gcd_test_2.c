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
#include <stdlib.h>

int main(int argc, char **argv) {
  uint32_t expected = 53;
  uint32_t result = gcdf_gcd(3, 43 * 53, 47 * 53, 59 * 53);
  if (expected == result)
    return EXIT_SUCCESS;
  else
    return EXIT_FAILURE;
}