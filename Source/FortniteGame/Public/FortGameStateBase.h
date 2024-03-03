#pragma once
#include "CoreMinimal.h"
#include "PlayspaceGameState.h"
#include "FortGameStateBase.generated.h"

class AFortMissionStormShield;
class AFortTimeOfDayManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameStateBase : public APlayspaceGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimeOfDayManager, meta=(AllowPrivateAccess=true))
    AFortTimeOfDayManager* FortTimeOfDayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StormShield, meta=(AllowPrivateAccess=true))
    AFortMissionStormShield* StormShield;
    
public:
    AFortGameStateBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOfDayManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StormShield();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    AFortTimeOfDayManager* GetTimeOfDayManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMissionStormShield* GetStormShield() const;
    
};

