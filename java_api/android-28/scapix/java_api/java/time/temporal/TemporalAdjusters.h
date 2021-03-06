// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALADJUSTERS_H
#define SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALADJUSTERS_H

namespace scapix::java_api {

namespace java::time { class DayOfWeek; }
namespace java::time::temporal { class TemporalAdjuster; }
namespace java::util::function { class UnaryOperator; }

namespace java::time::temporal {

class TemporalAdjusters : public object_base<SCAPIX_META_STRING("java/time/temporal/TemporalAdjusters"),
	java::lang::Object>
{
public:

	static ref<java::time::temporal::TemporalAdjuster> ofDateAdjuster(ref<java::util::function::UnaryOperator> dateBasedAdjuster);
	static ref<java::time::temporal::TemporalAdjuster> firstDayOfMonth();
	static ref<java::time::temporal::TemporalAdjuster> lastDayOfMonth();
	static ref<java::time::temporal::TemporalAdjuster> firstDayOfNextMonth();
	static ref<java::time::temporal::TemporalAdjuster> firstDayOfYear();
	static ref<java::time::temporal::TemporalAdjuster> lastDayOfYear();
	static ref<java::time::temporal::TemporalAdjuster> firstDayOfNextYear();
	static ref<java::time::temporal::TemporalAdjuster> firstInMonth(ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> lastInMonth(ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> dayOfWeekInMonth(jint ordinal, ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> next(ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> nextOrSame(ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> previous(ref<java::time::DayOfWeek> dayOfWeek);
	static ref<java::time::temporal::TemporalAdjuster> previousOrSame(ref<java::time::DayOfWeek> dayOfWeek);

protected:

	TemporalAdjusters(handle_type h) : base_(h) {}

};

} // namespace java::time::temporal
} // namespace scapix::java_api

#include <scapix/java_api/java/time/DayOfWeek.h>
#include <scapix/java_api/java/time/temporal/TemporalAdjuster.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>

namespace scapix::java_api {
namespace java::time::temporal {

inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::ofDateAdjuster(ref<java::util::function::UnaryOperator> dateBasedAdjuster) { return call_static_method<SCAPIX_META_STRING("ofDateAdjuster"), ref<java::time::temporal::TemporalAdjuster>>(dateBasedAdjuster); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::firstDayOfMonth() { return call_static_method<SCAPIX_META_STRING("firstDayOfMonth"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::lastDayOfMonth() { return call_static_method<SCAPIX_META_STRING("lastDayOfMonth"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::firstDayOfNextMonth() { return call_static_method<SCAPIX_META_STRING("firstDayOfNextMonth"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::firstDayOfYear() { return call_static_method<SCAPIX_META_STRING("firstDayOfYear"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::lastDayOfYear() { return call_static_method<SCAPIX_META_STRING("lastDayOfYear"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::firstDayOfNextYear() { return call_static_method<SCAPIX_META_STRING("firstDayOfNextYear"), ref<java::time::temporal::TemporalAdjuster>>(); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::firstInMonth(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("firstInMonth"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::lastInMonth(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("lastInMonth"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::dayOfWeekInMonth(jint ordinal, ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("dayOfWeekInMonth"), ref<java::time::temporal::TemporalAdjuster>>(ordinal, dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::next(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("next"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::nextOrSame(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("nextOrSame"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::previous(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("previous"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }
inline ref<java::time::temporal::TemporalAdjuster> TemporalAdjusters::previousOrSame(ref<java::time::DayOfWeek> dayOfWeek) { return call_static_method<SCAPIX_META_STRING("previousOrSame"), ref<java::time::temporal::TemporalAdjuster>>(dayOfWeek); }

} // namespace java::time::temporal
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TIME_TEMPORAL_TEMPORALADJUSTERS_H
