#pragma once
#include "CoreMinimal.h"
#include "OnNewClientAnnouncementOnClientDelegateDelegate.generated.h"

class AFortClientAnnouncement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewClientAnnouncementOnClientDelegate, AFortClientAnnouncement*, NewAnnouncement);

