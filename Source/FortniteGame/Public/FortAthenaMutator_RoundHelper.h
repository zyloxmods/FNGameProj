#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "POIRoundInfo.h"
#include "FortAthenaMutator_RoundHelper.generated.h"

class AFortPlayerPawn;
class AFortPlayerStart;

UCLASS(Blueprintable)
class AFortAthenaMutator_RoundHelper : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartingTeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPOIRoundInfo> RoundInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPOIRoundInfo> GeneratedRoundInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStart*> UsedSpawnSlots;
    
public:
    AFortAthenaMutator_RoundHelper();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartNextRound();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentRound(int32 NewRound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInitialTeleportComplete(AFortPlayerPawn* PlayerPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfRounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRound() const;
    
};

