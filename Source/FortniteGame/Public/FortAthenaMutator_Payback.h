#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "OnPaybackKillDelegate.h"
#include "PaybackMutatorEffectData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Payback.generated.h"

class AFortPlayerStateAthena;
class APlayerState;
class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Payback : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> PaybackMarkerEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEffectLastsUntilRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetByCallerDurationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShowPaybackHUDTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bNewEffectPerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExtraPointsPerPaybackKill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPaybackKill OnPaybackKill;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FPaybackMutatorEffectData> PaybackEffectDataArray;
    
public:
    AFortAthenaMutator_Payback();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDeadStateChanged(AFortPlayerStateAthena* VictimPlayerState, bool bDead);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_OnPaybackKill(AFortPlayerStateAthena* KillerPlayerState, AFortPlayerStateAthena* VictimPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkedForPaybackByTeam(const APlayerState* PlayerState, const uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkedForPayback(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeamPlayersMarkedForPayback(TArray<AFortPlayerStateAthena*>& OutPlayerStates, const uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayersToPayBack(TArray<AFortPlayerStateAthena*>& OutPlayerStatesToPayBack, const APlayerState* AttackerPlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPaybackTimeRemaining(const APlayerState* KillerPlayerState, const uint8 VictimTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPaybackTeams(TArray<uint8>& OutTeams, const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHighestPaybackTimeRemaining(const APlayerState* KillerPlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPlayersMarkedForPayback(TArray<AFortPlayerStateAthena*>& OutPlayerStates) const;
    
};

