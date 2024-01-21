#pragma once
#include "CoreMinimal.h"
#include "MashPlayerDataArray.h"
#include "LTMWidgetBase.h"
#include "MashWidgetBase.generated.h"

class AFortAthenaMutator_Mash;

UCLASS(Blueprintable, EditInlineNew)
class UMashWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMashPlayerDataArray CachedPlayerData;
    
public:
    UMashWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadScoreUpdated(float Score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerScoreUpdated(const int32 Index, const FString& PlayerName, float Score);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerScoresChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicScoreMultiplierUpdated(float ScoreMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDynamicScoreMultiplierChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstantScoreMultiplierUpdated(float ScoreMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConstantScoreMultiplierChanged();
    
};

