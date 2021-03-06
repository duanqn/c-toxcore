/*
 * Tox DHT bootstrap daemon.
 * Stdout logging backend.
 */

/*
 * Copyright © 2016-2017 The TokTok team.
 * Copyright © 2015-2016 Tox project.
 *
 * This file is part of Tox, the free peer to peer instant messenger.
 *
 * Tox is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tox.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LOG_STDOUT_H
#define LOG_STDOUT_H

#include "log.h"

#include <stdarg.h>

void log_backend_stdout_write(LOG_LEVEL level, const char *format, va_list args) GNU_PRINTF(2, 0);

#endif // LOG_BACKEND_STDOUT_H
