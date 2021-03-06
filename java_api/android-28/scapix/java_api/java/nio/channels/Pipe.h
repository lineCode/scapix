// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_CHANNELS_PIPE_H
#define SCAPIX_JAVA_NIO_CHANNELS_PIPE_H

namespace scapix::java_api {

namespace java::nio::channels { class Pipe_SinkChannel; }
namespace java::nio::channels { class Pipe_SourceChannel; }

namespace java::nio::channels {

class Pipe : public object_base<SCAPIX_META_STRING("java/nio/channels/Pipe"),
	java::lang::Object>
{
public:

	using SourceChannel = Pipe_SourceChannel;
	using SinkChannel = Pipe_SinkChannel;

	ref<java::nio::channels::Pipe_SourceChannel> source();
	ref<java::nio::channels::Pipe_SinkChannel> sink();
	static ref<java::nio::channels::Pipe> open();

protected:

	Pipe(handle_type h) : base_(h) {}

};

} // namespace java::nio::channels
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/channels/Pipe_SinkChannel.h>
#include <scapix/java_api/java/nio/channels/Pipe_SourceChannel.h>

namespace scapix::java_api {
namespace java::nio::channels {

inline ref<java::nio::channels::Pipe_SourceChannel> Pipe::source() { return call_method<SCAPIX_META_STRING("source"), ref<java::nio::channels::Pipe_SourceChannel>>(); }
inline ref<java::nio::channels::Pipe_SinkChannel> Pipe::sink() { return call_method<SCAPIX_META_STRING("sink"), ref<java::nio::channels::Pipe_SinkChannel>>(); }
inline ref<java::nio::channels::Pipe> Pipe::open() { return call_static_method<SCAPIX_META_STRING("open"), ref<java::nio::channels::Pipe>>(); }

} // namespace java::nio::channels
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_CHANNELS_PIPE_H
