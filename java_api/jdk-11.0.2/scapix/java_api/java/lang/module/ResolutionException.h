// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_LANG_MODULE_RESOLUTIONEXCEPTION_H
#define SCAPIX_JAVA_LANG_MODULE_RESOLUTIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }

namespace java::lang::module {

class ResolutionException : public object_base<SCAPIX_META_STRING("java/lang/module/ResolutionException"),
	java::lang::RuntimeException>
{
public:

	static ref<ResolutionException> new_object();
	static ref<ResolutionException> new_object(ref<java::lang::String> msg);
	static ref<ResolutionException> new_object(ref<java::lang::Throwable> cause);
	static ref<ResolutionException> new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause);

protected:

	ResolutionException(handle_type h) : base_(h) {}

};

} // namespace java::lang::module
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>

namespace scapix::java_api {
namespace java::lang::module {

inline ref<ResolutionException> ResolutionException::new_object() { return base_::new_object(); }
inline ref<ResolutionException> ResolutionException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }
inline ref<ResolutionException> ResolutionException::new_object(ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
inline ref<ResolutionException> ResolutionException::new_object(ref<java::lang::String> msg, ref<java::lang::Throwable> cause) { return base_::new_object(msg, cause); }

} // namespace java::lang::module
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_LANG_MODULE_RESOLUTIONEXCEPTION_H
