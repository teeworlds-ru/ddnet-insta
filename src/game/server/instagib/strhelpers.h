#ifndef GAME_SERVER_INSTAGIB_STRHELPERS_H
#define GAME_SERVER_INSTAGIB_STRHELPERS_H

#include <cctype>
#include <cstring>

#include <base/system.h>

const char *str_find_digit(const char *Haystack);
bool str_contains_ip(const char *pStr);

/**
 * Replaces '%t' with timestamps in a string
 *
 * @ingroup Strings
 *
 * @param pStr Source string with %t placeholders
 * @param pBuf Destination string that will be written to
 * @param SizeOfBuf Size of destination string
 *
 * @remark Guarantees that pBuf string will contain zero-termination.
 */
void str_expand_timestamps(const char *pStr, char *pBuf, size_t SizeOfBuf);

#endif
