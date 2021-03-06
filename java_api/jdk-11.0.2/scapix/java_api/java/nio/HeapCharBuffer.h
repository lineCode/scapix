// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/nio/CharBuffer.h>

#ifndef SCAPIX_JAVA_NIO_HEAPCHARBUFFER_H
#define SCAPIX_JAVA_NIO_HEAPCHARBUFFER_H

namespace scapix::java_api {

namespace java::nio { class ByteOrder; }

namespace java::nio {

// private
class HeapCharBuffer : public object_base<SCAPIX_META_STRING("java/nio/HeapCharBuffer"),
	java::nio::CharBuffer>
{
public:

	ref<java::nio::CharBuffer> slice();
	ref<java::nio::CharBuffer> duplicate();
	ref<java::nio::CharBuffer> asReadOnlyBuffer();
	jchar get();
	jchar get(jint i);
	ref<java::nio::CharBuffer> get(ref<link::java::array<jchar>> dst, jint offset, jint length);
	jboolean isDirect();
	jboolean isReadOnly();
	ref<java::nio::CharBuffer> put(jchar x);
	ref<java::nio::CharBuffer> put(jint i, jchar x);
	ref<java::nio::CharBuffer> put(ref<link::java::array<jchar>> src, jint offset, jint length);
	ref<java::nio::CharBuffer> put(ref<java::nio::CharBuffer> src);
	ref<java::nio::CharBuffer> compact();
	ref<java::nio::CharBuffer> subSequence(jint start, jint end);
	ref<java::nio::ByteOrder> order();

protected:

	HeapCharBuffer(handle_type h) : base_(h) {}

};

} // namespace java::nio
} // namespace scapix::java_api

#include <scapix/java_api/java/nio/ByteOrder.h>

namespace scapix::java_api {
namespace java::nio {

inline ref<java::nio::CharBuffer> HeapCharBuffer::slice() { return call_method<SCAPIX_META_STRING("slice"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::duplicate() { return call_method<SCAPIX_META_STRING("duplicate"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::asReadOnlyBuffer() { return call_method<SCAPIX_META_STRING("asReadOnlyBuffer"), ref<java::nio::CharBuffer>>(); }
inline jchar HeapCharBuffer::get() { return call_method<SCAPIX_META_STRING("get"), jchar>(); }
inline jchar HeapCharBuffer::get(jint i) { return call_method<SCAPIX_META_STRING("get"), jchar>(i); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::get(ref<link::java::array<jchar>> dst, jint offset, jint length) { return call_method<SCAPIX_META_STRING("get"), ref<java::nio::CharBuffer>>(dst, offset, length); }
inline jboolean HeapCharBuffer::isDirect() { return call_method<SCAPIX_META_STRING("isDirect"), jboolean>(); }
inline jboolean HeapCharBuffer::isReadOnly() { return call_method<SCAPIX_META_STRING("isReadOnly"), jboolean>(); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::put(jchar x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(x); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::put(jint i, jchar x) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(i, x); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::put(ref<link::java::array<jchar>> src, jint offset, jint length) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(src, offset, length); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::put(ref<java::nio::CharBuffer> src) { return call_method<SCAPIX_META_STRING("put"), ref<java::nio::CharBuffer>>(src); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::compact() { return call_method<SCAPIX_META_STRING("compact"), ref<java::nio::CharBuffer>>(); }
inline ref<java::nio::CharBuffer> HeapCharBuffer::subSequence(jint start, jint end) { return call_method<SCAPIX_META_STRING("subSequence"), ref<java::nio::CharBuffer>>(start, end); }
inline ref<java::nio::ByteOrder> HeapCharBuffer::order() { return call_method<SCAPIX_META_STRING("order"), ref<java::nio::ByteOrder>>(); }

} // namespace java::nio
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_HEAPCHARBUFFER_H
