#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInteractionBeingAttempted.h"
#include "ETouchInteractMode.h"
#include "FortControllerComponent.h"
#include "TInteractionType.h"
#include "FortControllerComponent_Interaction.generated.h"

class AActor;
class UAudioComponent;
class UFortInteractContextInfo;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_Interaction : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorPendingNonInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearActorPendingNonInteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* LongInteractAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* PossibleInteractContextInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* InteractResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractActor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractTraceStartsAtClosestPointDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractTracesBehindMyFortPawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractTracesBehindMyFortPawnOtherThanBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotFilterBuildingActorsThatAreAttachedToPawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterInteractTracesBehindMyFortPawnOnlyWithMultipleResults;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractTracesWithStartPenetratingBlock;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReticleAimingIfInitialBlockingInteractTraceBehindMyFortPawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractTracesCapsuleReductionPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MobileUpdateCachedInteractActorsCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileUpdateCachedInteractActorsCooldownLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTapInteractEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETouchInteractMode TouchInteractMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRetryUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUsePlayerInsteadOfCameraForTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldBlockInteractionsForAllVehiclePassengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortInteractContextInfo* AutoDoorInteractResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CurrentlyHighlightedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> InteractionTagHistory;
    
public:
    UFortControllerComponent_Interaction();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyStartLongUse(AActor* ReceivingActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyEndLongUse(AActor* ReceivingActor);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptInteract(AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, TInteractionType InteractType, UObject* OptionalObjectData, EInteractionBeingAttempted InteractionBeingAttempted, int32 RequestID);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortInteractContextInfo* K2_GetInteractResponse();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractActor() const;
    
    UFUNCTION(BlueprintCallable)
    void FixupInteractionWidgetsOnUnzoom();
    
};

