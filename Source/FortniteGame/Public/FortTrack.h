#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BuildingProp.h"
#include "FortTrackGraphChangedDelegate.h"
#include "TrackConnectorMeshConfig.h"
#include "FortTrack.generated.h"

class AFortTrack;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;
class USplineComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortTrack : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTrackGraphChanged OnTrackGraphChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToggleSwitchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToggleInteractTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrackPieceMeshesByType[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFloorMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrackFloorMeshesByVerticality[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackConnectorMeshConfig> ConnectorMeshConfigs;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_NeighborsByDirection, meta=(AllowPrivateAccess=true))
    AFortTrack* NeighborsByDirection[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SwitchState, meta=(AllowPrivateAccess=true))
    int32 SwitchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ConfigurationIdx, meta=(AllowPrivateAccess=true))
    int32 ConfigurationIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer FloorCollisionResponseContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrackMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrackFloorMeshComp;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ConnectorMeshCompsByDirection[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlacementCollision1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlacementCollision2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComp2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SwitchCompBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SwitchComp;
    
public:
    AFortTrack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSwitchStateChanged(int32 NewSwitchState, int32 OldSwitchState, int32 NumSwitchStates);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SwitchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NeighborsByDirection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConfigurationIdx();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnConfigurationChanged(int32 NewConfigurationIdx, int32 OldConfigurationIdx);
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectedToTrackList(const TArray<AFortTrack*>& TargetTracks);
    
    UFUNCTION(BlueprintCallable)
    bool IsConnectedToTrack(AFortTrack* TargetTrack);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTrack(UPrimitiveComponent* InSwitchComp);
    
    UFUNCTION(BlueprintCallable)
    void GetSplineFromPositionAndOrientation(const FVector& InLocation, const FRotator& InRotation, USplineComponent*& OutSpline, float& OutDistanceAlongSpline, bool& OutReverseDirection);
    
    UFUNCTION(BlueprintCallable)
    void GetSplineFromIncomingNeighbor(AFortTrack* InNeighbor, USplineComponent*& OutSpline, bool& OutReverseDirection);
    
    UFUNCTION(BlueprintCallable)
    float GetPathDistanceToTrack(AFortTrack* TargetTrack, USplineComponent* InCurrentSpline, float CurrentDistanceAlongSpline, bool InReverseDirection);
    
    UFUNCTION(BlueprintCallable)
    void GetOutgoingNeighborFromSpline(USplineComponent* InSpline, bool InReverseDirection, AFortTrack*& OutNeighbor);
    
};

