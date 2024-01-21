#pragma once
#include "CoreMinimal.h"
#include "FortClientAnnouncementData_Tutorial.h"
#include "UpdateTutorialAnnouncementDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTutorialAnnouncementDelegate, FFortClientAnnouncementData_Tutorial, TutorialData, bool, bShow);

