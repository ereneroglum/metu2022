// libprimes
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
/// This file contains implementation of libprimes.

#include "primes.h"
#include <math.h>
#include <stdio.h>

bool primes_is_prime(uint32_t num) {
  if (num < PRIME_MIN)
    return false;

  for (int i = PRIME_MIN; i <= sqrt(num); i++)
    if (num % i == 0)
      return false;

  return true;
}

void primes_print_first_n_primes(uint32_t n) {
  if (n == 0)
    return;

  uint32_t current = PRIME_MIN;
  while (n != 0) {
    if (primes_is_prime(current)) {
      printf("%i ", current);
      n--;
    }
    current++;
  }
}

void primes_print_upto(uint32_t n) {
  if (n <= PRIME_MIN)
    return;

  uint32_t current = PRIME_MIN;
  while (current < n) {
    if (primes_is_prime(current))
      printf("%i ", current);
    current++;
  }
}

int primes_prime_count(uint32_t lowerbound, uint32_t upperbound) {
  if (upperbound < PRIME_MIN)
    return 0;

  if (upperbound < lowerbound)
    return 0;

  uint32_t current = lowerbound;
  uint32_t count_of_primes = 0;
  while (current <= upperbound) {
    if (primes_is_prime(current))
      count_of_primes++;
    current++;
  }

  return count_of_primes;
}
