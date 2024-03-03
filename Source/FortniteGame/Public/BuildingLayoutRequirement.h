#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingPlayerPrimitivePreview.h"
#include "EFortResourceType.h"
#include "ELayoutRequirementStatus.h"
#include "OnLayoutSatisfiedDelegate.h"
#include "Templates/SubclassOf.h"
#include "BuildingLayoutRequirement.generated.h"

class AActor;
class ABuildingSMActor;
class AController;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABuildingLayoutRequirement : public ABuildingPlayerPrimitivePreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayoutSatisfied OnLayoutSatisfied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayoutSatisfied OnLayoutUnSatisfied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> LayoutRequirementSMActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIgnoreResourceTypeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bMakeSatisfyingActorIndestructibleWhileRequirementExists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedToInitializeRequirementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RequirementStatus, meta=(AllowPrivateAccess=true))
    bool bRequirementSatisfied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RequirementStatus, meta=(AllowPrivateAccess=true))
    ELayoutRequirementStatus RequirementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFortResourceType OverrideResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowAnyPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowOccupantPatternEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LayoutDisplayMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LayoutDisplayMID;
    
public:
    ABuildingLayoutRequirement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsEditingOfOccupant() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRequirementVisible(bool bVisible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRequiredResourceType(EFortResourceType DesiredResourceType);
    
    UFUNCTION(BlueprintCallable)
    void OnRequirementSatisfyingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RequirementStatus();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateRequirement();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateRequirement(bool bMakeVisible);
    
};

