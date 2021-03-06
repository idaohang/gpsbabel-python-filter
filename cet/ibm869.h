/*

    Data automatically generated from recode output:

        'recode -lf "IBM869" 2>/dev/null'


    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111 USA

*/

#ifndef ibm869_h
#define ibm869_h

#define cet_cs_name_ibm869 "IBM869"

const char *cet_cs_alias_ibm869[] = 
{
	"IBM869", "869", "CP869", "cp-gr",
	NULL
};

#define cet_ucs4_ofs_ibm869 128
#define cet_ucs4_cnt_ibm869 128

const int cet_ucs4_map_ibm869[cet_ucs4_cnt_ibm869] =
{
	    -1,     -1,     -1,     -1,     -1,     -1, 0x0386,     -1, 
	0x00b7, 0x00ac, 0x00a6, 0x201b, 0x2019, 0x0388, 0x2014, 0x0389, 
	0x038a, 0x03aa, 0x038c,     -1,     -1, 0x038e, 0x03ab, 0x00a9, 
	0x038f, 0x00b2, 0x00b3, 0x03ac, 0x00a3, 0x03ad, 0x03ae, 0x03af, 
	0x03ca, 0x0390, 0x03cc, 0x03cd, 0x0391, 0x0392, 0x0393, 0x0394, 
	0x0395, 0x0396, 0x0397, 0x00bd, 0x0398, 0x0399, 0x00ab, 0x00bb, 
	0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x039a, 0x039b, 0x039c, 
	0x039d, 0x2563, 0x2551, 0x2557, 0x255d, 0x039e, 0x039f, 0x2510, 
	0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x03a0, 0x03a1, 
	0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x03a3, 
	0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03b1, 0x03b2, 
	0x03b3, 0x2518, 0x250c, 0x2588, 0x2584, 0x03b4, 0x03b5, 0x2580, 
	0x03b6, 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 
	0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c3, 0x03c2, 0x03c4, 0x00b4, 
	0x00ad, 0x00b1, 0x03c5, 0x03c6, 0x03c7, 0x00a7, 0x03c8, 0x0385, 
	0x00b0, 0x00a8, 0x03c9, 0x03cb, 0x03b0, 0x03ce, 0x25a0, 0x00a0
};

#define cet_ucs4_to_ibm869_ct 119

