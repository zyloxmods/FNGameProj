#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "MashWidgetBase.generated.h"

class AFortAthenaMutator_Mash;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew)
class UMashWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CachedLocalPlayerState;
    
public:
    UMashWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamScoreMultiplierChanged(uint8 TeamScoreMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadScoreUpdated(int32 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoreUpdated(const int32 Index, const FString& PlayerName, int32 Score, int32 StreakLevel, int32 MaxStreakLevel, float StreakMultiplier, bool IsLocalPlayer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDataChanged();
    
};

