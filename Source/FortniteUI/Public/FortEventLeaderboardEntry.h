#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortEventLeaderboardEntry.generated.h"

class UFortEventLeaderboardEntryData;
class UFortFlagImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLeaderboardEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortFlagImage* FlagImage;
    
public:
    UFortEventLeaderboardEntry();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerFlag(TSoftObjectPtr<UTexture2D> PlayerFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeammateDisplayNameAdded(const UFortEventLeaderboardEntryData* LeaderboardEntryData);
    
    
    // Fix for true pure virtual functions not being implemented
};

