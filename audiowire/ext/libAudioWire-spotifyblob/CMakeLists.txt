include_directories(${PROTOBUF_INCLUDE_DIRS})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/blobversion.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/blobversion.h)

set(MESSAGES
  spotifymessages.proto
)

protobuf_generate_cpp(PROTO_SOURCES PROTO_HEADERS ${MESSAGES})

add_library(AudioWire-spotifyblob-messages STATIC
  ${PROTO_SOURCES}
)

target_link_libraries(AudioWire-spotifyblob-messages
  libAudioWire-common
)
