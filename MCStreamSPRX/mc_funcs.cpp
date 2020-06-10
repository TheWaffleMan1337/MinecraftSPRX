#include "mc_funcs.h"
int viscount;
template<typename R, typename... Arguments> inline R Call(long long function, Arguments... args) {
	int toc_t[2] = { function, 0x014CDAB0 };
	R(*temp)(Arguments...) = (R(*)(Arguments...))&toc_t;
	return temp(args...);
}

bool isSpectator(uint32_t r3) {
	return Call<bool>(0x009873D8, r3);
}

void ELBFrostWalk(uint32_t r3, uint32_t r4) {
	Call<void>(0x0039F018, r3, r4);
}

void onEntityUpdate(uint32_t r3) {
	Call<void>(0x0039E1B8, r3);
}

void EntityPlaySound(uint32_t ent, uint32_t sound, float volume, float pitch) {
	Call<void>(0x00228EB8, ent, sound, volume, pitch);
}

int wcslen(const wchar_t * wchar) {
	return Call<int>(0x00CB32D8, wchar);
}

void drawShadowText(uint32_t font, uint32_t r4, uint32_t x, uint32_t y, uint32_t color, uint32_t r8, uint32_t r9) {
	Call<void>(0x00A7E2E8, font, r4, x, y, color, r8, r9);
}

font_t getString(const wchar_t * str) {
	font_t font;
	font.text = str;
	font.dataType = 7;
	font.wcstrlen = wcslen(str);
	font.wcstrlen1 = wcslen(str) + 3;
	font.unknown1 = 2.0625f;
	font.unknown1 = 1.0f;
	font.unknown1 = 1.0078125f;
	return font;
}

int vswprintf_t[2] = { 0x00CB3118, 0x014CDAB0 };
int(*vswprintf)(wchar_t* buf, int len, const wchar_t*source, ...) = (int(*)(wchar_t*, int, const wchar_t*, ...))&vswprintf_t;

void CLStateColor(float r, float g, float b, float a) {
	Call<void>(0x00A75024, r, g, b, a);
}

size_t StringToWideCharacter(wchar_t *dest, const char *scr, size_t len)
{
	int count = 0;
	if (len)
	{
		do
		{
			if ((*dest++ = (wchar_t)*scr++) == 0)
				break;
			count++;
		} while (--len);
	}
	return count;
}
size_t WideCharacterToString(char *dest, const wchar_t *scr, size_t len)
{
	int count = 0;
	if (len)
	{
		do
		{
			if ((*dest++ = (char)*scr++) == 0)
				break;
			count++;
		} while (--len);
	}
	return count;
}


void sub_8829A4(uint32_t r3, uint32_t r4, uint32_t r5) {
	Call<void>(0x008829A4, r3, r4, r5);
}
