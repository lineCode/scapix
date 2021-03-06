// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDate.h>
#include <scapix/java_api/java/time/temporal/Temporal.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_TIME_CHRONO_THAIBUDDHISTDATE_H
#define SCAPIX_JAVA_TIME_CHRONO_THAIBUDDHISTDATE_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::time { class Clock; }
namespace java::time { class LocalTime; }
namespace java::time { class ZoneId; }
namespace java::time::chrono { class ChronoLocalDateTime; }
namespace java::time::chrono { class ChronoPeriod; }
namespace java::time::chrono { class ThaiBuddhistChronology; }
namespace java::time::chrono { class ThaiBuddhistEra; }
namespace java::time::temporal { class TemporalAccessor; }
namespace java::time::temporal { class TemporalAmount; }
namespace java::time::temporal { class TemporalField; }
namespace java::time::temporal { class TemporalUnit; }
namespace java::time::temporal { class ValueRange; }

namespace java::time::chrono {

class ThaiBuddhistDate : public object_base<SCAPIX_META_STRING("java/time/chrono/ThaiBuddhistDate"),
	java::lang::Object,
	java::time::chrono::ChronoLocalDate,
	java::time::temporal::Temporal,
	java::time::temporal::TemporalAdjuster,
	java::io::Serializable>
{
public:

	static ref<java::time::chrono::ThaiBuddhistDate> now();
	static ref<java::time::chrono::ThaiBuddhistDate> now(ref<java::time::ZoneId> zone);
	static ref<java::time::chrono::ThaiBuddhistDate> now(ref<java::time::Clock> clock);
	static ref<java::time::chrono::ThaiBuddhistDate> of(jint prolepticYear, jint month, jint dayOfMonth);
	static ref<java::time::chrono::ThaiBuddhistDate> from(ref<java::time::temporal::TemporalAccessor> temporal);
	ref<java::time::chrono::ThaiBuddhistChronology> getChronology();
	ref<java::time::chrono::ThaiBuddhistEra> getEra();
	jint lengthOfMonth();
	ref<java::time::temporal::ValueRange> range(ref<java::time::temporal::TemporalField> field);
	jlong getLong(ref<java::time::temporal::TemporalField> field);
	ref<java::time::chrono::ThaiBuddhistDate> with(ref<java::time::temporal::TemporalField> field, jlong newValue);
	ref<java::time::chrono::ThaiBuddhistDate> with(ref<java::time::temporal::TemporalAdjuster> adjuster);
	ref<java::time::chrono::ThaiBuddhistDate> plus(ref<java::time::temporal::TemporalAmount> amount);
	ref<java::time::chrono::ThaiBuddhistDate> minus(ref<java::time::temporal::TemporalAmount> amount);
	ref<java::time::chrono::ThaiBuddhistDate> plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2);
	ref<java::time::chrono::ThaiBuddhistDate> minus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2);
	ref<java::time::chrono::ChronoLocalDateTime> atTime(ref<java::time::LocalTime> localTime);
	ref<java::time::chrono::ChronoPeriod> until(ref<java::time::chrono::ChronoLocalDate> endDate);
	jlong toEpochDay();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	jlong until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit);
	ref<java::lang::String> toString();

protected:

	ThaiBuddhistDate(handle_type h) : base_(h) {}

};

} // namespace java::time::chrono
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Clock.h>
#include <scapix/java_api/java/time/LocalTime.h>
#include <scapix/java_api/java/time/ZoneId.h>
#include <scapix/java_api/java/time/chrono/ChronoLocalDateTime.h>
#include <scapix/java_api/java/time/chrono/ChronoPeriod.h>
#include <scapix/java_api/java/time/chrono/ThaiBuddhistChronology.h>
#include <scapix/java_api/java/time/chrono/ThaiBuddhistEra.h>
#include <scapix/java_api/java/time/temporal/TemporalAccessor.h>
#include <scapix/java_api/java/time/temporal/TemporalAmount.h>
#include <scapix/java_api/java/time/temporal/TemporalField.h>
#include <scapix/java_api/java/time/temporal/TemporalUnit.h>
#include <scapix/java_api/java/time/temporal/ValueRange.h>

