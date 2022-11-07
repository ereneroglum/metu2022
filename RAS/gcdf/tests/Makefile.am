# libgcdf
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

check_PROGRAMS = gcd_test_1 \
		 gcd_test_2 \
		 gcd_test_3 \
		 gcd_test_4 \
		 lcf_test_1 \
		 lcf_test_2 \
		 lcf_test_3 \
		 lcf_test_4

AM_CFLAGS = -I$(top_srcdir)/src

LDADD = $(top_srcdir)/src/libgcdf.la

gcd_test_1_SOURCES = gcd_test_1.c
gcd_test_2_SOURCES = gcd_test_2.c
gcd_test_3_SOURCES = gcd_test_3.c
gcd_test_4_SOURCES = gcd_test_4.c
lcf_test_1_SOURCES = lcf_test_1.c
lcf_test_2_SOURCES = lcf_test_2.c
lcf_test_3_SOURCES = lcf_test_3.c
lcf_test_4_SOURCES = lcf_test_4.c

TESTS = $(check_PROGRAMS)