const cet_ucs4_link_t cet_ucs4_to_ibm869_links[cet_ucs4_to_ibm869_ct] =
{
	 {0x00a0, 0xff} /* space */,
	 {0x00a3, 0x9c} /* sign */,
	 {0x00a6, 0x8a} /* bar */,
	 {0x00a7, 0xf5} /* sign */,
	 {0x00a8, 0xf9} /* diaeresis */,
	 {0x00a9, 0x97} /* sign */,
	 {0x00ab, 0xae} /* double angle quotation mark */,
	 {0x00ac, 0x89} /* sign */,
	 {0x00ad, 0xf0} /* hyphen */,
	 {0x00b0, 0xf8} /* sign */,
	 {0x00b1, 0xf1} /* sign */,
	 {0x00b2, 0x99} /* two */,
	 {0x00b3, 0x9a} /* three */,
	 {0x00b4, 0xef} /* accent */,
	 {0x00b7, 0x88} /* dot */,
	 {0x00bb, 0xaf} /* double angle quotation mark */,
	 {0x00bd, 0xab} /* fraction one half */,
	 {0x0385, 0xf7} /* accent and diaeresis (tonos and dialytika) */,
	 {0x0386, 0x86} /* capital letter alpha with acute */,
	 {0x0388, 0x8d} /* capital letter epsilon with acute */,
	 {0x0389, 0x8f} /* capital letter eta with acute */,
	 {0x038a, 0x90} /* capital letter iota with acute */,
	 {0x038c, 0x92} /* capital letter omicron with acute */,
	 {0x038e, 0x95} /* capital letter upsilon with acute */,
	 {0x038f, 0x98} /* capital letter omega with acute */,
	 {0x0390, 0xa1} /* small letter iota with acute and diaeresis */,
	 {0x0391, 0xa4} /* capital letter alpha */,
	 {0x0392, 0xa5} /* capital letter beta */,
	 {0x0393, 0xa6} /* capital letter gamma */,
	 {0x0394, 0xa7} /* capital letter delta */,
	 {0x0395, 0xa8} /* capital letter epsilon */,
	 {0x0396, 0xa9} /* capital letter zeta */,
	 {0x0397, 0xaa} /* capital letter eta */,
	 {0x0398, 0xac} /* capital letter theta */,
	 {0x0399, 0xad} /* capital letter iota */,
	 {0x039a, 0xb5} /* capital letter kappa */,
	 {0x039b, 0xb6} /* capital letter lamda */,
	 {0x039c, 0xb7} /* capital letter mu */,
	 {0x039d, 0xb8} /* capital letter nu */,
	 {0x039e, 0xbd} /* capital letter xi */,
	 {0x039f, 0xbe} /* capital letter omicron */,
	 {0x03a0, 0xc6} /* capital letter pi */,
	 {0x03a1, 0xc7} /* capital letter rho */,
	 {0x03a3, 0xcf} /* capital letter sigma */,
	 {0x03a4, 0xd0} /* capital letter tau */,
	 {0x03a5, 0xd1} /* capital letter upsilon */,
	 {0x03a6, 0xd2} /* capital letter phi */,
	 {0x03a7, 0xd3} /* capital letter chi */,
	 {0x03a8, 0xd4} /* capital letter psi */,
	 {0x03a9, 0xd5} /* capital letter omega */,
	 {0x03aa, 0x91} /* capital letter iota with diaeresis */,
	 {0x03ab, 0x96} /* capital letter upsilon with diaeresis */,
	 {0x03ac, 0x9b} /* small letter alpha with acute */,
	 {0x03ad, 0x9d} /* small letter epsilon with acute */,
	 {0x03ae, 0x9e} /* small letter eta with acute */,
	 {0x03af, 0x9f} /* small letter iota with acute */,
	 {0x03b0, 0xfc} /* small letter upsilon with acute and diaeresis */,
	 {0x03b1, 0xd6} /* small letter alpha */,
	 {0x03b2, 0xd7} /* small letter beta */,
	 {0x03b3, 0xd8} /* small letter gamma */,
	 {0x03b4, 0xdd} /* small letter delta */,
	 {0x03b5, 0xde} /* small letter epsilon */,
	 {0x03b6, 0xe0} /* small letter zeta */,
	 {0x03b7, 0xe1} /* small letter eta */,
	 {0x03b8, 0xe2} /* small letter theta */,
	 {0x03b9, 0xe3} /* small letter iota */,
	 {0x03ba, 0xe4} /* small letter kappa */,
	 {0x03bb, 0xe5} /* small letter lamda */,
	 {0x03bc, 0xe6} /* small letter mu */,
	 {0x03bd, 0xe7} /* small letter nu */,
	 {0x03be, 0xe8} /* small letter xi */,
	 {0x03bf, 0xe9} /* small letter omicron */,
	 {0x03c0, 0xea} /* small letter pi */,
	 {0x03c1, 0xeb} /* small letter rho */,
	 {0x03c2, 0xed} /* small letter final sigma */,
	 {0x03c3, 0xec} /* small letter sigma */,
	 {0x03c4, 0xee} /* small letter tau */,
	 {0x03c5, 0xf2} /* small letter upsilon */,
	 {0x03c6, 0xf3} /* small letter phi */,
	 {0x03c7, 0xf4} /* small letter chi */,
	 {0x03c8, 0xf6} /* small letter psi */,
	 {0x03c9, 0xfa} /* small letter omega */,
	 {0x03ca, 0xa0} /* small letter iota with diaeresis */,
	 {0x03cb, 0xfb} /* small letter upsilon with diaeresis */,
	 {0x03cc, 0xa2} /* small letter omicron with acute */,
	 {0x03cd, 0xa3} /* small letter upsilon with acute */,
	 {0x03ce, 0xfd} /* small letter omega with acute */,
	 {0x2014, 0x8e} /* dash */,
	 {0x2019, 0x8c} /* single quotation mark */,
	 {0x201b, 0x8b} /* high-reversed-9 quotation mark */,
	 {0x2500, 0xc4} /* drawings light horizontal */,
	 {0x2502, 0xb3} /* drawings light vertical */,
	 {0x250c, 0xda} /* drawings light down and right */,
	 {0x2510, 0xbf} /* drawings light down and left */,
	 {0x2514, 0xc0} /* drawings light up and right */,
	 {0x2518, 0xd9} /* drawings light up and left */,
	 {0x251c, 0xc3} /* drawings light vertical and right */,
	 {0x2524, 0xb4} /* drawings light vertical and left */,
	 {0x252c, 0xc2} /* drawings light down and horizontal */,
	 {0x2534, 0xc1} /* drawings light up and horizontal */,
	 {0x253c, 0xc5} /* drawings light vertical and horizontal */,
	 {0x2550, 0xcd} /* drawings heavy horizontal */,
	 {0x2551, 0xba} /* drawings heavy vertical */,
	 {0x2554, 0xc9} /* drawings heavy down and right */,
	 {0x2557, 0xbb} /* drawings heavy down and left */,
	 {0x255a, 0xc8} /* drawings heavy up and right */,
	 {0x255d, 0xbc} /* drawings heavy up and left */,
	 {0x2560, 0xcc} /* drawings heavy vertical and right */,
	 {0x2563, 0xb9} /* drawings heavy vertical and left */,
	 {0x2566, 0xcb} /* drawings heavy down and horizontal */,
	 {0x2569, 0xca} /* drawings heavy up and horizontal */,
	 {0x256c, 0xce} /* drawings heavy vertical and horizontal */,
	 {0x2580, 0xdf} /* half block */,
	 {0x2584, 0xdc} /* half block */,
	 {0x2588, 0xdb} /* block */,
	 {0x2591, 0xb0} /* shade */,
	 {0x2592, 0xb1} /* shade */,
	 {0x2593, 0xb2} /* shade */,
	 {0x25a0, 0xfe} /* square */
};

