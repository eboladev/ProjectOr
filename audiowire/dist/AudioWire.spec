Name:           AudioWire
Version:        
Release:        .fc13
Summary:        A music player and library organiser

Group:          Applications/Multimedia
License:        GPLv3
URL:            http://www.AudioWire-player.org/
Source0:        %{name}-.tar.gz
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

BuildRequires:  desktop-file-utils liblastfm-devel taglib-devel gettext
BuildRequires:  qt4-devel boost-devel gcc-c++ glew-devel libgpod-devel
BuildRequires:  cmake gstreamer-devel gstreamer-plugins-base-devel
BuildRequires:  libimobiledevice-devel libplist-devel usbmuxd-devel
BuildRequires:  libmtp-devel protobuf-devel protobuf-compiler libcdio-devel
BuildRequires:  qjson-devel qca2-devel fftw-devel sparsehash-devel

Requires:       libgpod protobuf-lite libcdio qjson qca-ossl

# GStreamer codec dependencies
Requires:       gstreamer-plugins-ugly

%ifarch x86_64
Requires:       gstreamer0.10(decoder-audio/x-vorbis)()(64bit)
Requires:       gstreamer0.10(decoder-audio/x-flac)()(64bit)
Requires:       gstreamer0.10(decoder-audio/x-speex)()(64bit)
Requires:       gstreamer0.10(decoder-audio/x-wav)()(64bit)
%else
Requires:       gstreamer0.10(decoder-audio/x-vorbis)
Requires:       gstreamer0.10(decoder-audio/x-flac)
Requires:       gstreamer0.10(decoder-audio/x-speex)
Requires:       gstreamer0.10(decoder-audio/x-wav)
%endif

%description
AudioWire is a modern music player and library organiser.
It is inspired by Amarok 1.4, focusing on a fast and easy-to-use interface for
searching and playing your music.

Features include:
  * Search and play your local music library
  * Listen to internet radio from Last.fm, SomaFM, Magnatune, Jamendo and Icecast
  * Create smart playlists and dynamic playlists
  * Tabbed playlists, import and export M3U, XSPF, PLS and ASX
  * Visualisations from projectM
  * Lyrics and artist biographies and photos
  * Transcode music into MP3, Ogg Vorbis, Ogg Speex, FLAC or AAC
  * Edit tags on MP3 and OGG files, organise your music
  * Download missing album cover art from Last.fm
  * Cross-platform - works on Windows, Mac OS X and Linux
  * Native desktop notifications on Linux (libnotify) and Mac OS X (Growl)
  * Remote control using a Wii Remote, MPRIS or the command-line
  * Copy music to your iPod, iPhone, MTP or mass-storage USB player
  * Queue manager

%prep
%setup -q -n %{name}-


%build
cd bin
%{cmake} .. -DUSE_INSTALL_PREFIX=OFF -DBUNDLE_PROJECTM_PRESETS=ON
make %{?_smp_mflags}

%install
cd bin
make install DESTDIR=$RPM_BUILD_ROOT
rm -f $RPM_BUILD_ROOT/usr/share/icons/ubuntu-mono-{dark,light}/apps/24/AudioWire-panel*.png

%clean
cd bin
make clean


%files
%defattr(-,root,root,-)
%doc
%{_bindir}/AudioWire
%{_bindir}/AudioWire-tagreader
%{_datadir}/applications/AudioWire.desktop
%{_datadir}/AudioWire/projectm-presets
%{_datadir}/kde4/services/AudioWire-itms.protocol
%{_datadir}/kde4/services/AudioWire-itpc.protocol
%{_datadir}/kde4/services/AudioWire-feed.protocol
%{_datadir}/kde4/services/AudioWire-zune.protocol
%{_datadir}/icons/hicolor/64x64/apps/application-x-AudioWire.png
%{_datadir}/icons/hicolor/scalable/apps/application-x-AudioWire.svg

%changelog
* Tue Apr 23 2013 David Sansome <me@davidsansome.com> - 
- Version 
