// libprimes
// Copyright (C) 2022  Eren Eroğlu
//
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
/// This file contains interface to libprimes.

#ifndef PRIMES_H
#define PRIMES_H

#include <stdbool.h>
#include <stdint.h>

#define PRIME_MIN 2

///
/// Checks if given number is a prime
///
/// \param[in] num Number to be checked
/// \returns True if given number is prime
///
bool primes_is_prime(uint32_t num);

///
/// Prints first n primes to stdout.
///
/// \param[in] n Number of primes to be printed
///
void primes_print_first_n_primes(uint32_t n);

///
/// Prints primes upto a certain number to stdout.
///
/// \param[in] n Upperbound of primes to be printed
///
void primes_print_upto(uint32_t n);

///
/// Counts how many primes are in [a,b] closed interval.
///
/// \param[in] lowerbound Lowerbound of [a,b] interval
/// \param[in] upperbound Upperbound of [a,b] interval
/// \returns Count of how many primes are in [a,b]
///
int primes_prime_count(uint32_t lowerbound, uint32_t upperbound);

#endif
