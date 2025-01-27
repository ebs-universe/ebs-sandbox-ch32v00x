

#include <time/time.h>
#include <time/sync.h>


void setup_time_sync(void) {
    // TODO Move this into libtime
    #if APP_ENABLE_RTC
        tm_sync_current_from_rtc();
    #endif
    tm_sync_request_host();
}
