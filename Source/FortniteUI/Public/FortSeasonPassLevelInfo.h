#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAthenaSeasonRewardTrack.h"
#include "FortSeasonPassLevelInfo.generated.h"

class AFortPlayerController;
class UAthenaSeasonItemDefinition;
class UFortItem;

UCLASS(Blueprintable)
class UFortSeasonPassLevelInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FortPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> FreeRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> PaidRewards;
    
public:
    UFortSeasonPassLevelInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaidUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaidClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeClaimed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonPassMaxLevel() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UFortItem*> GetRewardItems(EAthenaSeasonRewardTrack Track);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRewardItems(EAthenaSeasonRewardTrack Track) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsChaseReward(EAthenaSeasonRewardTrack Track) const;
    
};

