#pragma once
#include "CoreMinimal.h"
#include "EFortResourceType.h"
#include "EPlacementType.h"
#include "FortWeaponItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "FortDecoItemDefinition.generated.h"

class ABuildingActor;
class AFortDecoPreview;
class UBuildingEditModeMetadata;

UCLASS(Blueprintable)
class UFortDecoItemDefinition : public UFortWeaponItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplacesEditedSurfaces;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABuildingActor> BlueprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortDecoPreview> PlacementPreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBePlacedOnEnemyBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSnapSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAngleIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridPlacementOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPlacementType::Type> PlacementTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceIgnoreOverlapTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithVehicles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceIgnoreBuildingOverlaps: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithCriticalActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithStructuralGridActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithFortStaticMeshActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCollisionWithPlayers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableLocationLerpWhilePlacing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableRotationLerpWhilePlacing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableScaleLerpWhilePlacing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachWhenPlacing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlacementOnWorldGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlacementOnBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroySmallObjectsWhenPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetOwningPlayerForSpawnedDeco: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetSpawnedDecoOnPlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConsumeWhenPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCancelToolWhenPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCancelAbilityOnUnequip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresPlayerPlaceableAttachmentActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRelativeCameraRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowStairsWhenAttachingToFloors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSnapYawToHorizontalAxes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAnyFloorPlacement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresPermissionToEditWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoCreateAttachmentBuilding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortResourceType AutoCreateAttachmentBuildingResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBuildingEditModeMetadata>> AutoCreateAttachmentBuildingShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBuildingEditModeMetadata>> AllowedShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBuildingEditModeMetadata>> AllowedPlayerBuiltShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplacesDecoOnAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowPreviewOnPressHeld: 1;
    
public:
    UFortDecoItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseRelativeCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldSnapYawToHorizontalAxes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCollisionWithVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCollisionWithStructuralGridActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCollisionWithPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCollisionWithFortStaticMeshActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldIgnoreCollisionWithCriticalActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceIgnoreOverlapTest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceIgnoreBuildingOverlaps() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisableScaleLerpWhilePlacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisableRotationLerpWhilePlacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisableLocationLerpWhilePlacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDestroySmallObjectsWhenPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConsumeWhenPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCancelToolWhenPlaced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCancelAbilityOnUnequip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAttachWhenPlacing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowStairsWhenAttachingToFloors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowPlacementOnWorldGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowPlacementOnBuildings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowAnyFloorPlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresPlayerPlaceableAttachmentActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresPermissionToEditWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationAngleIncrement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPlacementType::Type> GetPlacementTypeOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortDecoPreview> GetPlacementPreviewClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlacementDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGridSnapSizeOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGridPlacementOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABuildingActor> GetBlueprintClass() const;
    
};

