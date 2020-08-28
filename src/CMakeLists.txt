## add source
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} MAIN_SOURCES)
target_sources(${TARGET} PUBLIC ${MAIN_SOURCES})