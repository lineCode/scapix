// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NET_URLCONNECTION_H
#define SCAPIX_JAVA_NET_URLCONNECTION_H

namespace scapix::java_api {

namespace java::io { class InputStream; }
namespace java::io { class OutputStream; }
namespace java::lang { class Class; }
namespace java::lang { class String; }
namespace java::net { class ContentHandlerFactory; }
namespace java::net { class FileNameMap; }
namespace java::net { class URL; }
namespace java::security { class Permission; }
namespace java::util { class Map; }

namespace java::net {

class URLConnection : public object_base<SCAPIX_META_STRING("java/net/URLConnection"),
	java::lang::Object>
{
public:

	static ref<java::net::FileNameMap> getFileNameMap();
	static void setFileNameMap(ref<java::net::FileNameMap> map);
	void connect();
	void setConnectTimeout(jint timeout);
	jint getConnectTimeout();
	void setReadTimeout(jint timeout);
	jint getReadTimeout();
	ref<java::net::URL> getURL();
	jint getContentLength();
	jlong getContentLengthLong();
	ref<java::lang::String> getContentType();
	ref<java::lang::String> getContentEncoding();
	jlong getExpiration();
	jlong getDate();
	jlong getLastModified();
	ref<java::lang::String> getHeaderField(ref<java::lang::String> name);
	ref<java::util::Map> getHeaderFields();
	jint getHeaderFieldInt(ref<java::lang::String> name, jint Default);
	jlong getHeaderFieldLong(ref<java::lang::String> name, jlong Default);
	jlong getHeaderFieldDate(ref<java::lang::String> name, jlong Default);
	ref<java::lang::String> getHeaderFieldKey(jint n);
	ref<java::lang::String> getHeaderField(jint n);
	ref<java::lang::Object> getContent();
	ref<java::lang::Object> getContent(ref<link::java::array<java::lang::Class>> classes);
	ref<java::security::Permission> getPermission();
	ref<java::io::InputStream> getInputStream();
	ref<java::io::OutputStream> getOutputStream();
	ref<java::lang::String> toString();
	void setDoInput(jboolean doinput);
	jboolean getDoInput();
	void setDoOutput(jboolean dooutput);
	jboolean getDoOutput();
	void setAllowUserInteraction(jboolean allowuserinteraction);
	jboolean getAllowUserInteraction();
	static void setDefaultAllowUserInteraction(jboolean defaultallowuserinteraction);
	static jboolean getDefaultAllowUserInteraction();
	void setUseCaches(jboolean usecaches);
	jboolean getUseCaches();
	void setIfModifiedSince(jlong ifmodifiedsince);
	jlong getIfModifiedSince();
	jboolean getDefaultUseCaches();
	void setDefaultUseCaches(jboolean defaultusecaches);
	static void setDefaultUseCaches(ref<java::lang::String> protocol, jboolean defaultVal);
	static jboolean getDefaultUseCaches(ref<java::lang::String> protocol);
	void setRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value);
	void addRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value);
	ref<java::lang::String> getRequestProperty(ref<java::lang::String> key);
	ref<java::util::Map> getRequestProperties();
	static void setDefaultRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value);
	static ref<java::lang::String> getDefaultRequestProperty(ref<java::lang::String> key);
	static void setContentHandlerFactory(ref<java::net::ContentHandlerFactory> fac);
	static ref<java::lang::String> guessContentTypeFromName(ref<java::lang::String> fname);
	static ref<java::lang::String> guessContentTypeFromStream(ref<java::io::InputStream> is);

protected:

	URLConnection(handle_type h) : base_(h) {}

};

} // namespace java::net
} // namespace scapix::java_api

#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ContentHandlerFactory.h>
#include <scapix/java_api/java/net/FileNameMap.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace java::net {

