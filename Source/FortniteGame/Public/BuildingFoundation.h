#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "BuildingFoundationStreamingData.h"
#include "BuildingSMActor.h"
#include "DynamicBuildingFoundationRepData.h"
#include "EBuildingFoundationType.h"
#include "EDynamicFoundationEnabledState.h"
#include "EDynamicFoundationType.h"
#include "BuildingFoundation.generated.h"

class AActor;
class ABuildingFoundation;
class AFortHLODSMActor;
class ALODActor;
class UBuildingGroup;
class ULevelStreaming;
class UWorld;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API ABuildingFoundation : public ABuildingSMActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingGroup*> BuildingGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> AdditionalWorlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildingDeconstructorOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildingDeconstructorExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConditionalFoundation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerStreamedInLevel, meta=(AllowPrivateAccess=true))
    uint8 bServerStreamedInLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowHLODWhenDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideNavigationGraphCells: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasExcludedZone: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceDitheringTransition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bStreamingDataBasedBounds: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDynamicFoundationEnabledState FoundationEnabledState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicFoundationType DynamicFoundationType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingFoundationType> FoundationType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavExclusionMinX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavExclusionMaxX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavExclusionMinY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavExclusionMaxY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox StreamingBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LevelToStream, meta=(AllowPrivateAccess=true))
    FName LevelToStream;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BuildingGroupFilter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MapLocationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LandIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LandIconWorldOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapLocationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapLocationTextOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBuildingFoundationStreamingData StreamingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortHLODSMActor*> SpawnedLODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> SpawnedLODActorsMinDrawDistances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortHLODSMActor*> ChildSpawnedLODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALODActor*> HLODActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFoundation* ParentFoundation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProxyMeshMaxDrawDistanceMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* LevelStreamInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DynamicFoundationRepData, meta=(AllowPrivateAccess=true))
    FDynamicBuildingFoundationRepData DynamicFoundationRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform DynamicFoundationTransform;
    
public:
    ABuildingFoundation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDynamicFoundationTransform(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDynamicFoundationEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerStreamedInLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LevelToStream();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicFoundationRepData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLevelStreamedIn();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
public:
    UFUNCTION(BlueprintCallable)
    bool EditorOnlyUnloadPreviewLevel();
    
    UFUNCTION(BlueprintCallable)
    bool EditorOnlyRemoveAdditionalWorld(UPARAM(Ref) FString& LevelToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool EditorOnlyLoadPreviewLevel(bool bCreateLevelInstance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> EditorOnlyGetAdditionalWorlds();
    
    UFUNCTION(BlueprintCallable)
    static void EditorOnlyExitBatchPreview();
    
    UFUNCTION(BlueprintCallable)
    static void EditorOnlyEnterBatchPreview();
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlyClearAdditionalWorlds();
    
    UFUNCTION(BlueprintCallable)
    bool EditorOnlyAddTransformToPreviewLevel(const FTransform& DeltaTransform);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnlyAddAdditionalWorld(UPARAM(Ref) FString& LevelPackageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool DoesBuildingFoundationContainActor(AActor* Actor) const;
    
};

