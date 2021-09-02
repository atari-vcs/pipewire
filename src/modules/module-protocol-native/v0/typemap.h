static const struct type_info {
	const char *type;
	const char *name;
	uint32_t id;
} type_map[] = {
	{ "Spa:Interface:TypeMap", SPA_TYPE_INFO_INTERFACE_BASE, 0, },
	{ "Spa:Interface:Log", SPA_TYPE_INTERFACE_Log, 0, },
	{ "Spa:Interface:Loop", SPA_TYPE_INTERFACE_Loop, 0, },
	{ "Spa:Interface:LoopControl", SPA_TYPE_INTERFACE_LoopControl, 0, },
	{ "Spa:Interface:LoopUtils", SPA_TYPE_INTERFACE_LoopUtils, 0, },
	{ "PipeWire:Interface:Core",  PW_TYPE_INTERFACE_Core, 0, },
	{ "PipeWire:Interface:Registry", PW_TYPE_INTERFACE_Registry, 0, },
	{ "PipeWire:Interface:Node", PW_TYPE_INTERFACE_Node, 0, },
	{ "PipeWire:Interface:Port", PW_TYPE_INTERFACE_Port,0, },
	{ "PipeWire:Interface:Factory", PW_TYPE_INTERFACE_Factory, 0, },
	{ "PipeWire:Interface:Link",  PW_TYPE_INTERFACE_Link, 0, },
	{ "PipeWire:Interface:Client", PW_TYPE_INTERFACE_Client, 0, },
	{ "PipeWire:Interface:Module", PW_TYPE_INTERFACE_Module, 0, },
	{ "PipeWire:Interface:Device", PW_TYPE_INTERFACE_Device, 0, },

	{ "PipeWire:Interface:Metadata", PW_TYPE_INTERFACE_Metadata, 0, },
	{ "PipeWire:Interface:Session", PW_TYPE_INTERFACE_Session, 0, },
	{ "PipeWire:Interface:Endpoint", PW_TYPE_INTERFACE_Endpoint, 0, },
	{ "PipeWire:Interface:EndpointStream", PW_TYPE_INTERFACE_EndpointStream, 0, },
	{ "PipeWire:Interface:EndpointLink", PW_TYPE_INTERFACE_EndpointLink, 0, },

	{ "PipeWire:Interface:ClientNode", PW_TYPE_INTERFACE_ClientNode, 0, },
	{ "PipeWire:Interface:ClientSession", PW_TYPE_INTERFACE_ClientSession, 0, },
	{ "PipeWire:Interface:ClientEndpoint", PW_TYPE_INTERFACE_ClientEndpoint, 0, },

	{ "Spa:Interface:Node", SPA_TYPE_INTERFACE_Node, 0, },
	{ "Spa:Interface:Clock", },
	{ "Spa:Interface:Monitor", },
	{ "Spa:Interface:Device", SPA_TYPE_INTERFACE_Device, 0, },
	{ "Spa:POD:Object:Param:Format", SPA_TYPE_INFO_Format, SPA_TYPE_OBJECT_Format, },
	{ "Spa:POD:Object:Param:Props", SPA_TYPE_INFO_Props, SPA_TYPE_OBJECT_Props, },
	{ "Spa:Pointer:IO:Buffers",  },
	{ "Spa:Pointer:IO:Control:Range",  },
	{ "Spa:Pointer:IO:Prop",  },
	{ "Spa:Enum:ParamId:List",  },
	{ "Spa:POD:Object:Param:List",  },
	{ "Spa:POD:Object:Param:List:id",  },
	{ "Spa:Enum:ParamId:PropInfo", SPA_TYPE_INFO_PARAM_ID_BASE "PropInfo", SPA_PARAM_PropInfo, },
	{ "Spa:POD:Object:Param:PropInfo",  SPA_TYPE_INFO_PROP_INFO_BASE, SPA_PROP_INFO_START, },
	{ "Spa:POD:Object:Param:PropInfo:id",  SPA_TYPE_INFO_PROP_INFO_BASE "id", SPA_PROP_INFO_id, },
	{ "Spa:POD:Object:Param:PropInfo:name", SPA_TYPE_INFO_PROP_INFO_BASE "name", SPA_PROP_INFO_name, },
	{ "Spa:POD:Object:Param:PropInfo:type",  SPA_TYPE_INFO_PROP_INFO_BASE "typ", SPA_PROP_INFO_type, },
	{ "Spa:POD:Object:Param:PropInfo:labels", SPA_TYPE_INFO_PROP_INFO_BASE "labels", SPA_PROP_INFO_labels, },
	{ "Spa:Enum:ParamId:Props", SPA_TYPE_INFO_PARAM_ID_BASE "Props", SPA_PARAM_Props, },
	{ "Spa:Enum:ParamId:EnumFormat", SPA_TYPE_INFO_PARAM_ID_BASE "EnumFormat", SPA_PARAM_EnumFormat,},
	{ "Spa:Enum:ParamId:Format",  SPA_TYPE_INFO_PARAM_ID_BASE "Format", SPA_PARAM_Format, },
	{ "Spa:Enum:ParamId:Buffers",  SPA_TYPE_INFO_PARAM_ID_BASE "Buffers", SPA_PARAM_Buffers },
	{ "Spa:Enum:ParamId:Meta", SPA_TYPE_INFO_PARAM_ID_BASE "Meta", SPA_PARAM_Meta, },
	{ "Spa:Pointer:Meta:Header", SPA_TYPE_INFO_META_BASE "Header", SPA_META_Header, },
	{ "Spa:Pointer:Meta:VideoCrop", SPA_TYPE_INFO_META_REGION_BASE "VideoCrop", SPA_META_VideoCrop, },
	{ "Spa:Pointer:Meta:VideoDamage", SPA_TYPE_INFO_META_ARRAY_REGION_BASE "VideoDamage", SPA_META_VideoDamage, },
	{ "Spa:Pointer:Meta:Bitmap", SPA_TYPE_INFO_META_BASE "Bitmap", SPA_META_Bitmap, },
	{ "Spa:Pointer:Meta:Cursor", SPA_TYPE_INFO_META_BASE "Cursor", SPA_META_Cursor, },
	{ "Spa:Enum:DataType:MemPtr", SPA_TYPE_INFO_DATA_BASE "MemPtr", SPA_DATA_MemPtr, },
	{ "Spa:Enum:DataType:Fd:MemFd", SPA_TYPE_INFO_DATA_FD_BASE "MemFd", SPA_DATA_MemFd, },
	{ "Spa:Enum:DataType:Fd:DmaBuf", SPA_TYPE_INFO_DATA_FD_BASE "DmaBuf", SPA_DATA_DmaBuf, },
	{ "Spa:POD:Object:Event:Node:Error", SPA_TYPE_INFO_NODE_EVENT_BASE "Error", SPA_NODE_EVENT_Error, },
	{ "Spa:POD:Object:Event:Node:Buffering", SPA_TYPE_INFO_NODE_EVENT_BASE "Buffering", SPA_NODE_EVENT_Buffering, },
	{ "Spa:POD:Object:Event:Node:RequestRefresh", SPA_TYPE_INFO_NODE_EVENT_BASE "RequestRefresh", SPA_NODE_EVENT_RequestRefresh, },
	{ "Spa:POD:Object:Event:Node:RequestClockUpdate", SPA_TYPE_INFO_NODE_EVENT_BASE "RequestClockUpdate", SPA_NODE0_EVENT_RequestClockUpdate,  },
	{ "Spa:POD:Object:Command:Node", SPA_TYPE_INFO_COMMAND_BASE "Node", SPA_TYPE_COMMAND_Node,},
	{ "Spa:POD:Object:Command:Node:Suspend", SPA_TYPE_INFO_NODE_COMMAND_BASE "Suspend", SPA_NODE_COMMAND_Suspend,},
	{ "Spa:POD:Object:Command:Node:Pause", SPA_TYPE_INFO_NODE_COMMAND_BASE "Pause", SPA_NODE_COMMAND_Pause, },
	{ "Spa:POD:Object:Command:Node:Start", SPA_TYPE_INFO_NODE_COMMAND_BASE "Start", SPA_NODE_COMMAND_Start, },
	{ "Spa:POD:Object:Command:Node:Enable", SPA_TYPE_INFO_NODE_COMMAND_BASE "Enable", SPA_NODE_COMMAND_Enable, },
	{ "Spa:POD:Object:Command:Node:Disable", SPA_TYPE_INFO_NODE_COMMAND_BASE "Disable", SPA_NODE_COMMAND_Disable, },
	{ "Spa:POD:Object:Command:Node:Flush", SPA_TYPE_INFO_NODE_COMMAND_BASE "Flush", SPA_NODE_COMMAND_Flush, },
	{ "Spa:POD:Object:Command:Node:Drain", SPA_TYPE_INFO_NODE_COMMAND_BASE "Drain", SPA_NODE_COMMAND_Drain, },
	{ "Spa:POD:Object:Command:Node:Marker", SPA_TYPE_INFO_NODE_COMMAND_BASE "Marker", SPA_NODE_COMMAND_Marker, },
	{ "Spa:POD:Object:Command:Node:ClockUpdate", SPA_TYPE_INFO_NODE_COMMAND_BASE "ClockUpdate", SPA_NODE0_COMMAND_ClockUpdate, },
	{ "Spa:POD:Object:Event:Monitor:Added",  },
	{ "Spa:POD:Object:Event:Monitor:Removed",  },
	{ "Spa:POD:Object:Event:Monitor:Changed",  },
	{ "Spa:POD:Object:MonitorItem",  },
	{ "Spa:POD:Object:MonitorItem:id",  },
	{ "Spa:POD:Object:MonitorItem:flags",  },
	{ "Spa:POD:Object:MonitorItem:state",  },
	{ "Spa:POD:Object:MonitorItem:name",  },
	{ "Spa:POD:Object:MonitorItem:class",  },
	{ "Spa:POD:Object:MonitorItem:info",  },
	{ "Spa:POD:Object:MonitorItem:factory",  },
	{ "Spa:POD:Object:Param:Buffers", SPA_TYPE_INFO_PARAM_Buffers, SPA_TYPE_OBJECT_ParamBuffers, },
	{ "Spa:POD:Object:Param:Buffers:size", SPA_TYPE_INFO_PARAM_BLOCK_INFO_BASE "size", SPA_PARAM_BUFFERS_size, },
	{ "Spa:POD:Object:Param:Buffers:stride", SPA_TYPE_INFO_PARAM_BLOCK_INFO_BASE "stride", SPA_PARAM_BUFFERS_stride, },
	{ "Spa:POD:Object:Param:Buffers:buffers", SPA_TYPE_INFO_PARAM_BUFFERS_BASE "buffers", SPA_PARAM_BUFFERS_buffers, },
	{ "Spa:POD:Object:Param:Buffers:align",SPA_TYPE_INFO_PARAM_BLOCK_INFO_BASE "align", SPA_PARAM_BUFFERS_align,  },
	{ "Spa:POD:Object:Param:Meta", SPA_TYPE_INFO_PARAM_Meta, SPA_TYPE_OBJECT_ParamMeta, },
	{ "Spa:POD:Object:Param:Meta:type", SPA_TYPE_INFO_PARAM_META_BASE "type", SPA_PARAM_META_type, },
	{ "Spa:POD:Object:Param:Meta:size", SPA_TYPE_INFO_PARAM_META_BASE "size", SPA_PARAM_META_size, },
	{ "Spa:POD:Object:Param:IO:id",  },
	{ "Spa:POD:Object:Param:IO:size",  },
	{ "Spa:Enum:ParamId:IO:Buffers",  },
	{ "Spa:POD:Object:Param:IO:Buffers",  },
	{ "Spa:Enum:ParamId:IO:Control",  },
	{ "Spa:POD:Object:Param:IO:Control",  },
	{ "Spa:Enum:ParamId:IO:Props:In",  },
	{ "Spa:Enum:ParamId:IO:Props:Out",  },
	{ "Spa:POD:Object:Param:IO:Prop",  },
	{ "Spa:Interface:DBus", SPA_TYPE_INFO_INTERFACE_BASE "DBus", 0, },
	{ "Spa:Enum:MediaType:audio", SPA_TYPE_INFO_MEDIA_TYPE_BASE "audio", SPA_MEDIA_TYPE_audio, },
	{ "Spa:Enum:MediaType:video", SPA_TYPE_INFO_MEDIA_TYPE_BASE "video", SPA_MEDIA_TYPE_video, },
	{ "Spa:Enum:MediaType:image", SPA_TYPE_INFO_MEDIA_TYPE_BASE "image", SPA_MEDIA_TYPE_image, },
	{ "Spa:Enum:MediaType:binary", SPA_TYPE_INFO_MEDIA_TYPE_BASE "binary", SPA_MEDIA_TYPE_binary, },
	{ "Spa:Enum:MediaType:stream", SPA_TYPE_INFO_MEDIA_TYPE_BASE "stream", SPA_MEDIA_TYPE_stream, },
	{ "Spa:Enum:MediaType:application", SPA_TYPE_INFO_MEDIA_TYPE_BASE "application", SPA_MEDIA_TYPE_application, },
	{ "Spa:Enum:MediaSubtype:raw", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "raw", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:dsp", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "dsp", SPA_MEDIA_SUBTYPE_dsp, },
	{ "Spa:Enum:MediaSubtype:control", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "control", SPA_MEDIA_SUBTYPE_control, },
	{ "Spa:Enum:MediaSubtype:h264", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "h264", SPA_MEDIA_SUBTYPE_h264, },
	{ "Spa:Enum:MediaSubtype:mjpg", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mjpg", SPA_MEDIA_SUBTYPE_mjpg, },
	{ "Spa:Enum:MediaSubtype:dv", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "dv", SPA_MEDIA_SUBTYPE_dv, },
	{ "Spa:Enum:MediaSubtype:mpegts", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mpegts", SPA_MEDIA_SUBTYPE_mpegts, },
	{ "Spa:Enum:MediaSubtype:h263", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "h263", SPA_MEDIA_SUBTYPE_h263, },
	{ "Spa:Enum:MediaSubtype:mpeg1", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mpeg1", SPA_MEDIA_SUBTYPE_mpeg1, },
	{ "Spa:Enum:MediaSubtype:mpeg2", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mpeg2", SPA_MEDIA_SUBTYPE_mpeg2, },
	{ "Spa:Enum:MediaSubtype:mpeg4", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mpeg4", SPA_MEDIA_SUBTYPE_mpeg4, },
	{ "Spa:Enum:MediaSubtype:xvid", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "xvid", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:vc1", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "vc1", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:vp8", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "vp8", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:vp9", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "vp9", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:jpeg", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "jpeg", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:bayer", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "bayer", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:mp3", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "mp3", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:aac", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "aac", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:vorbis", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "vorbis", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:wma", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "wma", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:ra", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "ra", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:sbc", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "sbc", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:adpcm", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "adpcm", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:g723", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "g723", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:g726", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "g726", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:g729", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "g729", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:amr", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "amr", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:gsm", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "gsm", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:Enum:MediaSubtype:midi", SPA_TYPE_INFO_MEDIA_SUBTYPE_BASE "midi", SPA_MEDIA_SUBTYPE_raw, },
	{ "Spa:POD:Object:Param:Format:Video:format", SPA_TYPE_INFO_FORMAT_VIDEO_BASE "format", SPA_FORMAT_VIDEO_format,},
	{ "Spa:POD:Object:Param:Format:Video:size", SPA_TYPE_INFO_FORMAT_VIDEO_BASE "size", SPA_FORMAT_VIDEO_size,},
	{ "Spa:POD:Object:Param:Format:Video:framerate", SPA_TYPE_INFO_FORMAT_VIDEO_BASE "framerate", SPA_FORMAT_VIDEO_framerate},
	{ "Spa:POD:Object:Param:Format:Video:max-framerate", SPA_TYPE_INFO_FORMAT_VIDEO_BASE "maxFramerate", SPA_FORMAT_VIDEO_maxFramerate},
	{ "Spa:POD:Object:Param:Format:Video:views", SPA_TYPE_INFO_FORMAT_VIDEO_BASE "views", SPA_FORMAT_VIDEO_views},
	{ "Spa:POD:Object:Param:Format:Video:interlace-mode", },
	{ "Spa:POD:Object:Param:Format:Video:pixel-aspect-ratio", },
	{ "Spa:POD:Object:Param:Format:Video:multiview-mode", },
	{ "Spa:POD:Object:Param:Format:Video:multiview-flags", },
	{ "Spa:POD:Object:Param:Format:Video:chroma-site", },
	{ "Spa:POD:Object:Param:Format:Video:color-range", },
	{ "Spa:POD:Object:Param:Format:Video:color-matrix", },
	{ "Spa:POD:Object:Param:Format:Video:transfer-function", },
	{ "Spa:POD:Object:Param:Format:Video:color-primaries", },
	{ "Spa:POD:Object:Param:Format:Video:profile", },
	{ "Spa:POD:Object:Param:Format:Video:level", },
	{ "Spa:POD:Object:Param:Format:Video:stream-format", },
	{ "Spa:POD:Object:Param:Format:Video:alignment", },
	{ "Spa:POD:Object:Param:Format:Audio:format", SPA_TYPE_INFO_FORMAT_AUDIO_BASE "format", SPA_FORMAT_AUDIO_format,},
	{ "Spa:POD:Object:Param:Format:Audio:flags", },
	{ "Spa:POD:Object:Param:Format:Audio:layout", },
	{ "Spa:POD:Object:Param:Format:Audio:rate", },
	{ "Spa:POD:Object:Param:Format:Audio:channels", },
	{ "Spa:POD:Object:Param:Format:Audio:channel-mask", },
	{ "Spa:Enum:VideoFormat:encoded", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "encoded", SPA_VIDEO_FORMAT_ENCODED,},
	{ "Spa:Enum:VideoFormat:I420", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420", SPA_VIDEO_FORMAT_I420,},
	{ "Spa:Enum:VideoFormat:YV12", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YV12", SPA_VIDEO_FORMAT_YV12,},
	{ "Spa:Enum:VideoFormat:YUY2", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YUY2", SPA_VIDEO_FORMAT_YUY2,},
	{ "Spa:Enum:VideoFormat:UYVY", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "UYVY", SPA_VIDEO_FORMAT_UYVY,},
	{ "Spa:Enum:VideoFormat:AYUV", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "AYUV", SPA_VIDEO_FORMAT_AYUV,},
	{ "Spa:Enum:VideoFormat:RGBx", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBx", SPA_VIDEO_FORMAT_RGBx,},
	{ "Spa:Enum:VideoFormat:BGRx", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRx", SPA_VIDEO_FORMAT_BGRx,},
	{ "Spa:Enum:VideoFormat:xRGB", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xRGB", SPA_VIDEO_FORMAT_xRGB,},
	{ "Spa:Enum:VideoFormat:xBGR", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xBGR", SPA_VIDEO_FORMAT_xBGR,},
	{ "Spa:Enum:VideoFormat:RGBA", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBA", SPA_VIDEO_FORMAT_RGBA,},
	{ "Spa:Enum:VideoFormat:BGRA", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRA", SPA_VIDEO_FORMAT_BGRA,},
	{ "Spa:Enum:VideoFormat:ARGB", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ARGB", SPA_VIDEO_FORMAT_ARGB,},
	{ "Spa:Enum:VideoFormat:ABGR", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ABGR", SPA_VIDEO_FORMAT_ABGR,},
	{ "Spa:Enum:VideoFormat:RGB", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB", SPA_VIDEO_FORMAT_RGB,},
	{ "Spa:Enum:VideoFormat:BGR", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR", SPA_VIDEO_FORMAT_BGR,},
	{ "Spa:Enum:VideoFormat:Y41B", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y41B", SPA_VIDEO_FORMAT_Y41B,},
	{ "Spa:Enum:VideoFormat:Y42B", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y42B", SPA_VIDEO_FORMAT_Y42B,},
	{ "Spa:Enum:VideoFormat:YVYU", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YVYU", SPA_VIDEO_FORMAT_YVYU,},
	{ "Spa:Enum:VideoFormat:Y444", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444", SPA_VIDEO_FORMAT_Y444,},
	{ "Spa:Enum:VideoFormat:v210", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v210", SPA_VIDEO_FORMAT_v210,},
	{ "Spa:Enum:VideoFormat:v216", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v216", SPA_VIDEO_FORMAT_v216,},
	{ "Spa:Enum:VideoFormat:NV12", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV12", SPA_VIDEO_FORMAT_NV12,},
	{ "Spa:Enum:VideoFormat:NV21", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV21", SPA_VIDEO_FORMAT_NV21,},
	{ "Spa:Enum:VideoFormat:GRAY8", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY8", SPA_VIDEO_FORMAT_GRAY8,},
	{ "Spa:Enum:VideoFormat:GRAY16_BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY16_BE", SPA_VIDEO_FORMAT_GRAY16_BE,},
	{ "Spa:Enum:VideoFormat:GRAY16_LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY16_LE", SPA_VIDEO_FORMAT_GRAY16_LE,},
	{ "Spa:Enum:VideoFormat:v308", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v308", SPA_VIDEO_FORMAT_v308,},
	{ "Spa:Enum:VideoFormat:RGB16", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB16", SPA_VIDEO_FORMAT_RGB16,},
	{ "Spa:Enum:VideoFormat:BGR16", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR16", SPA_VIDEO_FORMAT_BGR16,},
	{ "Spa:Enum:VideoFormat:RGB15", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB15", SPA_VIDEO_FORMAT_RGB15,},
	{ "Spa:Enum:VideoFormat:BGR15", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR15", SPA_VIDEO_FORMAT_BGR15,},
	{ "Spa:Enum:VideoFormat:UYVP", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "UYVP", SPA_VIDEO_FORMAT_UYVP,},
	{ "Spa:Enum:VideoFormat:A420", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420", SPA_VIDEO_FORMAT_A420,},
	{ "Spa:Enum:VideoFormat:RGB8P", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB8P", SPA_VIDEO_FORMAT_RGB8P,},
	{ "Spa:Enum:VideoFormat:YUV9", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YUV9", SPA_VIDEO_FORMAT_YUV9,},
	{ "Spa:Enum:VideoFormat:YVU9", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YVU9", SPA_VIDEO_FORMAT_YVU9,},
	{ "Spa:Enum:VideoFormat:IYU1", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "IYU1", SPA_VIDEO_FORMAT_IYU1,},
	{ "Spa:Enum:VideoFormat:ARGB64", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ARGB64", SPA_VIDEO_FORMAT_ARGB64,},
	{ "Spa:Enum:VideoFormat:AYUV64", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "AYUV64", SPA_VIDEO_FORMAT_AYUV64,},
	{ "Spa:Enum:VideoFormat:r210", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "r210", SPA_VIDEO_FORMAT_r210,},
	{ "Spa:Enum:VideoFormat:I420_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_10BE", SPA_VIDEO_FORMAT_I420_10BE,},
	{ "Spa:Enum:VideoFormat:I420_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_10LE", SPA_VIDEO_FORMAT_I420_10LE,},
	{ "Spa:Enum:VideoFormat:I422_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_10BE", SPA_VIDEO_FORMAT_I422_10BE,},
	{ "Spa:Enum:VideoFormat:I422_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_10LE", SPA_VIDEO_FORMAT_I422_10LE,},
	{ "Spa:Enum:VideoFormat:Y444_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_10BE", SPA_VIDEO_FORMAT_Y444_10BE,},
	{ "Spa:Enum:VideoFormat:Y444_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_10LE", SPA_VIDEO_FORMAT_Y444_10LE,},
	{ "Spa:Enum:VideoFormat:GBR", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR", SPA_VIDEO_FORMAT_GBR,},
	{ "Spa:Enum:VideoFormat:GBR_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_10BE", SPA_VIDEO_FORMAT_GBR_10BE,},
	{ "Spa:Enum:VideoFormat:GBR_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_10LE", SPA_VIDEO_FORMAT_GBR_10LE,},
	{ "Spa:Enum:VideoFormat:NV16", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV16", SPA_VIDEO_FORMAT_NV16,},
	{ "Spa:Enum:VideoFormat:NV24", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV24", SPA_VIDEO_FORMAT_NV24,},
	{ "Spa:Enum:VideoFormat:NV12_64Z32", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV12_64Z32", SPA_VIDEO_FORMAT_NV12_64Z32,},
	{ "Spa:Enum:VideoFormat:A420_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420_10BE", SPA_VIDEO_FORMAT_A420_10BE,},
	{ "Spa:Enum:VideoFormat:A420_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420_10LE", SPA_VIDEO_FORMAT_A420_10LE,},
	{ "Spa:Enum:VideoFormat:A422_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A422_10BE", SPA_VIDEO_FORMAT_A422_10BE,},
	{ "Spa:Enum:VideoFormat:A422_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A422_10LE", SPA_VIDEO_FORMAT_A422_10LE,},
	{ "Spa:Enum:VideoFormat:A444_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A444_10BE", SPA_VIDEO_FORMAT_A444_10BE,},
	{ "Spa:Enum:VideoFormat:A444_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A444_10LE", SPA_VIDEO_FORMAT_A444_10LE,},
	{ "Spa:Enum:VideoFormat:NV61", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV61", SPA_VIDEO_FORMAT_NV61,},
	{ "Spa:Enum:VideoFormat:P010_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "P010_10BE", SPA_VIDEO_FORMAT_P010_10BE,},
	{ "Spa:Enum:VideoFormat:P010_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "P010_10LE", SPA_VIDEO_FORMAT_P010_10LE,},
	{ "Spa:Enum:VideoFormat:IYU2", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "IYU2", SPA_VIDEO_FORMAT_IYU2,},
	{ "Spa:Enum:VideoFormat:VYUY", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "VYUY", SPA_VIDEO_FORMAT_VYUY,},
	{ "Spa:Enum:VideoFormat:GBRA", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA", SPA_VIDEO_FORMAT_GBRA,},
	{ "Spa:Enum:VideoFormat:GBRA_10BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_10BE", SPA_VIDEO_FORMAT_GBRA_10BE,},
	{ "Spa:Enum:VideoFormat:GBRA_10LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_10LE", SPA_VIDEO_FORMAT_GBRA_10LE,},
	{ "Spa:Enum:VideoFormat:GBR_12BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_12BE", SPA_VIDEO_FORMAT_GBR_12BE,},
	{ "Spa:Enum:VideoFormat:GBR_12LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_12LE", SPA_VIDEO_FORMAT_GBR_12LE,},
	{ "Spa:Enum:VideoFormat:GBRA_12BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_12BE", SPA_VIDEO_FORMAT_GBRA_12BE,},
	{ "Spa:Enum:VideoFormat:GBRA_12LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_12LE", SPA_VIDEO_FORMAT_GBRA_12LE,},
	{ "Spa:Enum:VideoFormat:I420_12BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_12BE", SPA_VIDEO_FORMAT_I420_12BE,},
	{ "Spa:Enum:VideoFormat:I420_12LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_12LE", SPA_VIDEO_FORMAT_I420_12LE,},
	{ "Spa:Enum:VideoFormat:I422_12BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_12BE", SPA_VIDEO_FORMAT_I422_12BE,},
	{ "Spa:Enum:VideoFormat:I422_12LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_12LE", SPA_VIDEO_FORMAT_I422_12LE,},
	{ "Spa:Enum:VideoFormat:Y444_12BE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_12BE", SPA_VIDEO_FORMAT_Y444_12BE,},
	{ "Spa:Enum:VideoFormat:Y444_12LE", SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_12LE", SPA_VIDEO_FORMAT_Y444_12LE,},
	{ "Spa:Enum:AudioFormat:ENCODED", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "ENCODED", SPA_AUDIO_FORMAT_ENCODED,},
	{ "Spa:Enum:AudioFormat:S8", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S8", SPA_AUDIO_FORMAT_S8, },
	{ "Spa:Enum:AudioFormat:U8", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U8", SPA_AUDIO_FORMAT_U8, },
	{ "Spa:Enum:AudioFormat:S16LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S16_LE", SPA_AUDIO_FORMAT_S16_LE, },
	{ "Spa:Enum:AudioFormat:U16LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U16_LE", SPA_AUDIO_FORMAT_U16_LE, },
	{ "Spa:Enum:AudioFormat:S24_32LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S24_32_LE", SPA_AUDIO_FORMAT_S24_32_LE, },
	{ "Spa:Enum:AudioFormat:U24_32LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U24_32_LE", SPA_AUDIO_FORMAT_U24_32_LE, },
	{ "Spa:Enum:AudioFormat:S32LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S32_LE", SPA_AUDIO_FORMAT_S32_LE, },
	{ "Spa:Enum:AudioFormat:U32LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U32_LE", SPA_AUDIO_FORMAT_U32_LE, },
	{ "Spa:Enum:AudioFormat:S24LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S24_LE", SPA_AUDIO_FORMAT_S24_LE, },
	{ "Spa:Enum:AudioFormat:U24LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U24_LE", SPA_AUDIO_FORMAT_U24_LE, },
	{ "Spa:Enum:AudioFormat:S20LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S20_LE", SPA_AUDIO_FORMAT_S20_LE, },
	{ "Spa:Enum:AudioFormat:U20LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U20_LE", SPA_AUDIO_FORMAT_U20_LE, },
	{ "Spa:Enum:AudioFormat:S18LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S18_LE", SPA_AUDIO_FORMAT_S18_LE, },
	{ "Spa:Enum:AudioFormat:U18LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U18_LE", SPA_AUDIO_FORMAT_U18_LE, },
	{ "Spa:Enum:AudioFormat:F32LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "F32_LE", SPA_AUDIO_FORMAT_F32_LE, },
	{ "Spa:Enum:AudioFormat:F64LE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "F64_LE", SPA_AUDIO_FORMAT_F64_LE, },
	{ "Spa:Enum:AudioFormat:S16BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S16_BE", SPA_AUDIO_FORMAT_S16_BE, },
	{ "Spa:Enum:AudioFormat:U16BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U16_BE", SPA_AUDIO_FORMAT_U16_BE, },
	{ "Spa:Enum:AudioFormat:S24_32BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S24_32_BE", SPA_AUDIO_FORMAT_S24_32_BE, },
	{ "Spa:Enum:AudioFormat:U24_32BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U24_32_BE", SPA_AUDIO_FORMAT_U24_32_BE, },
	{ "Spa:Enum:AudioFormat:S32BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S32_BE", SPA_AUDIO_FORMAT_S32_BE, },
	{ "Spa:Enum:AudioFormat:U32BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U32_BE", SPA_AUDIO_FORMAT_U32_BE, },
	{ "Spa:Enum:AudioFormat:S24BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S24_BE", SPA_AUDIO_FORMAT_S24_BE, },
	{ "Spa:Enum:AudioFormat:U24BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U24_BE", SPA_AUDIO_FORMAT_U24_BE, },
	{ "Spa:Enum:AudioFormat:S20BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S20_BE", SPA_AUDIO_FORMAT_S20_BE, },
	{ "Spa:Enum:AudioFormat:U20BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U20_BE", SPA_AUDIO_FORMAT_U20_BE, },
	{ "Spa:Enum:AudioFormat:S18BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "S18_BE", SPA_AUDIO_FORMAT_S18_BE, },
	{ "Spa:Enum:AudioFormat:U18BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "U18_BE", SPA_AUDIO_FORMAT_U18_BE, },
	{ "Spa:Enum:AudioFormat:F32BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "F32_BE", SPA_AUDIO_FORMAT_F32_BE, },
	{ "Spa:Enum:AudioFormat:F64BE", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "F64_BE", SPA_AUDIO_FORMAT_F64_BE, },
	{ "Spa:Enum:AudioFormat:F32P", SPA_TYPE_INFO_AUDIO_FORMAT_BASE "F32P", SPA_AUDIO_FORMAT_F32P, },
};
