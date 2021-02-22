Format: 3.0 (quilt)
Source: pipewire
Binary: libpipewire-0.2-1, libpipewire-0.2-dev, libspa-lib-0.1-dev, libpipewire-0.2-doc, pipewire, gstreamer1.0-pipewire, libspa-bluetooth
Architecture: linux-any all
Version: 0.2.5-1co2
Maintainer: Utopia Maintenance Team <pkg-utopia-maintainers@alioth-lists.debian.net>
Uploaders: Jeremy Bicha <jbicha@debian.org>
Homepage: https://pipewire.org/
Standards-Version: 4.3.0
Vcs-Browser: https://salsa.debian.org/utopia-team/pipewire
Vcs-Git: https://salsa.debian.org/utopia-team/pipewire.git
Build-Depends: debhelper (>= 11), libasound2-dev, libdbus-1-dev, libglib2.0-dev, libgstreamer1.0-dev, libgstreamer-plugins-base1.0-dev, libsbc-dev, libudev-dev, libva-dev, libv4l-dev, meson (>= 0.47), pkg-config (>= 0.22), systemd, xmltoman
Build-Depends-Indep: doxygen <!nodoc>, graphviz <!nodoc>
Package-List:
 gstreamer1.0-pipewire deb libs optional arch=linux-any
 libpipewire-0.2-1 deb libs optional arch=linux-any
 libpipewire-0.2-dev deb libdevel optional arch=linux-any
 libpipewire-0.2-doc deb doc optional arch=all profile=!nodoc
 libspa-bluetooth deb libs optional arch=linux-any
 libspa-lib-0.1-dev deb libdevel optional arch=linux-any
 pipewire deb net optional arch=linux-any
Checksums-Sha1:
 c8d918824f9b85318b1610a74480081a96c32392 417895 pipewire_0.2.5.orig.tar.gz
 e55fcf56c1648ac78571dacf02548e6c9b6be12c 5520 pipewire_0.2.5-1co2.debian.tar.xz
Checksums-Sha256:
 6e75bb88a329f97984925bd303643075788df8d51b345bb43feb1be2c3b7102c 417895 pipewire_0.2.5.orig.tar.gz
 13bef0dcb21b28d1df3a1e828a1af7af4a1479f8f18c4af37a45c987a0cd27fd 5520 pipewire_0.2.5-1co2.debian.tar.xz
Files:
 558660cd68f7119ba9477dd996e7d041 417895 pipewire_0.2.5.orig.tar.gz
 14d4b48885dd3ee82bef3832247e8021 5520 pipewire_0.2.5-1co2.debian.tar.xz
