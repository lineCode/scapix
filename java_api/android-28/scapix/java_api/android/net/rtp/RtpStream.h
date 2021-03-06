// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_NET_RTP_RTPSTREAM_H
#define SCAPIX_ANDROID_NET_RTP_RTPSTREAM_H

namespace scapix::java_api {

namespace java::net { class InetAddress; }

namespace android::net::rtp {

class RtpStream : public object_base<SCAPIX_META_STRING("android/net/rtp/RtpStream"),
	java::lang::Object>
{
public:

	static jint MODE_NORMAL_();
	static jint MODE_RECEIVE_ONLY_();
	static jint MODE_SEND_ONLY_();

	ref<java::net::InetAddress> getLocalAddress();
	jint getLocalPort();
	ref<java::net::InetAddress> getRemoteAddress();
	jint getRemotePort();
	jboolean isBusy();
	jint getMode();
	void setMode(jint mode);
	void associate(ref<java::net::InetAddress> address, jint port);
	void release();

protected:

	RtpStream(handle_type h) : base_(h) {}

};

} // namespace android::net::rtp
} // namespace scapix::java_api

#include <scapix/java_api/java/net/InetAddress.h>

namespace scapix::java_api {
namespace android::net::rtp {

inline jint RtpStream::MODE_NORMAL_() { return get_static_field<SCAPIX_META_STRING("MODE_NORMAL"), jint>(); }
inline jint RtpStream::MODE_RECEIVE_ONLY_() { return get_static_field<SCAPIX_META_STRING("MODE_RECEIVE_ONLY"), jint>(); }
inline jint RtpStream::MODE_SEND_ONLY_() { return get_static_field<SCAPIX_META_STRING("MODE_SEND_ONLY"), jint>(); }
inline ref<java::net::InetAddress> RtpStream::getLocalAddress() { return call_method<SCAPIX_META_STRING("getLocalAddress"), ref<java::net::InetAddress>>(); }
inline jint RtpStream::getLocalPort() { return call_method<SCAPIX_META_STRING("getLocalPort"), jint>(); }
inline ref<java::net::InetAddress> RtpStream::getRemoteAddress() { return call_method<SCAPIX_META_STRING("getRemoteAddress"), ref<java::net::InetAddress>>(); }
inline jint RtpStream::getRemotePort() { return call_method<SCAPIX_META_STRING("getRemotePort"), jint>(); }
inline jboolean RtpStream::isBusy() { return call_method<SCAPIX_META_STRING("isBusy"), jboolean>(); }
inline jint RtpStream::getMode() { return call_method<SCAPIX_META_STRING("getMode"), jint>(); }
inline void RtpStream::setMode(jint mode) { return call_method<SCAPIX_META_STRING("setMode"), void>(mode); }
inline void RtpStream::associate(ref<java::net::InetAddress> address, jint port) { return call_method<SCAPIX_META_STRING("associate"), void>(address, port); }
inline void RtpStream::release() { return call_method<SCAPIX_META_STRING("release"), void>(); }

} // namespace android::net::rtp
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_NET_RTP_RTPSTREAM_H
