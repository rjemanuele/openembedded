require xorg-driver-video.inc
DEPENDS += " xineramaproto xf86miscproto drm xf86driproto"
PE = "1"
PR = "${INC_PR}.0"

SRC_URI[archive.md5sum] = "6d78c82ea7c2bb0fcb587d7bb4e8f60a"
SRC_URI[archive.sha256sum] = "3e4e9abfd806b36076083ef6cacc93b713bfa4ddefe7005edfc15c64f5174366"
