/*
* Modern effects for a modern Streamer
* Copyright (C) 2017 Michael Fabian Dirks
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#include "util-math.h"
#include "util-memory.h"

void* util::vec3a::operator new(size_t count){
	return malloc_aligned(16, count);
}

void* util::vec3a::operator new[](size_t count) {
	return malloc_aligned(16, count);
}

void util::vec3a::operator delete(void* p) {
	free_aligned(p);
}

void util::vec3a::operator delete[](void* p) {
	free_aligned(p);
}

void* util::vec4a::operator new(size_t count) {
	return malloc_aligned(16, count);
}

void* util::vec4a::operator new[](size_t count) {
	return malloc_aligned(16, count);
}

void util::vec4a::operator delete(void* p) {
	free_aligned(p);
}

void util::vec4a::operator delete[](void* p) {
	free_aligned(p);
}