namespace scapix::java_api {
namespace java::time::chrono {

inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::now() { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::chrono::ThaiBuddhistDate>>(); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::now(ref<java::time::ZoneId> zone) { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::chrono::ThaiBuddhistDate>>(zone); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::now(ref<java::time::Clock> clock) { return call_static_method<SCAPIX_META_STRING("now"), ref<java::time::chrono::ThaiBuddhistDate>>(clock); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::of(jint prolepticYear, jint month, jint dayOfMonth) { return call_static_method<SCAPIX_META_STRING("of"), ref<java::time::chrono::ThaiBuddhistDate>>(prolepticYear, month, dayOfMonth); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::from(ref<java::time::temporal::TemporalAccessor> temporal) { return call_static_method<SCAPIX_META_STRING("from"), ref<java::time::chrono::ThaiBuddhistDate>>(temporal); }
inline ref<java::time::chrono::ThaiBuddhistChronology> ThaiBuddhistDate::getChronology() { return call_method<SCAPIX_META_STRING("getChronology"), ref<java::time::chrono::ThaiBuddhistChronology>>(); }
inline ref<java::time::chrono::ThaiBuddhistEra> ThaiBuddhistDate::getEra() { return call_method<SCAPIX_META_STRING("getEra"), ref<java::time::chrono::ThaiBuddhistEra>>(); }
inline jint ThaiBuddhistDate::lengthOfMonth() { return call_method<SCAPIX_META_STRING("lengthOfMonth"), jint>(); }
inline ref<java::time::temporal::ValueRange> ThaiBuddhistDate::range(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("range"), ref<java::time::temporal::ValueRange>>(field); }
inline jlong ThaiBuddhistDate::getLong(ref<java::time::temporal::TemporalField> field) { return call_method<SCAPIX_META_STRING("getLong"), jlong>(field); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::with(ref<java::time::temporal::TemporalField> field, jlong newValue) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::chrono::ThaiBuddhistDate>>(field, newValue); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::with(ref<java::time::temporal::TemporalAdjuster> adjuster) { return call_method<SCAPIX_META_STRING("with"), ref<java::time::chrono::ThaiBuddhistDate>>(adjuster); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::plus(ref<java::time::temporal::TemporalAmount> amount) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::chrono::ThaiBuddhistDate>>(amount); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::minus(ref<java::time::temporal::TemporalAmount> amount) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::chrono::ThaiBuddhistDate>>(amount); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::plus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2) { return call_method<SCAPIX_META_STRING("plus"), ref<java::time::chrono::ThaiBuddhistDate>>(amountToAdd, p2); }
inline ref<java::time::chrono::ThaiBuddhistDate> ThaiBuddhistDate::minus(jlong amountToAdd, ref<java::time::temporal::TemporalUnit> p2) { return call_method<SCAPIX_META_STRING("minus"), ref<java::time::chrono::ThaiBuddhistDate>>(amountToAdd, p2); }
inline ref<java::time::chrono::ChronoLocalDateTime> ThaiBuddhistDate::atTime(ref<java::time::LocalTime> localTime) { return call_method<SCAPIX_META_STRING("atTime"), ref<java::time::chrono::ChronoLocalDateTime>>(localTime); }
inline ref<java::time::chrono::ChronoPeriod> ThaiBuddhistDate::until(ref<java::time::chrono::ChronoLocalDate> endDate) { return call_method<SCAPIX_META_STRING("until"), ref<java::time::chrono::ChronoPeriod>>(endDate); }
inline jlong ThaiBuddhistDate::toEpochDay() { return call_method<SCAPIX_META_STRING("toEpochDay"), jlong>(); }
inline jboolean ThaiBuddhistDate::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ThaiBuddhistDate::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jlong ThaiBuddhistDate::until(ref<java::time::temporal::Temporal> endExclusive, ref<java::time::temporal::TemporalUnit> unit) { return call_method<SCAPIX_META_STRING("until"), jlong>(endExclusive, unit); }
inline ref<java::lang::String> ThaiBuddhistDate::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::time::chrono
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_CHRONO_THAIBUDDHISTDATE_H
