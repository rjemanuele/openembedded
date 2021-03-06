require klibc-common.inc

SRC_URI += "file://fstype-sane-vfat-and-jffs2-for-1.5.patch \
            file://modprobe.patch \
            file://dash_readopt.patch \
            file://wc.patch \
            file://staging.patch \
            file://klibc_kexecsyscall.patch \
            file://mntproc-definitions.patch \
            file://arm-signal-cleanup.patch \
            file://socket.h.patch \
            file://isystem.patch \
            "

KLIBC_FETCHDIR = "1.5"

KLIBC_ARCH_x86 = 'x86'
KLIBC_ARCH_i486 = 'x86'
KLIBC_ARCH_i586 = 'x86'
KLIBC_ARCH_i686 = 'x86'
KLIBC_ARCH_pentium = 'x86'

EXTRA_OEMAKE = "'KLIBCARCH=${KLIBC_ARCH}' \
                'CROSS_COMPILE=${TARGET_PREFIX}' \
                'KLIBCKERNELSRC=${STAGING_KERNEL_DIR}' \
                "

do_configure () {
        ln -sf ${STAGING_KERNEL_DIR} linux
        cd ${S}/usr/klibc/arch/
        ln -s i386 x86
        cd ${S}/usr/include/arch/
        ln -s i386 x86
        cd ${S}
}

SRC_URI[md5sum] = "5c8b6577b9acb3809cace6e118cdd55b"
SRC_URI[sha256sum] = "e4104f8b34a5f354222bd4622f50b58c6218bf70614450d68539cbef666b6446"

do_install_append() {
        install -m 755 usr/utils/${KLIBC_UTILS_VARIANT}/dmesg ${D}${base_bindir}
        install -m 755 usr/utils/${KLIBC_UTILS_VARIANT}/sync ${D}${base_bindir}
        install -m 755 usr/utils/${KLIBC_UTILS_VARIANT}/ls ${D}${base_bindir}
}
