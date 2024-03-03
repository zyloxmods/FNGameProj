#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlayerHealthInfoComponent.h"
#include "OnBossPlayerChangedDelegate.h"
#include "CreativePlayerHealthInfoComponent.generated.h"

class AFortMinigame;
class AFortPlayerState;
class AFortPlayerStateAthena;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class UCreativePlayerHealthInfoComponent : public UFortPlayerHealthInfoComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossPlayerChanged OnBossPlayerChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigame* ControllingMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BossPlayerState, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* BossPlayerState;
    
public:
    UCreativePlayerHealthInfoComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BossPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigamePlayerLeftMinigame(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigamePlayerJoinedMinigame(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigamePlayerDeadStateChanged(AFortPlayerStateAthena* PlayerState, bool bIsDead);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigamePlayerClassApplied(AFortPlayerState* PlayerState, uint8 ClassSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigamePlayerChangedTeam(AFortPlayerState* PlayerState, uint8 TeamId, uint8 OldTeamId, bool bTeamChangedWithoutRespawn);
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
};

