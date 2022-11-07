# libprimes
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Affero General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Affero General Public License for more details.
#
# You should have received a copy of the GNU Affero General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

check_PROGRAMS = is_prime_test_1 \
		 is_prime_test_2 \
		 is_prime_test_3 \
		 is_prime_test_4

AM_CFLAGS = -I$(top_srcdir)/src

LDADD = $(top_builddir)/src/libprimes.la

is_prime_test_1_SOURCES = is_prime_test_1.c
is_prime_test_2_SOURCES = is_prime_test_2.c
is_prime_test_3_SOURCES = is_prime_test_3.c
is_prime_test_4_SOURCES = is_prime_test_4.c

TESTS = $(check_PROGRAMS)
