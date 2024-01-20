#include "SidecarSys.h"

USidecarSys::USidecarSys() {
    this->DssDownloadUrl = TEXT("/api/dss/v1/`app_name/`file_path");
    this->DssCheckoutUrl = TEXT("/api/dss/v1/`app_name/`file_path/checkout?pid=`pid&dl=`dl");
    this->DssUploadUrl = TEXT("/api/dss/v1/`app_name/`file_path?autolock=`autolock");
    this->DssRestoreUrl = TEXT("/api/dss/v1/`app_name/`file_path/restore?from=`from");
    this->DssCheckinUrl = TEXT("/api/dss/v1/`app_name/`file_path/checkin");
    this->McpDispatchUrl = TEXT("/api/mcp/v1/pids/`pid/dispatch");
    this->McpDispatchBatchUrl = TEXT("/api/mcp/v1/pids/`pid/dispatch/batch");
    this->McpProxyUrl = TEXT("/api/mcp/v1/pids/`pid/proxy");
}

