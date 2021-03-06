// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_CACHEREQUEST_H
#define SCAPIX_JAVA_NET_CACHEREQUEST_H

namespace scapix::java_api {

namespace java::io { class OutputStream; }

namespace java::net {

class CacheRequest : public object_base<SCAPIX_META_STRING("java/net/CacheRequest"),
	java::lang::Object>
{
public:

	static ref<CacheRequest> new_object();
	ref<java::io::OutputStream> getBody();
	void abort();

protected:

	CacheRequest(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/io/OutputStream.h>

namespace scapix::java_api {
namespace java::net {

inline ref<CacheRequest> CacheRequest::new_object() { return base_::new_object(); }
inline ref<java::io::OutputStream> CacheRequest::getBody() { return call_method<SCAPIX_META_STRING("getBody"), ref<java::io::OutputStream>>(); }
inline void CacheRequest::abort() { return call_method<SCAPIX_META_STRING("abort"), void>(); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_CACHEREQUEST_H
