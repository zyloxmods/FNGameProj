#pragma once
#include "CoreMinimal.h"
#include "AthenaBroadcastKillFeedEntryInfo.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastKillFeedItemBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UAthenaBroadcastKillFeedItemBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaBroadcastKillFeedItemBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKillFeedInfo(const FAthenaBroadcastKillFeedEntryInfo& KillFeedEntryInfo);
    
};

