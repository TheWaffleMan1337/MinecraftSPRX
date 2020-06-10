#pragma once
#include "MCStream.h"
extern int viscount;
template<typename R, typename... Arguments> inline R Call(long long function, Arguments... args);

struct font_t;

bool isSpectator(uint32_t r3);
void ELBFrostWalk(uint32_t r3, uint32_t r4);

void onEntityUpdate(uint32_t r3);

void EntityPlaySound(uint32_t ent, uint32_t sound, float volume, float pitch);

int wcslen(const wchar_t * wchar);

void drawShadowText(uint32_t font, uint32_t r4, uint32_t x, uint32_t y, uint32_t color, uint32_t r8, uint32_t r9);

font_t getString(const wchar_t * str);

extern int vswprintf_t[2];
extern int(*vswprintf)(wchar_t* buf, int len, const wchar_t*source, ...);

void CLStateColor(float r, float g, float b, float a);

size_t StringToWideCharacter(wchar_t *dest, const char *scr, size_t len);
size_t WideCharacterToString(char *dest, const wchar_t *scr, size_t len);

void sub_8829A4(uint32_t r3, uint32_t r4, uint32_t r5);

