#include "SidecarDss.h"

USidecarDss::USidecarDss() {
    this->DssDownloadUrl = TEXT("/api/dss/v1/`app_name/`file_path");
    this->DssCheckoutUrl = TEXT("/api/dss/v1/`app_name/`file_path/checkout?dl=`dl");
    this->DssUploadUrl = TEXT("/api/dss/v1/`app_name/`file_path?autolock=`autolock");
    this->DssRestoreUrl = TEXT("/api/dss/v1/`app_name/`file_path/restore?from=`from");
    this->DssCheckinUrl = TEXT("/api/dss/v1/`app_name/`file_path/checkin");
}

