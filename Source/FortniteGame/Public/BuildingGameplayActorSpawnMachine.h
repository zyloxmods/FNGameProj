#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "ESpawnMachineState.h"
#include "ESpawnMachineSubTextState.h"
#include "BuildingGameplayActorSpawnMachine.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class AFortPlayerStart;
class USoundCue;

UCLASS(Blueprintable)
class ABuildingGameplayActorSpawnMachine : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStart* ResurrectLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerIdsForResurrection;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerControllerAthena> InstigatorPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ActiveTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpawnMachineState, meta=(AllowPrivateAccess=true))
    ESpawnMachineState SpawnMachineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResurrectionStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResurrectionNextPlayerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* InteractSoundCueLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CooldownLengthRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractNoCardsSubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractNoVanLockSubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractSubTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpawnMachineSubTextState SpawnMachineSubTextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HandleIntoGameState;
    
public:
    ABuildingGameplayActorSpawnMachine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpawnMachineState(ESpawnMachineState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RebootPlayersInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnMachineStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResurrectionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResurrectionCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnMachineState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerPawnResurrected(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterruptLongUse(AFortPlayerControllerAthena* AthenaPC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginLongUse(AFortPlayerControllerAthena* AthenaPC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpawnMachineState GetSpawnMachineState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownLength() const;
    
};

