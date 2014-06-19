int unicode_to_apple_roman(int unicode_char)
{
	if( unicode_char >= 0 && unicode_char <= 0x7f )
	{
		return unicode_char;
	}

	switch( unicode_char )
	{
		case 0x00C4:    return 0x80; // Ä
		case 0x00C5:    return 0x81; // Å
		case 0x00C7:    return 0x82; // Ç
		case 0x00C9:    return 0x83; // É
		case 0x00D1:    return 0x84; // Ñ
		case 0x00D6:    return 0x85; // Ö
		case 0x00DC:    return 0x86; // Ü
		case 0x00E1:    return 0x87; // á
		case 0x00E0:    return 0x88; // à
		case 0x00E2:    return 0x89; // â
		case 0x00E4:    return 0x8A; // ä
		case 0x00E3:    return 0x8B; // ã
		case 0x00E5:    return 0x8C; // å
		case 0x00E7:    return 0x8D; // ç
		case 0x00E9:    return 0x8E; // é
		case 0x00E8:    return 0x8F; // è
		case 0x00EA:    return 0x90; // ê
		case 0x00EB:    return 0x91; // ë
		case 0x00ED:    return 0x92; // í
		case 0x00EC:    return 0x93; // ì
		case 0x00EE:    return 0x94; // î
		case 0x00EF:    return 0x95; // ï
		case 0x00F1:    return 0x96; // ñ
		case 0x00F3:    return 0x97; // ó
		case 0x00F2:    return 0x98; // ò
		case 0x00F4:    return 0x99; // ô
		case 0x00F6:    return 0x9A; // ö
		case 0x00F5:    return 0x9B; // õ
		case 0x00FA:    return 0x9C; // ú
		case 0x00F9:    return 0x9D; // ù
		case 0x00FB:    return 0x9E; // û
		case 0x00FC:    return 0x9F; // ü
		case 0x2020:    return 0xA0; // †
		case 0x00B0:    return 0xA1; // °
		case 0x00A2:    return 0xA2; // ¢
		case 0x00A3:    return 0xA3; // £
		case 0x00A7:    return 0xA4; // §
		case 0x2022:    return 0xA5; // •
		case 0x00B6:    return 0xA6; // ¶
		case 0x00DF:    return 0xA7; // ß
		case 0x00AE:    return 0xA8; // ®
		case 0x00A9:    return 0xA9; // ©
		case 0x2122:    return 0xAA; // ™
		case 0x00B4:    return 0xAB; // ´
		case 0x00A8:    return 0xAC; // ¨
		case 0x2260:    return 0xAD; // ≠
		case 0x00C6:    return 0xAE; // Æ
		case 0x00D8:    return 0xAF; // Ø
		case 0x221E:    return 0xB0; // ∞
		case 0x00B1:    return 0xB1; // ±
		case 0x2264:    return 0xB2; // ≤
		case 0x2265:    return 0xB3; // ≥
		case 0x00A5:    return 0xB4; // ¥
		case 0x00B5:    return 0xB5; // µ
		case 0x2202:    return 0xB6; // ∂
		case 0x2211:    return 0xB7; // ∑
		case 0x220F:    return 0xB8; // ∏
		case 0x03C0:    return 0xB9; // π
		case 0x222B:    return 0xBA; // ∫
		case 0x00AA:    return 0xBB; // ª
		case 0x00BA:    return 0xBC; // º
		case 0x03A9:    return 0xBD; // Ω
		case 0x00E6:    return 0xBE; // æ
		case 0x00F8:    return 0xBF; // ø
		case 0x00BF:    return 0xC0; // ¿
		case 0x00A1:    return 0xC1; // ¡
		case 0x00AC:    return 0xC2; // ¬
		case 0x221A:    return 0xC3; // √
		case 0x0192:    return 0xC4; // ƒ
		case 0x2248:    return 0xC5; // ≈
		case 0x2206:    return 0xC6; // ∆
		case 0x00AB:    return 0xC7; // «
		case 0x00BB:    return 0xC8; // »
		case 0x2026:    return 0xC9; // …
		case 0x00A0:    return 0xCA; //  
		case 0x00C0:    return 0xCB; // À
		case 0x00C3:    return 0xCC; // Ã
		case 0x00D5:    return 0xCD; // Õ
		case 0x0152:    return 0xCE; // Œ
		case 0x0153:    return 0xCF; // œ
		case 0x2013:    return 0xD0; // –
		case 0x2014:    return 0xD1; // —
		case 0x201C:    return 0xD2; // “
		case 0x201D:    return 0xD3; // ”
		case 0x2018:    return 0xD4; // ‘
		case 0x2019:    return 0xD5; // ’
		case 0x00F7:    return 0xD6; // ÷
		case 0x25CA:    return 0xD7; // ◊
		case 0x00FF:    return 0xD8; // ÿ
		case 0x0178:    return 0xD9; // Ÿ
		case 0x2044:    return 0xDA; // ⁄
		case 0x20AC:    return 0xDB; // €
		case 0x2039:    return 0xDC; // ‹
		case 0x203A:    return 0xDD; // ›
		case 0xFB01:    return 0xDE; // ﬁ
		case 0xFB02:    return 0xDF; // ﬂ
		case 0x2021:    return 0xE0; // ‡
		case 0x00B7:    return 0xE1; // ·
		case 0x201A:    return 0xE2; // ‚
		case 0x201E:    return 0xE3; // „
		case 0x2030:    return 0xE4; // ‰
		case 0x00C2:    return 0xE5; // Â
		case 0x00CA:    return 0xE6; // Ê
		case 0x00C1:    return 0xE7; // Á
		case 0x00CB:    return 0xE8; // Ë
		case 0x00C8:    return 0xE9; // È
		case 0x00CD:    return 0xEA; // Í
		case 0x00CE:    return 0xEB; // Î
		case 0x00CF:    return 0xEC; // Ï
		case 0x00CC:    return 0xED; // Ì
		case 0x00D3:    return 0xEE; // Ó
		case 0x00D4:    return 0xEF; // Ô
		case 0xF8FF:    return 0xF0; // 
		case 0x00D2:    return 0xF1; // Ò
		case 0x00DA:    return 0xF2; // Ú
		case 0x00DB:    return 0xF3; // Û
		case 0x00D9:    return 0xF4; // Ù
		case 0x0131:    return 0xF5; // ı
		case 0x02C6:    return 0xF6; // ˆ
		case 0x02DC:    return 0xF7; // ˜
		case 0x00AF:    return 0xF8; // ¯
		case 0x02D8:    return 0xF9; // ˘
		case 0x02D9:    return 0xFA; // ˙
		case 0x02DA:    return 0xFB; // ˚
		case 0x00B8:    return 0xFC; // ¸
		case 0x02DD:    return 0xFD; // ˝
		case 0x02DB:    return 0xFE; // ˛
		case 0x02C7:    return 0xFF; // ˇ

		default:        return unicode_char;
	}
}
