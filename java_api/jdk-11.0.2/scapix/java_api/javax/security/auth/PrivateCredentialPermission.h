// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/Permission.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_H
#define SCAPIX_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_H

namespace scapix::java_api {

namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::security { class PermissionCollection; }

namespace javax::security::auth {

class PrivateCredentialPermission : public object_base<SCAPIX_META_STRING("javax/security/auth/PrivateCredentialPermission"),
	java::security::Permission>
{
public:

	static ref<PrivateCredentialPermission> new_object(ref<java::lang::String> name, ref<java::lang::String> actions);
	ref<java::lang::String> getCredentialClass();
	ref<link::java::array<link::java::array<java::lang::String>>> getPrincipals();
	jboolean implies(ref<java::security::Permission> p);
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> getActions();
	ref<java::security::PermissionCollection> newPermissionCollection();

protected:

	PrivateCredentialPermission(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PermissionCollection.h>

namespace scapix::java_api {
namespace javax::security::auth {

inline ref<PrivateCredentialPermission> PrivateCredentialPermission::new_object(ref<java::lang::String> name, ref<java::lang::String> actions) { return base_::new_object(name, actions); }
inline ref<java::lang::String> PrivateCredentialPermission::getCredentialClass() { return call_method<SCAPIX_META_STRING("getCredentialClass"), ref<java::lang::String>>(); }
inline ref<link::java::array<link::java::array<java::lang::String>>> PrivateCredentialPermission::getPrincipals() { return call_method<SCAPIX_META_STRING("getPrincipals"), ref<link::java::array<link::java::array<java::lang::String>>>>(); }
inline jboolean PrivateCredentialPermission::implies(ref<java::security::Permission> p) { return call_method<SCAPIX_META_STRING("implies"), jboolean>(p); }
inline jboolean PrivateCredentialPermission::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint PrivateCredentialPermission::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> PrivateCredentialPermission::getActions() { return call_method<SCAPIX_META_STRING("getActions"), ref<java::lang::String>>(); }
inline ref<java::security::PermissionCollection> PrivateCredentialPermission::newPermissionCollection() { return call_method<SCAPIX_META_STRING("newPermissionCollection"), ref<java::security::PermissionCollection>>(); }

} // namespace javax::security::auth
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_PRIVATECREDENTIALPERMISSION_H