/*
#define cet_ucs4_to_ibm869_extra_ct 0
const cet_ucs4_link_t cet_ucs4_to_ibm869_extra[cet_ucs4_to_ibm869_extra_ct] = {};
*/

cet_cs_vec_t cet_cs_vec_ibm869 =	/* defined in cet.h */
{	
	cet_cs_name_ibm869,		/* name of character set	*/
	cet_cs_alias_ibm869,		/* alias table			*/

	NULL,				/* ... to UCS-4 converter (multi-byte) */
	NULL,				/* UCS-4 to ... converter (multi-byte) */

	cet_ucs4_map_ibm869,		/* char to UCS-4 value table	*/
	cet_ucs4_ofs_ibm869,		/* first non standard character	*/
	cet_ucs4_cnt_ibm869,		/* number of values in table	*/

	cet_ucs4_to_ibm869_links,	/* UCS-4 to char links		*/
	cet_ucs4_to_ibm869_ct,		/* number of links		*/

	NULL,				/* hand made UCS-4 links	*/
	0,				/* number of extra links	*/

	NULL	/* for internal use */
};


/*
const int ibm869_ucs4_full_map[] =
{
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 
	0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 
	0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 
	0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f, 
	0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 
	0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 
	0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 
	0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 
	0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 
	0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 
	0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 
	0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 
	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 
	0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 
	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 
	0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 
	    -1,     -1,     -1,     -1,     -1,     -1, 0x0386,     -1, 
	0x00b7, 0x00ac, 0x00a6, 0x201b, 0x2019, 0x0388, 0x2014, 0x0389, 
	0x038a, 0x03aa, 0x038c,     -1,     -1, 0x038e, 0x03ab, 0x00a9, 
	0x038f, 0x00b2, 0x00b3, 0x03ac, 0x00a3, 0x03ad, 0x03ae, 0x03af, 
	0x03ca, 0x0390, 0x03cc, 0x03cd, 0x0391, 0x0392, 0x0393, 0x0394, 
	0x0395, 0x0396, 0x0397, 0x00bd, 0x0398, 0x0399, 0x00ab, 0x00bb, 
	0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x039a, 0x039b, 0x039c, 
	0x039d, 0x2563, 0x2551, 0x2557, 0x255d, 0x039e, 0x039f, 0x2510, 
	0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x03a0, 0x03a1, 
	0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x03a3, 
	0x03a4, 0x03a5, 0x03a6, 0x03a7, 0x03a8, 0x03a9, 0x03b1, 0x03b2, 
	0x03b3, 0x2518, 0x250c, 0x2588, 0x2584, 0x03b4, 0x03b5, 0x2580, 
	0x03b6, 0x03b7, 0x03b8, 0x03b9, 0x03ba, 0x03bb, 0x03bc, 0x03bd, 
	0x03be, 0x03bf, 0x03c0, 0x03c1, 0x03c3, 0x03c2, 0x03c4, 0x00b4, 
	0x00ad, 0x00b1, 0x03c5, 0x03c6, 0x03c7, 0x00a7, 0x03c8, 0x0385, 
	0x00b0, 0x00a8, 0x03c9, 0x03cb, 0x03b0, 0x03ce, 0x25a0, 0x00a0
};
*/

#endif
