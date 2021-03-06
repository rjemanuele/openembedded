require xorg-lib-common.inc
DESCRIPTION = "X11 Rendering Extension client library"
LICENSE = "BSD-X"
DEPENDS += "virtual/libx11 renderproto xproto libxdmcp"
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "dc266e850c51368f964e0d67bf5fb5e6"
SRC_URI[archive.sha256sum] = "5682d343dd4e7ef291a6577e956c331946ce5801d8fa076284a01b41de3017ec"

BBCLASSEXTEND = "native nativesdk"

XORG_PN = "libXrender"
