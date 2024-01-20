#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortEventLeaderboardEntry.generated.h"

class UFortEventLeaderboardEntryData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLeaderboardEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UFortEventLeaderboardEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeammateDisplayNameAdded(const UFortEventLeaderboardEntryData* LeaderboardEntryData);
    
    
    // Fix for true pure virtual functions not being implemented
};