inline ref<java::net::FileNameMap> URLConnection::getFileNameMap() { return call_static_method<SCAPIX_META_STRING("getFileNameMap"), ref<java::net::FileNameMap>>(); }
inline void URLConnection::setFileNameMap(ref<java::net::FileNameMap> map) { return call_static_method<SCAPIX_META_STRING("setFileNameMap"), void>(map); }
inline void URLConnection::connect() { return call_method<SCAPIX_META_STRING("connect"), void>(); }
inline void URLConnection::setConnectTimeout(jint timeout) { return call_method<SCAPIX_META_STRING("setConnectTimeout"), void>(timeout); }
inline jint URLConnection::getConnectTimeout() { return call_method<SCAPIX_META_STRING("getConnectTimeout"), jint>(); }
inline void URLConnection::setReadTimeout(jint timeout) { return call_method<SCAPIX_META_STRING("setReadTimeout"), void>(timeout); }
inline jint URLConnection::getReadTimeout() { return call_method<SCAPIX_META_STRING("getReadTimeout"), jint>(); }
inline ref<java::net::URL> URLConnection::getURL() { return call_method<SCAPIX_META_STRING("getURL"), ref<java::net::URL>>(); }
inline jint URLConnection::getContentLength() { return call_method<SCAPIX_META_STRING("getContentLength"), jint>(); }
inline jlong URLConnection::getContentLengthLong() { return call_method<SCAPIX_META_STRING("getContentLengthLong"), jlong>(); }
inline ref<java::lang::String> URLConnection::getContentType() { return call_method<SCAPIX_META_STRING("getContentType"), ref<java::lang::String>>(); }
inline ref<java::lang::String> URLConnection::getContentEncoding() { return call_method<SCAPIX_META_STRING("getContentEncoding"), ref<java::lang::String>>(); }
inline jlong URLConnection::getExpiration() { return call_method<SCAPIX_META_STRING("getExpiration"), jlong>(); }
inline jlong URLConnection::getDate() { return call_method<SCAPIX_META_STRING("getDate"), jlong>(); }
inline jlong URLConnection::getLastModified() { return call_method<SCAPIX_META_STRING("getLastModified"), jlong>(); }
inline ref<java::lang::String> URLConnection::getHeaderField(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("getHeaderField"), ref<java::lang::String>>(name); }
inline ref<java::util::Map> URLConnection::getHeaderFields() { return call_method<SCAPIX_META_STRING("getHeaderFields"), ref<java::util::Map>>(); }
inline jint URLConnection::getHeaderFieldInt(ref<java::lang::String> name, jint Default) { return call_method<SCAPIX_META_STRING("getHeaderFieldInt"), jint>(name, Default); }
inline jlong URLConnection::getHeaderFieldLong(ref<java::lang::String> name, jlong Default) { return call_method<SCAPIX_META_STRING("getHeaderFieldLong"), jlong>(name, Default); }
inline jlong URLConnection::getHeaderFieldDate(ref<java::lang::String> name, jlong Default) { return call_method<SCAPIX_META_STRING("getHeaderFieldDate"), jlong>(name, Default); }
inline ref<java::lang::String> URLConnection::getHeaderFieldKey(jint n) { return call_method<SCAPIX_META_STRING("getHeaderFieldKey"), ref<java::lang::String>>(n); }
inline ref<java::lang::String> URLConnection::getHeaderField(jint n) { return call_method<SCAPIX_META_STRING("getHeaderField"), ref<java::lang::String>>(n); }
inline ref<java::lang::Object> URLConnection::getContent() { return call_method<SCAPIX_META_STRING("getContent"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> URLConnection::getContent(ref<link::java::array<java::lang::Class>> classes) { return call_method<SCAPIX_META_STRING("getContent"), ref<java::lang::Object>>(classes); }
inline ref<java::security::Permission> URLConnection::getPermission() { return call_method<SCAPIX_META_STRING("getPermission"), ref<java::security::Permission>>(); }
inline ref<java::io::InputStream> URLConnection::getInputStream() { return call_method<SCAPIX_META_STRING("getInputStream"), ref<java::io::InputStream>>(); }
inline ref<java::io::OutputStream> URLConnection::getOutputStream() { return call_method<SCAPIX_META_STRING("getOutputStream"), ref<java::io::OutputStream>>(); }
inline ref<java::lang::String> URLConnection::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline void URLConnection::setDoInput(jboolean doinput) { return call_method<SCAPIX_META_STRING("setDoInput"), void>(doinput); }
inline jboolean URLConnection::getDoInput() { return call_method<SCAPIX_META_STRING("getDoInput"), jboolean>(); }
inline void URLConnection::setDoOutput(jboolean dooutput) { return call_method<SCAPIX_META_STRING("setDoOutput"), void>(dooutput); }
inline jboolean URLConnection::getDoOutput() { return call_method<SCAPIX_META_STRING("getDoOutput"), jboolean>(); }
inline void URLConnection::setAllowUserInteraction(jboolean allowuserinteraction) { return call_method<SCAPIX_META_STRING("setAllowUserInteraction"), void>(allowuserinteraction); }
inline jboolean URLConnection::getAllowUserInteraction() { return call_method<SCAPIX_META_STRING("getAllowUserInteraction"), jboolean>(); }
inline void URLConnection::setDefaultAllowUserInteraction(jboolean defaultallowuserinteraction) { return call_static_method<SCAPIX_META_STRING("setDefaultAllowUserInteraction"), void>(defaultallowuserinteraction); }
inline jboolean URLConnection::getDefaultAllowUserInteraction() { return call_static_method<SCAPIX_META_STRING("getDefaultAllowUserInteraction"), jboolean>(); }
inline void URLConnection::setUseCaches(jboolean usecaches) { return call_method<SCAPIX_META_STRING("setUseCaches"), void>(usecaches); }
inline jboolean URLConnection::getUseCaches() { return call_method<SCAPIX_META_STRING("getUseCaches"), jboolean>(); }
inline void URLConnection::setIfModifiedSince(jlong ifmodifiedsince) { return call_method<SCAPIX_META_STRING("setIfModifiedSince"), void>(ifmodifiedsince); }
inline jlong URLConnection::getIfModifiedSince() { return call_method<SCAPIX_META_STRING("getIfModifiedSince"), jlong>(); }
inline jboolean URLConnection::getDefaultUseCaches() { return call_method<SCAPIX_META_STRING("getDefaultUseCaches"), jboolean>(); }
inline void URLConnection::setDefaultUseCaches(jboolean defaultusecaches) { return call_method<SCAPIX_META_STRING("setDefaultUseCaches"), void>(defaultusecaches); }
inline void URLConnection::setDefaultUseCaches(ref<java::lang::String> protocol, jboolean defaultVal) { return call_static_method<SCAPIX_META_STRING("setDefaultUseCaches"), void>(protocol, defaultVal); }
inline jboolean URLConnection::getDefaultUseCaches(ref<java::lang::String> protocol) { return call_static_method<SCAPIX_META_STRING("getDefaultUseCaches"), jboolean>(protocol); }
inline void URLConnection::setRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("setRequestProperty"), void>(key, value); }
inline void URLConnection::addRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value) { return call_method<SCAPIX_META_STRING("addRequestProperty"), void>(key, value); }
inline ref<java::lang::String> URLConnection::getRequestProperty(ref<java::lang::String> key) { return call_method<SCAPIX_META_STRING("getRequestProperty"), ref<java::lang::String>>(key); }
inline ref<java::util::Map> URLConnection::getRequestProperties() { return call_method<SCAPIX_META_STRING("getRequestProperties"), ref<java::util::Map>>(); }
inline void URLConnection::setDefaultRequestProperty(ref<java::lang::String> key, ref<java::lang::String> value) { return call_static_method<SCAPIX_META_STRING("setDefaultRequestProperty"), void>(key, value); }
inline ref<java::lang::String> URLConnection::getDefaultRequestProperty(ref<java::lang::String> key) { return call_static_method<SCAPIX_META_STRING("getDefaultRequestProperty"), ref<java::lang::String>>(key); }
inline void URLConnection::setContentHandlerFactory(ref<java::net::ContentHandlerFactory> fac) { return call_static_method<SCAPIX_META_STRING("setContentHandlerFactory"), void>(fac); }
inline ref<java::lang::String> URLConnection::guessContentTypeFromName(ref<java::lang::String> fname) { return call_static_method<SCAPIX_META_STRING("guessContentTypeFromName"), ref<java::lang::String>>(fname); }
inline ref<java::lang::String> URLConnection::guessContentTypeFromStream(ref<java::io::InputStream> is) { return call_static_method<SCAPIX_META_STRING("guessContentTypeFromStream"), ref<java::lang::String>>(is); }

} // namespace java::net
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NET_URLCONNECTION_H
