#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EFortSafeZoneState.h"
#include "FortAthenaMutator_SpectateBeforeRespawn.h"
#include "RespawnAndSpectateSelectAvailableOptionsChangedDelegate.h"
#include "RespawnAndSpectateSelectPlayerRespawnedDelegate.h"
#include "RespawnAndSpectateSelectRespawnBecameAvailableDelegate.h"
#include "RespawnAndSpectateSelectSetSpectateIdDelegate.h"
#include "RespawnAndSpectateSelectSetVisibilityDelegate.h"
#include "RespawnAndSpectateTargetData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_RespawnAndSpectateSelect.generated.h"

class AActor;
class UFortCameraMode;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_RespawnAndSpectateSelect : public AFortAthenaMutator_SpectateBeforeRespawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShouldBeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bCanPlayerSelectRespawnTargetBeforeTheyCanRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowRespawnOnLivingTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowRespawnOnLivingSquadmates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bCreateDefaultSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShowDefaultSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultSpawnLocationCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultRespawnLabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultRespawnTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RandomRespawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnBaseRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RandomRespawnRotationDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ForceRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DeadTargetAvailabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayPriority_Teammate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraModeOverrideForNonPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RespawnTargetDataArray, meta=(AllowPrivateAccess=true))
    TArray<FRespawnAndSpectateTargetData> RespawnTargetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAreAllRespawnTargetsAvailableToAllPlayersCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ManagerObject, meta=(AllowPrivateAccess=true))
    UObject* ManagerObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnAndSpectateSelectSetVisibility RespawnAndSpectateSelectSetVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnAndSpectateSelectSetSpectateId RespawnAndSpectateSelectSetSpectateId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnAndSpectateSelectAvailableOptionsChanged RespawnAndSpectateSelectAvailableOptionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnAndSpectateSelectPlayerRespawned RespawnAndSpectateSelectPlayerRespawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRespawnAndSpectateSelectRespawnBecameAvailable RespawnAndSpectateSelectRespawnBecameAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenFadeOutDeathCamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenFadeInSpectateCamTime;
    
public:
    AFortAthenaMutator_RespawnAndSpectateSelect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSafezoneStateChanged(EFortSafeZoneState InSafeZoneState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RespawnTargetDataArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ManagerObject();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanPlayerSelectRespawnTargetBeforeTheyCanRespawn() const;
    
};

