#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortUIScoreType.h"
#include "FortUIXpInfo.h"
#include "FortUIScoreReport.generated.h"

class AFortPlayerPawn;
class AFortPlayerState;
class UFortItem;
class UFortLocalPlayer;

UCLASS(Blueprintable, NotPlaceable)
class UFortUIScoreReport : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* LocalPlayer;
    
public:
    UFortUIScoreReport();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer(int32 ScoreReportIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXpToCompleteLevel(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetXpInfo(int32 ScoreReportIndex, FFortUIXpInfo& OutXpInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamScore(TEnumAsByte<EFortUIScoreType::Type> ScoreType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScoreReportIndicesByPlayerID(TArray<int32>& SortedScoreReportIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScoreReportIndex(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerScore(int32 ScoreReportIndex, TEnumAsByte<EFortUIScoreType::Type> ScoreType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerPlatform(int32 ScoreReportIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName(int32 ScoreReportIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerIDFromScoreReportIndex(int32 ScoreReportIndex, FUniqueNetIdRepl& OutUniqueNetIdRepl) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelProgress(int32 Level, int32 DisplayXp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultBonusScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultBonusMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerState* GetCurrentPlayerState(int32 ScoreReportIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetCurrentPlayerPawn(int32 ScoreReportIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadgeScore(UFortItem* BadgeItem) const;
    
};

