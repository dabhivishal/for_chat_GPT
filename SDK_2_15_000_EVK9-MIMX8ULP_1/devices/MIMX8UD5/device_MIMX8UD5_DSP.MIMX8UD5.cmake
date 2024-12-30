# Add set(CONFIG_USE_device_MIMX8UD5_DSP true) in config.cmake to use this component

include_guard(GLOBAL)
message("${CMAKE_CURRENT_LIST_FILE} component is included.")

if((CONFIG_DEVICE_ID STREQUAL MIMX8UD5xxx08))

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}/system_MIMX8UD5_dsp0.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/.
)

else()

message(SEND_ERROR "device_MIMX8UD5_DSP.MIMX8UD5 dependency does not meet, please check ${CMAKE_CURRENT_LIST_FILE}.")

endif()
