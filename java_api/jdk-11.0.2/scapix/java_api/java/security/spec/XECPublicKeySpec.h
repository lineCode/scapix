// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_SECURITY_SPEC_XECPUBLICKEYSPEC_H
#define SCAPIX_JAVA_SECURITY_SPEC_XECPUBLICKEYSPEC_H

namespace scapix::java_api {

namespace java::math { class BigInteger; }
namespace java::security::spec { class AlgorithmParameterSpec; }

namespace java::security::spec {

class XECPublicKeySpec : public object_base<SCAPIX_META_STRING("java/security/spec/XECPublicKeySpec"),
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static ref<XECPublicKeySpec> new_object(ref<java::security::spec::AlgorithmParameterSpec> params, ref<java::math::BigInteger> u);
	ref<java::security::spec::AlgorithmParameterSpec> getParams();
	ref<java::math::BigInteger> getU();

protected:

	XECPublicKeySpec(handle_type h) : base_(h) {}

};

} // namespace java::security::spec
} // namespace scapix::java_api

#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

namespace scapix::java_api {
namespace java::security::spec {

inline ref<XECPublicKeySpec> XECPublicKeySpec::new_object(ref<java::security::spec::AlgorithmParameterSpec> params, ref<java::math::BigInteger> u) { return base_::new_object(params, u); }
inline ref<java::security::spec::AlgorithmParameterSpec> XECPublicKeySpec::getParams() { return call_method<SCAPIX_META_STRING("getParams"), ref<java::security::spec::AlgorithmParameterSpec>>(); }
inline ref<java::math::BigInteger> XECPublicKeySpec::getU() { return call_method<SCAPIX_META_STRING("getU"), ref<java::math::BigInteger>>(); }

} // namespace java::security::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SPEC_XECPUBLICKEYSPEC_H
