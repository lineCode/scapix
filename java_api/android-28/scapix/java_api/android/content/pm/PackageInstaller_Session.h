// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION_H
#define SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION_H

namespace scapix::java_api {

namespace android::content { class IntentSender; }
namespace java::io { class InputStream; }
namespace java::io { class OutputStream; }
namespace java::lang { class String; }

namespace android::content::pm {

class PackageInstaller_Session : public object_base<SCAPIX_META_STRING("android/content/pm/PackageInstaller$Session"),
	java::lang::Object,
	java::io::Closeable>
{
public:

	void setStagingProgress(jfloat progress);
	ref<java::io::OutputStream> openWrite(ref<java::lang::String> name, jlong offsetBytes, jlong p3);
	void fsync(ref<java::io::OutputStream> out);
	ref<link::java::array<java::lang::String>> getNames();
	ref<java::io::InputStream> openRead(ref<java::lang::String> name);
	void removeSplit(ref<java::lang::String> splitName);
	void commit(ref<android::content::IntentSender> statusReceiver);
	void transfer(ref<java::lang::String> packageName);
	void close();
	void abandon();

protected:

	PackageInstaller_Session(handle_type h) : base_(h) {}

};

} // namespace android::content::pm
} // namespace scapix::java_api

#include <scapix/java_api/android/content/IntentSender.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content::pm {

inline void PackageInstaller_Session::setStagingProgress(jfloat progress) { return call_method<SCAPIX_META_STRING("setStagingProgress"), void>(progress); }
inline ref<java::io::OutputStream> PackageInstaller_Session::openWrite(ref<java::lang::String> name, jlong offsetBytes, jlong p3) { return call_method<SCAPIX_META_STRING("openWrite"), ref<java::io::OutputStream>>(name, offsetBytes, p3); }
inline void PackageInstaller_Session::fsync(ref<java::io::OutputStream> out) { return call_method<SCAPIX_META_STRING("fsync"), void>(out); }
inline ref<link::java::array<java::lang::String>> PackageInstaller_Session::getNames() { return call_method<SCAPIX_META_STRING("getNames"), ref<link::java::array<java::lang::String>>>(); }
inline ref<java::io::InputStream> PackageInstaller_Session::openRead(ref<java::lang::String> name) { return call_method<SCAPIX_META_STRING("openRead"), ref<java::io::InputStream>>(name); }
inline void PackageInstaller_Session::removeSplit(ref<java::lang::String> splitName) { return call_method<SCAPIX_META_STRING("removeSplit"), void>(splitName); }
inline void PackageInstaller_Session::commit(ref<android::content::IntentSender> statusReceiver) { return call_method<SCAPIX_META_STRING("commit"), void>(statusReceiver); }
inline void PackageInstaller_Session::transfer(ref<java::lang::String> packageName) { return call_method<SCAPIX_META_STRING("transfer"), void>(packageName); }
inline void PackageInstaller_Session::close() { return call_method<SCAPIX_META_STRING("close"), void>(); }
inline void PackageInstaller_Session::abandon() { return call_method<SCAPIX_META_STRING("abandon"), void>(); }

} // namespace android::content::pm
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION_H
