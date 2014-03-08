#ifdef HAVE_DTRACE
// include the generated probes header and put markers in code
#include "include/ceph_probes.h"
#define TRACE(probe) probe
#define TRACE_ENABLED(probe) probe ## _ENABLED()
#else
// Wrap the probe to allow it to be removed when no systemtap available
#define TRACE(probe)
#define TRACE_ENABLED(probe) (0)
#endif
