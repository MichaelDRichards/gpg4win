const char * const full_files[] =
{
  "bin/dbus-daemon.exe",
  "bin/kbuildsycoca4.exe",
  "bin/kdebugdialog.exe",
  "bin/kgpgconf.exe",
  "bin/kleopatra.exe",
  "bin/kwatchgnupg.exe",
  "bin/libkdecore.dll",
  "claws-mail-manual.pdf",
  "claws-mail.exe",
  "dbus-env.bat",
  "dbus-launch.exe",
  "dbus-monitor.exe",
  "dbus-send.exe",
  "dirmngr-client.exe",
  "dirmngr.exe",
  "dirmngr_ldap.exe",
  "etc/fonts/fonts.conf",
  "etc/gtk-2.0/im-multipress.conf",
  "etc/pango/pango.modules",
  "etc/session.conf",
  "etc/system.conf",
  "freetype6.dll",
  "gdbus.exe",
  "gdk-pixbuf-pixdata.exe",
  "gdk-pixbuf-query-loaders.exe",
  "gio-querymodules.exe",
  "glib-compile-resources.exe",
  "glib-compile-schemas.exe",
  "glib-genmarshal.exe",
  "gobject-query.exe",
  "gpa.exe",
  "gpg-agent.exe",
  "gpg-connect-agent.exe",
  "gpg-error.exe",
  "gpg-preset-passphrase.exe",
  "gpg-protect-tool.exe",
  "gpg2.exe",
  "gpg2keys_curl.exe",
  "gpg2keys_finger.exe",
  "gpg2keys_hkp.exe",
  "gpg2keys_kdns.exe",
  "gpg2keys_ldap.exe",
  "gpgconf.exe",
  "gpgme-w32spawn.exe",
  "gpgsm.exe",
  "gpgtar.exe",
  "gpgv2.exe",
  "gresource.exe",
  "gsettings.exe",
  "gspawn-win32-helper-console.exe",
  "gspawn-win32-helper.exe",
  "gtk-query-immodules-2.0.exe",
  "gtk-update-icon-cache.exe",
  "gtk-update-icon-cache.exe.manifest",
  "include/assuan.h",
  "include/gcrypt-module.h",
  "include/gcrypt.h",
  "include/gpg-error.h",
  "include/gpgme.h",
  "include/ksba.h",
  "intl.dll",
  "kbuildsycoca4.exe",
  "kdebugdialog.exe",
  "kgpgconf.exe",
  "kleopatra.exe",
  "kwatchgnupg.exe",
  "lib/claws-mail/plugins/address_keeper.dll",
  "lib/claws-mail/plugins/attachwarner.dll",
  "lib/claws-mail/plugins/att_remover.dll",
  "lib/claws-mail/plugins/bsfilter.dll",
  "lib/claws-mail/plugins/fetchinfo.dll",
  "lib/claws-mail/plugins/gtkhtml2_viewer.dll",
  "lib/claws-mail/plugins/notification.dll",
  "lib/claws-mail/plugins/pgpcore.dll",
  "lib/claws-mail/plugins/pgpinline.deps",
  "lib/claws-mail/plugins/pgpinline.dll",
  "lib/claws-mail/plugins/pgpmime.deps",
  "lib/claws-mail/plugins/pgpmime.dll",
  "lib/claws-mail/plugins/rssyl.dll",
  "lib/claws-mail/plugins/smime.deps",
  "lib/claws-mail/plugins/smime.dll",
  "lib/claws-mail/plugins/spamreport.dll",
  "lib/claws-mail/plugins/tnef_parse.dll",
  "lib/claws-mail/plugins/vcalendar.dll",
  "lib/enchant/libenchant_myspell.dll",
  "lib/gtk-2.0/2.10.0/engines/libpixmap.dll",
  "lib/gtk-2.0/2.10.0/engines/libwimp.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-am-et.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-cedilla.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-cyrillic-translit.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-ime.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-inuktitut.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-ipa.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-multipress.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-thai.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-ti-er.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-ti-et.dll",
  "lib/gtk-2.0/2.10.0/immodules/im-viqr.dll",
  "lib/gtk-2.0/modules/libgail.dll",
  "lib/kde4/kcm_kleopatra.dll",
  "libadns-1.dll",
  "libassuan-0.dll",
  "libatk-1.0-0.dll",
  "libattica.dll",
  "libcairo-2.dll",
  "libcairo-gobject-2.dll",
  "libcairo-script-interpreter-2.dll",
  "libcurl-4.dll",
  "libdbus-1.dll",
  "libdbusmenu-qt.dll",
  "libenchant-1.dll",
  "libetpan-13.dll",
  "libexpat-1.dll",
  "libexpat.dll",
  "libffi-6.dll",
  "libfontconfig-1.dll",
  "libgailutil-18.dll",
  "libgcc_s_sjlj-1.dll",
  "libgcrypt-20.dll",
  "libgdk-win32-2.0-0.dll",
  "libgdk_pixbuf-2.0-0.dll",
  "libgio-2.0-0.dll",
  "libglib-2.0-0.dll",
  "libgmodule-2.0-0.dll",
  "libgnutls-26.dll",
  "libgnutls-extra-26.dll",
  "libgnutls-openssl-27.dll",
  "libgobject-2.0-0.dll",
  "libgpg-error-0.dll",
  "libgpgme++.dll",
  "libgpgme-11.dll",
  "libgpgme-glib-11.dll",
  "libgsasl-7.dll",
  "libgthread-2.0-0.dll",
  "libgtk-win32-2.0-0.dll",
  "libiconv-2.dll",
  "libintl-8.dll",
  "libintl.dll",
  "libkcmutils.dll",
  "libkdeui.dll",
  "libkdewin.dll",
  "libkleo.dll",
  "libkleopatraclientcore.dll",
  "libkleopatraclientgui.dll",
  "libkmime.dll",
  "libksba-8.dll",
  "libpango-1.0-0.dll",
  "libpangocairo-1.0-0.dll",
  "libpangoft2-1.0-0.dll",
  "libpangowin32-1.0-0.dll",
  "libpng14-14.dll",
  "libqgpgme.dll",
  "libregex-1.dll",
  "libtasn1-3.dll",
  "libw32pth-0.dll",
  "libxml2-2.dll",
  "md5sum.exe",
  "pango-querymodules.exe",
  "paperkey.exe",
  "pinentry-gtk-2.exe",
  "pinentry-qt4.exe",
  "pinentry-w32.exe",
  "plugins/imageformats/qgif4.dll",
  "plugins/imageformats/qico4.dll",
  "plugins/imageformats/qjpeg4.dll",
  "plugins/imageformats/qmng4.dll",
  "plugins/imageformats/qsvg4.dll",
  "plugins/imageformats/qtiff4.dll",
  "pthreadGC2.dll",
  "pub/gpa.exe",
  "pub/gpg-connect-agent.exe",
  "pub/gpg.exe",
  "pub/gpg2.exe",
  "pub/gpgconf.exe",
  "pub/gpgsm.exe",
  "pub/gpgv.exe",
  "pub/libgcc_s_sjlj-1.dll",
  "pub/libstdc++-6.dll",
  "qdbus.exe",
  "qt.conf",
  "QtCore4.dll",
  "QtDBus4.dll",
  "QtGui4.dll",
  "QtNetwork4.dll",
  "QtSvg4.dll",
  "QtXml4.dll",
  "scdaemon.exe",
  "scute.dll",
  "sha1sum.exe",
  "sha256sum.exe",
  "share/applications/kde4/kleopatra.desktop",
  "share/applications/kde4/kleopatra_import.desktop",
  "share/apps/kcharselect/kcharselect-data",
  "share/apps/kdeui/about/bar-bottom-left.png",
  "share/apps/kdeui/about/bar-bottom-middle.png",
  "share/apps/kdeui/about/bar-bottom-right.png",
  "share/apps/kdeui/about/bar-middle-left.png",
  "share/apps/kdeui/about/bar-middle-right.png",
  "share/apps/kdeui/about/bar-top-left.png",
  "share/apps/kdeui/about/bar-top-middle.png",
  "share/apps/kdeui/about/bar-top-right.png",
  "share/apps/kdeui/about/box-bottom-left.png",
  "share/apps/kdeui/about/box-bottom-middle.png",
  "share/apps/kdeui/about/box-bottom-right.png",
  "share/apps/kdeui/about/box-middle-left.png",
  "share/apps/kdeui/about/box-middle-right.png",
  "share/apps/kdeui/about/box-top-left.png",
  "share/apps/kdeui/about/box-top-middle.png",
  "share/apps/kdeui/about/box-top-right.png",
  "share/apps/kdeui/about/kde_infopage.css",
  "share/apps/kdeui/about/kde_infopage_rtl.css",
  "share/apps/kdeui/about/top-middle.png",
  "share/apps/kdeui/pics/aboutkde.png",
  "share/apps/kdeui/pics/kdeprint_nup1.png",
  "share/apps/kdeui/pics/kdeprint_nup2.png",
  "share/apps/kdeui/pics/kdeprint_nup4.png",
  "share/apps/kdeui/pics/kdeprint_nupother.png",
  "share/apps/kdeui/pics/ktip-bulb.png",
  "share/apps/kleopatra/kleopatra.rc",
  "share/apps/kleopatra/pics/gpg4win-compact.png",
  "share/apps/kleopatra/pics/gpg4win.png",
  "share/apps/kleopatra/pics/kleopatra_splashscreen.png",
  "share/apps/kleopatra/pics/kleopatra_splashscreen.svgz",
  "share/apps/kleopatra/pics/kleopatra_wizard.png",
  "share/apps/kleopatra/pics/kleopatra_wizard.svgz",
  "share/apps/kwatchgnupg/kwatchgnupgui.rc",
  "share/apps/kwatchgnupg/pics/kwatchgnupg.png",
  "share/apps/kwatchgnupg/pics/kwatchgnupg2.png",
  "share/apps/libkleopatra/pics/chiasmus_chi.png",
  "share/apps/libkleopatra/pics/hi16-app-gpg.png",
  "share/apps/libkleopatra/pics/hi16-app-gpgsm.png",
  "share/apps/libkleopatra/pics/hi22-app-gpg.png",
  "share/apps/libkleopatra/pics/hi22-app-gpgsm.png",
  "share/apps/libkleopatra/pics/hi32-app-gpg.png",
  "share/apps/libkleopatra/pics/hi32-app-gpgsm.png",
  "share/apps/libkleopatra/pics/key.png",
  "share/apps/libkleopatra/pics/key_bad.png",
  "share/apps/libkleopatra/pics/key_ok.png",
  "share/apps/libkleopatra/pics/key_unknown.png",
  "share/apps/libkleopatra/pics/smartcard.xpm",
  "share/claws-mail/ca-certificates.crt",
  "share/config/colors/40.colors",
  "share/config/colors/Oxygen.colors",
  "share/config/colors/Rainbow.colors",
  "share/config/colors/Royal.colors",
  "share/config/colors/Web.colors",
  "share/config/kdebug.areas",
  "share/config/kdebugrc",
  "share/config/kdeglobals",
  "share/config/libkleopatrarc",
  "share/config/ui/ui_standards.rc",
  "share/doc/HTML/common/1.png",
  "share/doc/HTML/common/10.png",
  "share/doc/HTML/common/2.png",
  "share/doc/HTML/common/3.png",
  "share/doc/HTML/common/4.png",
  "share/doc/HTML/common/5.png",
  "share/doc/HTML/common/6.png",
  "share/doc/HTML/common/7.png",
  "share/doc/HTML/common/8.png",
  "share/doc/HTML/common/9.png",
  "share/doc/HTML/common/artistic-license.html",
  "share/doc/HTML/common/block_title_bottom.png",
  "share/doc/HTML/common/block_title_mid.png",
  "share/doc/HTML/common/block_title_top.png",
  "share/doc/HTML/common/bottom-left.png",
  "share/doc/HTML/common/bottom-middle.png",
  "share/doc/HTML/common/bottom-right.png",
  "share/doc/HTML/common/bsd-license.html",
  "share/doc/HTML/common/doxygen.css",
  "share/doc/HTML/common/favicon.ico",
  "share/doc/HTML/common/fdl-license",
  "share/doc/HTML/common/fdl-license.html",
  "share/doc/HTML/common/fdl-notice.html",
  "share/doc/HTML/common/fdl-translated.html",
  "share/doc/HTML/common/footer.html",
  "share/doc/HTML/common/gpl-license",
  "share/doc/HTML/common/gpl-license.html",
  "share/doc/HTML/common/gpl-translated.html",
  "share/doc/HTML/common/header.html",
  "share/doc/HTML/common/kde-default.css",
  "share/doc/HTML/common/kde-docs.css",
  "share/doc/HTML/common/kde-localised.css",
  "share/doc/HTML/common/kde_logo_bg.png",
  "share/doc/HTML/common/lgpl-license",
  "share/doc/HTML/common/lgpl-license.html",
  "share/doc/HTML/common/lgpl-translated.html",
  "share/doc/HTML/common/mainfooter.html",
  "share/doc/HTML/common/mainheader.html",
  "share/doc/HTML/common/qpl-license.html",
  "share/doc/HTML/common/tabs.css",
  "share/doc/HTML/common/top-kde.jpg",
  "share/doc/HTML/common/top-left.jpg",
  "share/doc/HTML/common/top-left.png",
  "share/doc/HTML/common/top-middle.png",
  "share/doc/HTML/common/top-right.jpg",
  "share/doc/HTML/common/top-right.png",
  "share/doc/HTML/common/top.jpg",
  "share/doc/HTML/common/x11-license.html",
  "share/doc/HTML/common/xml.dcl",
  "share/doc/HTML/de/kleopatra/admin-archive-definitions.html",
  "share/doc/HTML/de/kleopatra/admin-checksum-definitions.html",
  "share/doc/HTML/de/kleopatra/admin-key-filters.html",
  "share/doc/HTML/de/kleopatra/admin.html",
  "share/doc/HTML/de/kleopatra/commandline-options.html",
  "share/doc/HTML/de/kleopatra/configuration-appearance.html",
  "share/doc/HTML/de/kleopatra/configuration-crypto-operations.html",
  "share/doc/HTML/de/kleopatra/configuration-gnupg-system.html",
  "share/doc/HTML/de/kleopatra/configuration-smime-validation.html",
  "share/doc/HTML/de/kleopatra/configuration.html",
  "share/doc/HTML/de/kleopatra/credits-and-license.html",
  "share/doc/HTML/de/kleopatra/functions-newkey.html",
  "share/doc/HTML/de/kleopatra/functions-search.html",
  "share/doc/HTML/de/kleopatra/functions.html",
  "share/doc/HTML/de/kleopatra/index.html",
  "share/doc/HTML/de/kleopatra/introduction.html",
  "share/doc/HTML/de/kleopatra/menu.html",
  "share/doc/HTML/de/kleopatra/menucertificates.html",
  "share/doc/HTML/de/kleopatra/menuhelp.html",
  "share/doc/HTML/de/kleopatra/menusettings.html",
  "share/doc/HTML/de/kleopatra/menutools.html",
  "share/doc/HTML/de/kleopatra/menuview.html",
  "share/doc/HTML/de/kleopatra/menuwindow.html",
  "share/doc/HTML/en/kleopatra/admin-archive-definitions.html",
  "share/doc/HTML/en/kleopatra/admin-checksum-definitions.html",
  "share/doc/HTML/en/kleopatra/admin-key-filters.html",
  "share/doc/HTML/en/kleopatra/admin.html",
  "share/doc/HTML/en/kleopatra/commandline-options.html",
  "share/doc/HTML/en/kleopatra/configuration-appearance.html",
  "share/doc/HTML/en/kleopatra/configuration-crypto-operations.html",
  "share/doc/HTML/en/kleopatra/configuration-gnupg-system.html",
  "share/doc/HTML/en/kleopatra/configuration-smime-validation.html",
  "share/doc/HTML/en/kleopatra/configuration.html",
  "share/doc/HTML/en/kleopatra/credits-and-license.html",
  "share/doc/HTML/en/kleopatra/functions-newkey.html",
  "share/doc/HTML/en/kleopatra/functions-search.html",
  "share/doc/HTML/en/kleopatra/functions.html",
  "share/doc/HTML/en/kleopatra/index.html",
  "share/doc/HTML/en/kleopatra/introduction.html",
  "share/doc/HTML/en/kleopatra/menu.html",
  "share/doc/HTML/en/kleopatra/menucertificates.html",
  "share/doc/HTML/en/kleopatra/menuhelp.html",
  "share/doc/HTML/en/kleopatra/menusettings.html",
  "share/doc/HTML/en/kleopatra/menutools.html",
  "share/doc/HTML/en/kleopatra/menuview.html",
  "share/doc/HTML/en/kleopatra/menuwindow.html",
  "share/enchant/myspell/de.aff",
  "share/enchant/myspell/de.dic",
  "share/enchant/myspell/en_US.aff",
  "share/enchant/myspell/en_US.dic",
  "share/enchant/myspell/fr.aff",
  "share/enchant/myspell/fr.dic",
  "share/glib-2.0/schemas/gschema.dtd",
  "share/gnupg/gpg-agent.man",
  "share/gnupg/gpg-conf.skel",
  "share/gnupg/gpg-connect-agent.man",
  "share/gnupg/gpg2.man",
  "share/gnupg/gpgconf.man",
  "share/gnupg/gpgsm.man",
  "share/gnupg/gpgv2.man",
  "share/gnupg/help.*.txt",
  "share/gnupg/paperkey.man",
  "share/gnupg/qualified.txt",
  "share/gnupg/scdaemon.man",
  "share/gpa/gpa-logo.ppm",
  "share/gpa/gpa.png",
  "share/gpg4win/gpg4win-compendium-de.pdf",
  "share/gpg4win/gpg4win-compendium-en.pdf",
  "share/gpg4win/HOWTO-SMIME.*.txt",
  "share/gpg4win/README.*.txt",
  "share/gpg4win/versioninfo.txt",
  "share/icons/hicolor/128x128/apps/kleopatra.png",
  "share/icons/hicolor/16x16/apps/kleopatra.png",
  "share/icons/hicolor/22x22/apps/kleopatra.png",
  "share/icons/hicolor/256x256/apps/kleopatra.png",
  "share/icons/hicolor/32x32/apps/kleopatra.png",
  "share/icons/hicolor/48x48/apps/kleopatra.png",
  "share/icons/hicolor/64x64/apps/kleopatra.png",
  "share/icons/hicolor/index.theme",
  "share/icons/hicolor/scalable/apps/kleopatra.svgz",
  "share/icons/oxygen/128x128/actions/application-exit.png",
  "share/icons/oxygen/128x128/actions/configure.png",
  "share/icons/oxygen/128x128/actions/dialog-ok-apply.png",
  "share/icons/oxygen/128x128/actions/dialog-ok.png",
  "share/icons/oxygen/128x128/actions/edit-find.png",
  "share/icons/oxygen/128x128/actions/go-bottom.png",
  "share/icons/oxygen/128x128/actions/go-down.png",
  "share/icons/oxygen/128x128/actions/go-first.png",
  "share/icons/oxygen/128x128/actions/go-last.png",
  "share/icons/oxygen/128x128/actions/go-next.png",
  "share/icons/oxygen/128x128/actions/go-previous.png",
  "share/icons/oxygen/128x128/actions/go-top.png",
  "share/icons/oxygen/128x128/actions/go-up.png",
  "share/icons/oxygen/128x128/actions/list-remove.png",
  "share/icons/oxygen/128x128/actions/tools-report-bug.png",
  "share/icons/oxygen/128x128/apps/kde.png",
  "share/icons/oxygen/128x128/categories/applications-graphics.png",
  "share/icons/oxygen/128x128/categories/preferences-system-network.png",
  "share/icons/oxygen/128x128/devices/secure-card.png",
  "share/icons/oxygen/128x128/status/dialog-error.png",
  "share/icons/oxygen/128x128/status/dialog-information.png",
  "share/icons/oxygen/128x128/status/dialog-password.png",
  "share/icons/oxygen/128x128/status/dialog-warning.png",
  "share/icons/oxygen/128x128/status/security-high.png",
  "share/icons/oxygen/128x128/status/security-low.png",
  "share/icons/oxygen/128x128/status/security-medium.png",
  "share/icons/oxygen/16x16/actions/application-exit.png",
  "share/icons/oxygen/16x16/actions/arrow-down.png",
  "share/icons/oxygen/16x16/actions/arrow-up.png",
  "share/icons/oxygen/16x16/actions/configure-shortcuts.png",
  "share/icons/oxygen/16x16/actions/configure-toolbars.png",
  "share/icons/oxygen/16x16/actions/configure.png",
  "share/icons/oxygen/16x16/actions/dialog-cancel.png",
  "share/icons/oxygen/16x16/actions/dialog-close.png",
  "share/icons/oxygen/16x16/actions/dialog-ok-apply.png",
  "share/icons/oxygen/16x16/actions/dialog-ok.png",
  "share/icons/oxygen/16x16/actions/document-edit-decrypt-verify.png",
  "share/icons/oxygen/16x16/actions/document-edit-decrypt.png",
  "share/icons/oxygen/16x16/actions/document-edit-encrypt.png",
  "share/icons/oxygen/16x16/actions/document-edit-sign-encrypt.png",
  "share/icons/oxygen/16x16/actions/document-edit-sign.png",
  "share/icons/oxygen/16x16/actions/document-edit-verify.png",
  "share/icons/oxygen/16x16/actions/document-encrypt.png",
  "share/icons/oxygen/16x16/actions/document-open.png",
  "share/icons/oxygen/16x16/actions/document-print.png",
  "share/icons/oxygen/16x16/actions/document-revert.png",
  "share/icons/oxygen/16x16/actions/edit-clear-locationbar-rtl.png",
  "share/icons/oxygen/16x16/actions/edit-delete.png",
  "share/icons/oxygen/16x16/actions/edit-find.png",
  "share/icons/oxygen/16x16/actions/edit-redo.png",
  "share/icons/oxygen/16x16/actions/edit-rename.png",
  "share/icons/oxygen/16x16/actions/edit-undo.png",
  "share/icons/oxygen/16x16/actions/go-bottom.png",
  "share/icons/oxygen/16x16/actions/go-down.png",
  "share/icons/oxygen/16x16/actions/go-first.png",
  "share/icons/oxygen/16x16/actions/go-last.png",
  "share/icons/oxygen/16x16/actions/go-next.png",
  "share/icons/oxygen/16x16/actions/go-previous.png",
  "share/icons/oxygen/16x16/actions/go-top.png",
  "share/icons/oxygen/16x16/actions/go-up.png",
  "share/icons/oxygen/16x16/actions/help-contents.png",
  "share/icons/oxygen/16x16/actions/help-contextual.png",
  "share/icons/oxygen/16x16/actions/list-add.png",
  "share/icons/oxygen/16x16/actions/list-remove.png",
  "share/icons/oxygen/16x16/actions/process-stop.png",
  "share/icons/oxygen/16x16/actions/tab-close.png",
  "share/icons/oxygen/16x16/actions/tab-duplicate.png",
  "share/icons/oxygen/16x16/actions/tab-new-background.png",
  "share/icons/oxygen/16x16/actions/tools-report-bug.png",
  "share/icons/oxygen/16x16/actions/view-certificate-add.png",
  "share/icons/oxygen/16x16/actions/view-certificate-export-secret.png",
  "share/icons/oxygen/16x16/actions/view-certificate-export-server.png",
  "share/icons/oxygen/16x16/actions/view-certificate-export.png",
  "share/icons/oxygen/16x16/actions/view-certificate-import.png",
  "share/icons/oxygen/16x16/actions/view-certificate-server-configure.png",
  "share/icons/oxygen/16x16/actions/view-certificate-sign.png",
  "share/icons/oxygen/16x16/actions/view-refresh.png",
  "share/icons/oxygen/16x16/actions/window-close.png",
  "share/icons/oxygen/16x16/animations/process-working-kde.png",
  "share/icons/oxygen/16x16/apps/internet-mail.png",
  "share/icons/oxygen/16x16/apps/kde.png",
  "share/icons/oxygen/16x16/categories/applications-graphics.png",
  "share/icons/oxygen/16x16/categories/preferences-system-network.png",
  "share/icons/oxygen/16x16/devices/secure-card.png",
  "share/icons/oxygen/16x16/status/dialog-error.png",
  "share/icons/oxygen/16x16/status/dialog-information.png",
  "share/icons/oxygen/16x16/status/dialog-password.png",
  "share/icons/oxygen/16x16/status/dialog-warning.png",
  "share/icons/oxygen/16x16/status/security-high.png",
  "share/icons/oxygen/16x16/status/security-low.png",
  "share/icons/oxygen/16x16/status/security-medium.png",
  "share/icons/oxygen/22x22/actions/application-exit.png",
  "share/icons/oxygen/22x22/actions/arrow-down.png",
  "share/icons/oxygen/22x22/actions/arrow-up.png",
  "share/icons/oxygen/22x22/actions/configure-shortcuts.png",
  "share/icons/oxygen/22x22/actions/configure-toolbars.png",
  "share/icons/oxygen/22x22/actions/configure.png",
  "share/icons/oxygen/22x22/actions/dialog-cancel.png",
  "share/icons/oxygen/22x22/actions/dialog-close.png",
  "share/icons/oxygen/22x22/actions/dialog-ok-apply.png",
  "share/icons/oxygen/22x22/actions/dialog-ok.png",
  "share/icons/oxygen/22x22/actions/document-edit-decrypt-verify.png",
  "share/icons/oxygen/22x22/actions/document-edit-decrypt.png",
  "share/icons/oxygen/22x22/actions/document-edit-encrypt.png",
  "share/icons/oxygen/22x22/actions/document-edit-sign-encrypt.png",
  "share/icons/oxygen/22x22/actions/document-edit-sign.png",
  "share/icons/oxygen/22x22/actions/document-edit-verify.png",
  "share/icons/oxygen/22x22/actions/document-encrypt.png",
  "share/icons/oxygen/22x22/actions/document-open.png",
  "share/icons/oxygen/22x22/actions/document-print.png",
  "share/icons/oxygen/22x22/actions/document-revert.png",
  "share/icons/oxygen/22x22/actions/edit-clear-locationbar-rtl.png",
  "share/icons/oxygen/22x22/actions/edit-delete.png",
  "share/icons/oxygen/22x22/actions/edit-find.png",
  "share/icons/oxygen/22x22/actions/edit-redo.png",
  "share/icons/oxygen/22x22/actions/edit-rename.png",
  "share/icons/oxygen/22x22/actions/edit-undo.png",
  "share/icons/oxygen/22x22/actions/go-bottom.png",
  "share/icons/oxygen/22x22/actions/go-down.png",
  "share/icons/oxygen/22x22/actions/go-first.png",
  "share/icons/oxygen/22x22/actions/go-last.png",
  "share/icons/oxygen/22x22/actions/go-next.png",
  "share/icons/oxygen/22x22/actions/go-previous.png",
  "share/icons/oxygen/22x22/actions/go-top.png",
  "share/icons/oxygen/22x22/actions/go-up.png",
  "share/icons/oxygen/22x22/actions/help-contents.png",
  "share/icons/oxygen/22x22/actions/help-contextual.png",
  "share/icons/oxygen/22x22/actions/list-add.png",
  "share/icons/oxygen/22x22/actions/list-remove.png",
  "share/icons/oxygen/22x22/actions/process-stop.png",
  "share/icons/oxygen/22x22/actions/tab-close.png",
  "share/icons/oxygen/22x22/actions/tab-duplicate.png",
  "share/icons/oxygen/22x22/actions/tab-new-background.png",
  "share/icons/oxygen/22x22/actions/tools-report-bug.png",
  "share/icons/oxygen/22x22/actions/view-certificate-add.png",
  "share/icons/oxygen/22x22/actions/view-certificate-export-secret.png",
  "share/icons/oxygen/22x22/actions/view-certificate-export-server.png",
  "share/icons/oxygen/22x22/actions/view-certificate-export.png",
  "share/icons/oxygen/22x22/actions/view-certificate-import.png",
  "share/icons/oxygen/22x22/actions/view-certificate-server-configure.png",
  "share/icons/oxygen/22x22/actions/view-certificate-sign.png",
  "share/icons/oxygen/22x22/actions/view-refresh.png",
  "share/icons/oxygen/22x22/actions/window-close.png",
  "share/icons/oxygen/22x22/animations/process-working-kde.png",
  "share/icons/oxygen/22x22/apps/internet-mail.png",
  "share/icons/oxygen/22x22/apps/kde.png",
  "share/icons/oxygen/22x22/apps/preferences-desktop-locale.png",
  "share/icons/oxygen/22x22/categories/applications-graphics.png",
  "share/icons/oxygen/22x22/categories/preferences-system-network.png",
  "share/icons/oxygen/22x22/devices/secure-card.png",
  "share/icons/oxygen/22x22/status/dialog-error.png",
  "share/icons/oxygen/22x22/status/dialog-information.png",
  "share/icons/oxygen/22x22/status/dialog-password.png",
  "share/icons/oxygen/22x22/status/dialog-warning.png",
  "share/icons/oxygen/22x22/status/security-high.png",
  "share/icons/oxygen/22x22/status/security-low.png",
  "share/icons/oxygen/22x22/status/security-medium.png",
  "share/icons/oxygen/256x256/categories/applications-graphics.png",
  "share/icons/oxygen/256x256/categories/preferences-system-network.png",
  "share/icons/oxygen/256x256/devices/secure-card.png",
  "share/icons/oxygen/32x32/actions/application-exit.png",
  "share/icons/oxygen/32x32/actions/arrow-down.png",
  "share/icons/oxygen/32x32/actions/arrow-up.png",
  "share/icons/oxygen/32x32/actions/configure-shortcuts.png",
  "share/icons/oxygen/32x32/actions/configure-toolbars.png",
  "share/icons/oxygen/32x32/actions/configure.png",
  "share/icons/oxygen/32x32/actions/dialog-cancel.png",
  "share/icons/oxygen/32x32/actions/dialog-close.png",
  "share/icons/oxygen/32x32/actions/dialog-ok-apply.png",
  "share/icons/oxygen/32x32/actions/dialog-ok.png",
  "share/icons/oxygen/32x32/actions/document-edit-decrypt-verify.png",
  "share/icons/oxygen/32x32/actions/document-edit-decrypt.png",
  "share/icons/oxygen/32x32/actions/document-edit-encrypt.png",
  "share/icons/oxygen/32x32/actions/document-edit-sign-encrypt.png",
  "share/icons/oxygen/32x32/actions/document-edit-sign.png",
  "share/icons/oxygen/32x32/actions/document-edit-verify.png",
  "share/icons/oxygen/32x32/actions/document-encrypt.png",
  "share/icons/oxygen/32x32/actions/document-open.png",
  "share/icons/oxygen/32x32/actions/document-print.png",
  "share/icons/oxygen/32x32/actions/document-revert.png",
  "share/icons/oxygen/32x32/actions/edit-clear-locationbar-rtl.png",
  "share/icons/oxygen/32x32/actions/edit-delete.png",
  "share/icons/oxygen/32x32/actions/edit-find.png",
  "share/icons/oxygen/32x32/actions/edit-redo.png",
  "share/icons/oxygen/32x32/actions/edit-rename.png",
  "share/icons/oxygen/32x32/actions/edit-undo.png",
  "share/icons/oxygen/32x32/actions/go-bottom.png",
  "share/icons/oxygen/32x32/actions/go-down.png",
  "share/icons/oxygen/32x32/actions/go-first.png",
  "share/icons/oxygen/32x32/actions/go-last.png",
  "share/icons/oxygen/32x32/actions/go-next.png",
  "share/icons/oxygen/32x32/actions/go-previous.png",
  "share/icons/oxygen/32x32/actions/go-top.png",
  "share/icons/oxygen/32x32/actions/go-up.png",
  "share/icons/oxygen/32x32/actions/help-contents.png",
  "share/icons/oxygen/32x32/actions/help-contextual.png",
  "share/icons/oxygen/32x32/actions/list-add.png",
  "share/icons/oxygen/32x32/actions/list-remove.png",
  "share/icons/oxygen/32x32/actions/process-stop.png",
  "share/icons/oxygen/32x32/actions/tab-close.png",
  "share/icons/oxygen/32x32/actions/tab-duplicate.png",
  "share/icons/oxygen/32x32/actions/tab-new-background.png",
  "share/icons/oxygen/32x32/actions/tools-report-bug.png",
  "share/icons/oxygen/32x32/actions/view-certificate-add.png",
  "share/icons/oxygen/32x32/actions/view-certificate-export-secret.png",
  "share/icons/oxygen/32x32/actions/view-certificate-export-server.png",
  "share/icons/oxygen/32x32/actions/view-certificate-export.png",
  "share/icons/oxygen/32x32/actions/view-certificate-import.png",
  "share/icons/oxygen/32x32/actions/view-certificate-server-configure.png",
  "share/icons/oxygen/32x32/actions/view-certificate-sign.png",
  "share/icons/oxygen/32x32/actions/view-refresh.png",
  "share/icons/oxygen/32x32/actions/window-close.png",
  "share/icons/oxygen/32x32/animations/process-working-kde.png",
  "share/icons/oxygen/32x32/apps/kde.png",
  "share/icons/oxygen/32x32/categories/applications-graphics.png",
  "share/icons/oxygen/32x32/categories/preferences-system-network.png",
  "share/icons/oxygen/32x32/devices/secure-card.png",
  "share/icons/oxygen/32x32/status/dialog-error.png",
  "share/icons/oxygen/32x32/status/dialog-information.png",
  "share/icons/oxygen/32x32/status/dialog-password.png",
  "share/icons/oxygen/32x32/status/dialog-warning.png",
  "share/icons/oxygen/32x32/status/security-high.png",
  "share/icons/oxygen/32x32/status/security-low.png",
  "share/icons/oxygen/32x32/status/security-medium.png",
  "share/icons/oxygen/48x48/actions/application-exit.png",
  "share/icons/oxygen/48x48/actions/arrow-down.png",
  "share/icons/oxygen/48x48/actions/arrow-up.png",
  "share/icons/oxygen/48x48/actions/configure-shortcuts.png",
  "share/icons/oxygen/48x48/actions/configure-toolbars.png",
  "share/icons/oxygen/48x48/actions/configure.png",
  "share/icons/oxygen/48x48/actions/dialog-cancel.png",
  "share/icons/oxygen/48x48/actions/dialog-close.png",
  "share/icons/oxygen/48x48/actions/dialog-ok-apply.png",
  "share/icons/oxygen/48x48/actions/dialog-ok.png",
  "share/icons/oxygen/48x48/actions/document-edit-decrypt-verify.png",
  "share/icons/oxygen/48x48/actions/document-edit-decrypt.png",
  "share/icons/oxygen/48x48/actions/document-edit-encrypt.png",
  "share/icons/oxygen/48x48/actions/document-edit-sign-encrypt.png",
  "share/icons/oxygen/48x48/actions/document-edit-sign.png",
  "share/icons/oxygen/48x48/actions/document-edit-verify.png",
  "share/icons/oxygen/48x48/actions/document-encrypt.png",
  "share/icons/oxygen/48x48/actions/document-open.png",
  "share/icons/oxygen/48x48/actions/document-print.png",
  "share/icons/oxygen/48x48/actions/document-revert.png",
  "share/icons/oxygen/48x48/actions/edit-clear-locationbar-rtl.png",
  "share/icons/oxygen/48x48/actions/edit-delete.png",
  "share/icons/oxygen/48x48/actions/edit-find.png",
  "share/icons/oxygen/48x48/actions/edit-redo.png",
  "share/icons/oxygen/48x48/actions/edit-rename.png",
  "share/icons/oxygen/48x48/actions/edit-undo.png",
  "share/icons/oxygen/48x48/actions/go-bottom.png",
  "share/icons/oxygen/48x48/actions/go-down.png",
  "share/icons/oxygen/48x48/actions/go-first.png",
  "share/icons/oxygen/48x48/actions/go-last.png",
  "share/icons/oxygen/48x48/actions/go-next.png",
  "share/icons/oxygen/48x48/actions/go-previous.png",
  "share/icons/oxygen/48x48/actions/go-top.png",
  "share/icons/oxygen/48x48/actions/go-up.png",
  "share/icons/oxygen/48x48/actions/help-contents.png",
  "share/icons/oxygen/48x48/actions/help-contextual.png",
  "share/icons/oxygen/48x48/actions/list-add.png",
  "share/icons/oxygen/48x48/actions/list-remove.png",
  "share/icons/oxygen/48x48/actions/process-stop.png",
  "share/icons/oxygen/48x48/actions/tab-close.png",
  "share/icons/oxygen/48x48/actions/tab-duplicate.png",
  "share/icons/oxygen/48x48/actions/tab-new-background.png",
  "share/icons/oxygen/48x48/actions/tools-report-bug.png",
  "share/icons/oxygen/48x48/actions/view-certificate-add.png",
  "share/icons/oxygen/48x48/actions/view-certificate-export-secret.png",
  "share/icons/oxygen/48x48/actions/view-certificate-export-server.png",
  "share/icons/oxygen/48x48/actions/view-certificate-export.png",
  "share/icons/oxygen/48x48/actions/view-certificate-import.png",
  "share/icons/oxygen/48x48/actions/view-certificate-server-configure.png",
  "share/icons/oxygen/48x48/actions/view-certificate-sign.png",
  "share/icons/oxygen/48x48/actions/view-refresh.png",
  "share/icons/oxygen/48x48/actions/window-close.png",
  "share/icons/oxygen/48x48/animations/process-working-kde.png",
  "share/icons/oxygen/48x48/apps/kde.png",
  "share/icons/oxygen/48x48/categories/applications-graphics.png",
  "share/icons/oxygen/48x48/categories/preferences-system-network.png",
  "share/icons/oxygen/48x48/devices/secure-card.png",
  "share/icons/oxygen/48x48/status/dialog-error.png",
  "share/icons/oxygen/48x48/status/dialog-information.png",
  "share/icons/oxygen/48x48/status/dialog-password.png",
  "share/icons/oxygen/48x48/status/dialog-warning.png",
  "share/icons/oxygen/48x48/status/security-high.png",
  "share/icons/oxygen/48x48/status/security-low.png",
  "share/icons/oxygen/48x48/status/security-medium.png",
  "share/icons/oxygen/64x64/actions/application-exit.png",
  "share/icons/oxygen/64x64/actions/configure.png",
  "share/icons/oxygen/64x64/actions/dialog-ok-apply.png",
  "share/icons/oxygen/64x64/actions/dialog-ok.png",
  "share/icons/oxygen/64x64/actions/edit-find.png",
  "share/icons/oxygen/64x64/actions/go-bottom.png",
  "share/icons/oxygen/64x64/actions/go-down.png",
  "share/icons/oxygen/64x64/actions/go-first.png",
  "share/icons/oxygen/64x64/actions/go-last.png",
  "share/icons/oxygen/64x64/actions/go-next.png",
  "share/icons/oxygen/64x64/actions/go-previous.png",
  "share/icons/oxygen/64x64/actions/go-top.png",
  "share/icons/oxygen/64x64/actions/go-up.png",
  "share/icons/oxygen/64x64/actions/list-remove.png",
  "share/icons/oxygen/64x64/actions/tools-report-bug.png",
  "share/icons/oxygen/64x64/apps/kde.png",
  "share/icons/oxygen/64x64/categories/applications-graphics.png",
  "share/icons/oxygen/64x64/categories/preferences-system-network.png",
  "share/icons/oxygen/64x64/status/dialog-error.png",
  "share/icons/oxygen/64x64/status/dialog-information.png",
  "share/icons/oxygen/64x64/status/dialog-password.png",
  "share/icons/oxygen/64x64/status/dialog-warning.png",
  "share/icons/oxygen/64x64/status/security-high.png",
  "share/icons/oxygen/64x64/status/security-low.png",
  "share/icons/oxygen/64x64/status/security-medium.png",
  "share/icons/oxygen/index.theme",
  "share/kde4/services/kleopatra_config_appear.desktop",
  "share/kde4/services/kleopatra_config_cryptooperations.desktop",
  "share/kde4/services/kleopatra_config_dirserv.desktop",
  "share/kde4/services/kleopatra_config_gnupgsystem.desktop",
  "share/kde4/services/kleopatra_config_smimevalidation.desktop",
  "share/kde4/services/kleopatra_decryptverifyfiles.desktop",
  "share/kde4/services/kleopatra_decryptverifyfolders.desktop",
  "share/kde4/services/kleopatra_signencryptfiles.desktop",
  "share/kde4/services/kleopatra_signencryptfolders.desktop",
  "share/locale/all_languages",
  "share/locale/de/entry.desktop",
  "share/locale/*/LC_MESSAGES/akonaditray.mo",
  "share/locale/*/LC_MESSAGES/akregator.mo",
  "share/locale/*/LC_MESSAGES/atk10.mo",
  "share/locale/*/LC_MESSAGES/claws-mail.mo",
  "share/locale/*/LC_MESSAGES/glib20.mo",
  "share/locale/*/LC_MESSAGES/gnupg2.mo",
  "share/locale/*/LC_MESSAGES/gpa.mo",
  "share/locale/*/LC_MESSAGES/gtk20-properties.mo",
  "share/locale/*/LC_MESSAGES/gtk20.mo",
  "share/locale/*/LC_MESSAGES/gtkhtml2_viewer.mo",
  "share/locale/*/LC_MESSAGES/kabc.mo",
  "share/locale/*/LC_MESSAGES/kabcclient.mo",
  "share/locale/*/LC_MESSAGES/kabcformat_binary.mo",
  "share/locale/*/LC_MESSAGES/kabc_dir.mo",
  "share/locale/*/LC_MESSAGES/kabc_file.mo",
  "share/locale/*/LC_MESSAGES/kabc_ldapkio.mo",
  "share/locale/*/LC_MESSAGES/kabc_net.mo",
  "share/locale/*/LC_MESSAGES/kaddressbook-mobile.mo",
  "share/locale/*/LC_MESSAGES/kaddressbook.mo",
  "share/locale/*/LC_MESSAGES/kalarm.mo",
  "share/locale/*/LC_MESSAGES/katepart4.mo",
  "share/locale/*/LC_MESSAGES/kcertpart.mo",
  "share/locale/*/LC_MESSAGES/kcmcrypto.mo",
  "share/locale/*/LC_MESSAGES/kdelibs4.mo",
  "share/locale/*/LC_MESSAGES/kdelibs_colors4.mo",
  "share/locale/*/LC_MESSAGES/kdeqt.mo",
  "share/locale/*/LC_MESSAGES/kfileaudiopreview4.mo",
  "share/locale/*/LC_MESSAGES/kio4.mo",
  "share/locale/*/LC_MESSAGES/kio_help4.mo",
  "share/locale/*/LC_MESSAGES/kio_imap4.mo",
  "share/locale/*/LC_MESSAGES/kio_ldap.mo",
  "share/locale/*/LC_MESSAGES/kio_mbox.mo",
  "share/locale/*/LC_MESSAGES/kio_nntp.mo",
  "share/locale/*/LC_MESSAGES/kio_pop3.mo",
  "share/locale/*/LC_MESSAGES/kio_sieve.mo",
  "share/locale/*/LC_MESSAGES/kio_smtp.mo",
  "share/locale/*/LC_MESSAGES/kjots.mo",
  "share/locale/*/LC_MESSAGES/kleopatra.mo",
  "share/locale/*/LC_MESSAGES/kmail-mobile.mo",
  "share/locale/*/LC_MESSAGES/kmail.mo",
  "share/locale/*/LC_MESSAGES/kmailcvt.mo",
  "share/locale/*/LC_MESSAGES/knode.mo",
  "share/locale/*/LC_MESSAGES/knotes.mo",
  "share/locale/*/LC_MESSAGES/konsolekalendar.mo",
  "share/locale/*/LC_MESSAGES/kontact.mo",
  "share/locale/*/LC_MESSAGES/kontactinterfaces.mo",
  "share/locale/*/LC_MESSAGES/korganizer-mobile.mo",
  "share/locale/*/LC_MESSAGES/korganizer.mo",
  "share/locale/*/LC_MESSAGES/kres_blog.mo",
  "share/locale/*/LC_MESSAGES/kres_remote.mo",
  "share/locale/*/LC_MESSAGES/ktexteditorkabcbridge_plugin.mo",
  "share/locale/*/LC_MESSAGES/ktexteditor_plugins.mo",
  "share/locale/*/LC_MESSAGES/ktimetracker.mo",
  "share/locale/*/LC_MESSAGES/ktnef.mo",
  "share/locale/*/LC_MESSAGES/kwatchgnupg.mo",
  "share/locale/*/LC_MESSAGES/libakonadi.mo",
  "share/locale/*/LC_MESSAGES/libgpg-error.mo",
  "share/locale/*/LC_MESSAGES/libkblog.mo",
  "share/locale/*/LC_MESSAGES/libkcal.mo",
  "share/locale/*/LC_MESSAGES/libkdepim.mo",
  "share/locale/*/LC_MESSAGES/libkholidays.mo",
  "share/locale/*/LC_MESSAGES/libkldap.mo",
  "share/locale/*/LC_MESSAGES/libkleopatra.mo",
  "share/locale/*/LC_MESSAGES/libkmime.mo",
  "share/locale/*/LC_MESSAGES/libkpgp.mo",
  "share/locale/*/LC_MESSAGES/libkpimidentities.mo",
  "share/locale/*/LC_MESSAGES/libkpimutils.mo",
  "share/locale/*/LC_MESSAGES/libkresources.mo",
  "share/locale/*/LC_MESSAGES/libksieve.mo",
  "share/locale/*/LC_MESSAGES/libktnef.mo",
  "share/locale/*/LC_MESSAGES/libkxmlrpcclient.mo",
  "share/locale/*/LC_MESSAGES/libmailtransport.mo",
  "share/locale/*/LC_MESSAGES/timezones4.mo",
  "share/themes/Default/gtk-2.0-key/gtkrc",
  "share/themes/Emacs/gtk-2.0-key/gtkrc",
  "share/themes/MS-Windows/gtk-2.0/gtkrc",
  "share/themes/Raleigh/gtk-2.0/gtkrc",
  "share/xdg/menus/applications.menu",
  "VERSION",
  "zlib1.dll",
  NULL
};
