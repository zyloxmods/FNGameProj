#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortGameStateZone.h"
#include "OnFinalizationFOBTimerExpiredDelegate.h"
#include "OnHandleMatchLevelChangedDelegate.h"
#include "FortGameStatePvP.generated.h"

class ABuildingCapturePointActor;
class ABuildingItemCollectorActor;
class UCurveFloat;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStatePvP : public AFortGameStateZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundTimeAccumulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RoundTimeCriticalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 RoundTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StalemateTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StalemateTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 StalemateTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RestartTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 FOBFinalizationTimeRemaining;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalizationFOBTimerExpired OnFinalizationFOBTimerExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> RoundTimeExpiringSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> StalemateTimeExpiringSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ABuildingCapturePointActor*> CapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemCollector, meta=(AllowPrivateAccess=true))
    ABuildingItemCollectorActor* ItemCollector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StartMatchDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGateCraftingOnTeamLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MatchLevelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MatchLevel, meta=(AllowPrivateAccess=true))
    int32 MatchLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleMatchLevelChanged OnHandleMatchLevelChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalHomebaseRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AverageHomebaseRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExperimentalCraftingFeature;
    
public:
    AFortGameStatePvP();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMatchLevel(int32 InMatchLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StalemateTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundTimeRemaining();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MatchLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemCollector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExperimentalCraftingFeatureActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalHomebaseRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStartMatchDelayTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundTimeAccumulated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMatchLevel() const;
    
    UFUNCTION(BlueprintCallable)
    ABuildingItemCollectorActor* GetItemCollector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFOBFinalizationTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAverageHomebaseRating() const;
    
};

