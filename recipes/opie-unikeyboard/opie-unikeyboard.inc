DESCRIPTION = "Unicode input method"
SECTION = "opie/inputmethods"
PRIORITY = "optional"
LICENSE = "GPL"
APPNAME = "qunikeyboard"


S = "${WORKDIR}/unikeyboard"

inherit opie

pkg_postinst() {
#!/bin/sh
if [ -n "$D" ]; then exit 1; fi
if pidof -s qpe >/dev/null; then
  ${bindir}/qcop QPE/TaskBar "reloadApplets()"
else
  exit 0
fi
}

pkg_postrm() {
#!/bin/sh
if [ -n "$D" ]; then exit 1; fi
${bindir}/qcop QPE/TaskBar "reloadInputMethods()"
}

# FILES plugins/inputmethods/libqunikeyboard.so*
do_install() {
}

