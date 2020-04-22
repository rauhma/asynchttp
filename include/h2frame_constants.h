#ifndef __ASYNCHTTP_H2FRAME_CONSTANTS__
#define __ASYNCHTTP_H2FRAME_CONSTANTS__

enum {
    H2FRAME_TYPE_DATA = 0,
    H2FRAME_TYPE_HEADERS = 1,
    H2FRAME_TYPE_PRIORITY = 2,
    H2FRAME_TYPE_RST_STREAM = 3,
    H2FRAME_TYPE_SETTINGS = 4,
    H2FRAME_TYPE_PUSH_PROMISE = 5,
    H2FRAME_TYPE_PING = 6,
    H2FRAME_TYPE_GOAWAY = 7,
    H2FRAME_TYPE_WINDOW_UPDATE = 8,
    H2FRAME_TYPE_CONTINUATION = 9,
};

enum {
    H2FRAME_FLAG_ACK           = 0x01,
    H2FRAME_FLAG_END_STREAM    = 0x01,
    H2FRAME_FLAG_END_HEADERS   = 0x04,
    H2FRAME_FLAG_PADDED        = 0x08,
    H2FRAME_FLAG_PRIORITY      = 0x20
};

enum {
    H2FRAME_SETTINGS_HEADER_TABLE_SIZE = 1,
    H2FRAME_SETTINGS_ENABLE_PUSH = 2,
    H2FRAME_SETTINGS_MAX_CONCURRENT_STREAMS = 3,
    H2FRAME_SETTINGS_INITIAL_WINDOW_SIZE = 4,
    H2FRAME_SETTINGS_MAX_FRAME_SIZE = 5,
    H2FRAME_SETTINGS_MAX_HEADER_LIST_SIZE = 6,
};

enum {
    H2FRAME_ERR_NO_ERROR = 0,
    H2FRAME_ERR_PROTOCOL_ERROR = 1,
    H2FRAME_ERR_INTERNAL_ERROR = 2,
    H2FRAME_ERR_FLOW_CONTROL_ERROR = 3,
    H2FRAME_ERR_SETTINGS_TIMEOUT = 4,
    H2FRAME_ERR_STREAM_CLOSED = 5,
    H2FRAME_ERR_FRAME_SIZE_ERROR = 6,
    H2FRAME_ERR_REFUSED_STREAM = 7,
    H2FRAME_ERR_CANCEL = 8,
    H2FRAME_ERR_COMPRESSION_ERROR = 9,
    H2FRAME_ERR_CONNECT_ERROR = 10,
    H2FRAME_ERR_ENHANCE_YOUR_CALM = 11,
    H2FRAME_ERR_INADEQUATE_SECURITY = 12,
    H2FRAME_ERR_HTTP_1_1_REQUIRED = 13,
};

#endif