#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "BuildingGameplayActor.h"
#include "OnFOBCoreDamagedDelegate.h"
#include "OnFOBCoreOutOfHealthDelegate.h"
#include "OnFOBCoreTargetableChangedDelegate.h"
#include "OnFOBCoreVulnerableChangedDelegate.h"
#include "BuildingFOBCoreActor.generated.h"

class AActor;
class ABuildingFOBCoreSpawnPad;
class ABuildingSMActor;
class UBoxComponent;
class UFortFOBCoreDecoItemDefinition;
class UParticleSystem;
class USoundBase;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ABuildingFOBCoreActor : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SimpleDeathParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> SimpleDeathSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SimpleBoundsBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TouchBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ContainmentVolumeTouchBoxOffsetExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRegisterAsGlobalGameplayEventListener: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConformTouchBoxToFOBContainmentBox: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bActive, meta=(AllowPrivateAccess=true))
    uint8 bActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bTargetable, meta=(AllowPrivateAccess=true))
    uint8 bTargetable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bVulnerable, meta=(AllowPrivateAccess=true))
    uint8 bVulnerable: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoreTargetableChanged OnFOBCoreTargetableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoreVulnerableChanged OnFOBCoreVulnerableChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwnerNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortFOBCoreDecoItemDefinition* SpawnedFromItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFOBCoreSpawnPad* SpawnedFromSpawnPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox FOBBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox FOBStructuralBounds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoreDamaged OnFOBCoreDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOBCoreOutOfHealth OnFOBCoreOutOfHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowTargetableHUDIndicator: 1;
    
public:
    ABuildingFOBCoreActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVulnerableStatusChanged(bool bNewTargetableStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetableStatusChanged(bool bNewTargetableStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bVulnerable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bTargetable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActiveStatusChanged(bool bNewActiveStatus);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MarkVulnerable();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MarkTargetable();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsActorWithinFOBBounds(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSimpleDeathFXTransform() const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetFOBBoundsCenterAndExtents(FVector& OutCenter, FVector& OutExtents) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetFOBBoundsBoxOverlappedActors(TArray<ABuildingSMActor*>& OverlappedActors, bool bSortByDistanceFromCore) const;
    
};

