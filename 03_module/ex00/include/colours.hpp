#ifndef COLOURS_HPP
# define COLOURS_HPP

//Regular text
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

//Regular bold text
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"

//Regular underline text
# define UBLK "\e[4;30m"
# define URED "\e[4;31m"
# define UGRN "\e[4;32m"
# define UYEL "\e[4;33m"
# define UBLU "\e[4;34m"
# define UMAG "\e[4;35m"
# define UCYN "\e[4;36m"
# define UWHT "\e[4;37m"

//Regular background
# define BLKB "\e[40m"
# define REDB "\e[41m"
# define GRNB "\e[42m"
# define YELB "\e[43m"
# define BLUB "\e[44m"
# define MAGB "\e[45m"
# define CYNB "\e[46m"
# define WHTB "\e[47m"

//High intensty background 
# define BLKHB "\e[0;100m"
# define REDHB "\e[0;101m"
# define GRNHB "\e[0;102m"
# define YELHB "\e[0;103m"
# define BLUHB "\e[0;104m"
# define MAGHB "\e[0;105m"
# define CYNHB "\e[0;106m"
# define WHTHB "\e[0;107m"

//High intensty text
# define HBLK "\e[0;90m"
# define HRED "\e[0;91m"
# define HGRN "\e[0;92m"
# define HYEL "\e[0;93m"
# define HBLU "\e[0;94m"
# define HMAG "\e[0;95m"
# define HCYN "\e[0;96m"
# define HWHT "\e[0;97m"

//Bold high intensity text
# define BHBLK "\e[1;90m"
# define BHRED "\e[1;91m"
# define BHGRN "\e[1;92m"
# define BHYEL "\e[1;93m"
# define BHBLU "\e[1;94m"
# define BHMAG "\e[1;95m"
# define BHCYN "\e[1;96m"
# define BHWHT "\e[1;97m"

//Reset
# define RESET "\e[0m"

//HEX COLORS 
//https://www.w3schools.com/colors/colors_picker.asp

//GREEN FROM BLACK TO WHITE
//FFFFFF IS WHITE 00000000 IS BLACK
# define COLOR_WHITE 0xFFFFFF
# define COLOR_9 0xd9ffcc
# define COLOR_8 0xb3ff99
# define COLOR_7 0x8cff66
# define COLOR_6 0x66ff33
# define COLOR_5 0x40ff00
# define COLOR_4 0x33cc00
# define COLOR_3 0x269900
# define COLOR_2 0x1a6600
# define COLOR_1 0x0d3300
# define COLOR_BLACK 0x000000

//BLUE PALET
# define COLOR_20 0xFFFFFF
# define COLOR_19 0xCCCFFF
# define COLOR_18 0x9999FF
# define COLOR_17 0x6666FF
# define COLOR_16 0x3333FF
# define COLOR_15 0x0000FF
# define COLOR_14 0x0000CC
# define COLOR_13 0x000099
# define COLOR_12 0x000066
# define COLOR_11 0x000033
# define COLOR_00 0x000000

//RED PALET
# define COLOR_30 0xFFFFFF
# define COLOR_29 0xFFCCCC
# define COLOR_28 0xFF9999
# define COLOR_27 0xFF6666
# define COLOR_26 0xFF3333
# define COLOR_25 0xFF0000
# define COLOR_24 0xCC0000
# define COLOR_23 0x990000
# define COLOR_22 0x660000
# define COLOR_21 0x330000
# define COLOR_000 0x000000

//BLACK PALET
# define COLOR_40 0xFFFFFF
# define COLOR_39 0xE6E6E6
# define COLOR_38 0xCCCCCC
# define COLOR_37 0xB3B3B3
# define COLOR_36 0x999999
# define COLOR_35 0x808080
# define COLOR_34 0x666666
# define COLOR_33 0x4D4D4D
# define COLOR_32 0x333333
# define COLOR_31 0x1A1A1A
# define COLOR_0000 0x000000

//NEON PALET
# define NEON_WHITE	0xFFFFFF
# define NEON_RE 0xfe0000
# define NEON_OR 0xff7400
# define NEON_YE 0xfdfe02
# define NEON_GR 0xf0bff01
# define NEON_LT_GR 0x74ee15
# define NEON_BL 0x011efe
# define NEON_LT_BL 0x4deeea
# define NEON_PUR 0xfe00f6
# define NEON_LT_PUR 0xf000ff
# define NEON_BLACK 0x000000

#endif
