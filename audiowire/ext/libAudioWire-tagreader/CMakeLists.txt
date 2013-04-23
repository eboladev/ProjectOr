include_directories(${PROTOBUF_INCLUDE_DIRS})

set(MESSAGES
  tagreadermessages.proto
)

protobuf_generate_cpp(PROTO_SOURCES PROTO_HEADERS ${MESSAGES})

add_library(libAudioWire-tagreader STATIC
  ${PROTO_SOURCES}
)

target_link_libraries(libAudioWire-tagreader
  libAudioWire-common
)

