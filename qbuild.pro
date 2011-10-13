TEMPLATE=app
TARGET=qtcapra

CONFIG+=qtopia
DEFINES+=QTOPIA

# I18n info
STRING_LANGUAGE=en_US
LANGUAGES=en_US

# Package info
pkg [
    name=qtcapra
    desc="Sgarmi emulator"
    license=GPLv2
    version=1.0
    maintainer="giotti"
]

# Input files
FORMS +=\
    qtcapra.ui\
    widget.ui

HEADERS=\
    qtcapra.h\
    rotate.h\
    widget.h

SOURCES=\
    main.cpp\
    qtcapra.cpp\
    rotate.cpp\
    widget.cpp

# Install rules
target [
    hint=sxe
    domain=untrusted
]

desktop [
    hint=desktop
    files=qtcapra.desktop
    path=/apps/Games
]

pics [
    hint=pics
    files=pics/*
    path=/pics/qtcapra
]

