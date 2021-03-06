// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/util/HashSet.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_UTIL_LINKEDHASHSET_H
#define SCAPIX_JAVA_UTIL_LINKEDHASHSET_H

namespace scapix::java_api {

namespace java::util { class Collection; }
namespace java::util { class Spliterator; }

namespace java::util {

class LinkedHashSet : public object_base<SCAPIX_META_STRING("java/util/LinkedHashSet"),
	java::util::HashSet,
	java::util::Set,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static ref<LinkedHashSet> new_object(jint initialCapacity, jfloat loadFactor);
	static ref<LinkedHashSet> new_object(jint initialCapacity);
	static ref<LinkedHashSet> new_object();
	static ref<LinkedHashSet> new_object(ref<java::util::Collection> c);
	ref<java::util::Spliterator> spliterator();

protected:

	LinkedHashSet(handle_type h) : base_(h) {}

};

} // namespace java::util
} // namespace scapix::java_api

#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Spliterator.h>

namespace scapix::java_api {
namespace java::util {

inline ref<LinkedHashSet> LinkedHashSet::new_object(jint initialCapacity, jfloat loadFactor) { return base_::new_object(initialCapacity, loadFactor); }
inline ref<LinkedHashSet> LinkedHashSet::new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
inline ref<LinkedHashSet> LinkedHashSet::new_object() { return base_::new_object(); }
inline ref<LinkedHashSet> LinkedHashSet::new_object(ref<java::util::Collection> c) { return base_::new_object(c); }
inline ref<java::util::Spliterator> LinkedHashSet::spliterator() { return call_method<SCAPIX_META_STRING("spliterator"), ref<java::util::Spliterator>>(); }

} // namespace java::util
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_LINKEDHASHSET_H
