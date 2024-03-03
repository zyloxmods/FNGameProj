#pragma once
#include "CoreMinimal.h"
#include "AthenaBroadcastKillFeedEntryInfo.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastKillFeedBase.generated.h"

class UFortDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastKillFeedBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* KillFeedEntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToShowEntry;
    
public:
    UAthenaBroadcastKillFeedBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleShowKillFeed(bool bShowKillFeed);
    
    UFUNCTION(BlueprintCallable)
    void OnTimelineScrubbed();
    
    UFUNCTION(BlueprintCallable)
    void AddKillFeedEntry(const FAthenaBroadcastKillFeedEntryInfo& KillFeedEntryInfo);
    
};

