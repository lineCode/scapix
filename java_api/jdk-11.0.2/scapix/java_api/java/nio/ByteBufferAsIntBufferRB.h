// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/ByteBufferAsIntBufferB.h>

#ifndef SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERRB_H
#define SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERRB_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }
namespace java::nio { class IntBuffer; }

namespace java::nio {

// private
class ByteBufferAsIntBufferRB : public object_base<SCAPIX_META_STRING("java/nio/ByteBufferAsIntBufferRB"),
	java::nio::ByteBufferAsIntBufferB>
{
public:

	ref<java::nio::IntBuffer> slice();
	ref<java::nio::IntBuffer> duplicate();
	ref<java::nio::IntBuffer> asReadOnlyBuffer();
	ref<java::nio::IntBuffer> put(jint x);
	ref<java::nio::IntBuffer> put(jint i, jint x);
	ref<java::nio::IntBuffer> compact();
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::ByteOrder> order();

protected:

	ByteBufferAsIntBufferRB(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/nio/IntBuffer.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::IntBuffer>>(); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::put(jint x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(x); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::put(jint i, jint x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::IntBuffer>>(i, x); }
inline ref<java::nio::IntBuffer> ByteBufferAsIntBufferRB::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::IntBuffer>>(); }
inline jboolean ByteBufferAsIntBufferRB::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean ByteBufferAsIntBufferRB::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::ByteOrder> ByteBufferAsIntBufferRB::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_BYTEBUFFERASINTBUFFERRB_H
