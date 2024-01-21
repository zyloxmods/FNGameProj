#pragma once
#include "CoreMinimal.h"
#include "FortUIStateWidget_NUI.h"
#include "CampaignHUDBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCampaignHUDBase : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
    UCampaignHUDBase();
};

