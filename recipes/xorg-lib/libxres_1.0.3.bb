require xorg-lib-common.inc
DESCRIPTION = "X11 Resource extension library"
DEPENDS += "libxext resourceproto"
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "de66ffb657aba64c9d6dbdeabb757f3e"
SRC_URI[archive.sha256sum] = "a6d5ba7573f5ec0f091095f01b51d1e671dd0f14acb5b8559cdf366e398a0230"

XORG_PN = "libXres"
