#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AttributeSet.h"
#include "AirControlParams.h"
#include "EFortAILODLevel.h"
#include "Templates/SubclassOf.h"
#include "WaterControlParams.h"
#include "WaterJumpParams.h"
#include "WaterSprintBoostParams.h"
#include "FortMovementComp_Character.generated.h"

class AFortPawn;
class IFortAthenaAILODSettings;
class UFortAthenaAILODSettings;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMovementComp_Character : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandHardSoundFallSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandSoundFallSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPawn> PushBumpedPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSmoothingVisibilityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NetworkSmoothingThrottleProxyUpdateForPawnLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSmoothingViewAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSmoothingViewAngleThresholdSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkSmoothingNoThrottleWithinDistanceInMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerLodRequiredForFloorCheckWhenRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILODLevel AILodRequiredForFloorCheckWhenRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelocityBasedStrafeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelocityBasedTurnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VelocityBasedBackupCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasUsingVelocityBasedTurnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationYawRateToRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FallingSlopeSafeSlideAngleScalable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FallingSlopeSafeSlideMaxSpeedScalable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FallingSlopeDamageScalarMinScalable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FallingSlopeSafeSlideAngleCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FallingSlopeSafeSlideNormalZ;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams SkydivingControlParamsPassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams SkydivingControlParamsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams ParachuteControlParamsSkydive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams ParachuteControlParamsJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams ParachuteControlParamsGliderRedeploy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams BalloonControlParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams FloatingControlParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams VortexSkydivingControlParamsPassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams VortexSkydivingControlParamsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams VortexSkydivingControlParamsActiveUpward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams VortexParachuteControlParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams SkyTubeSkydivingControlParamsPassive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams SkyTubeSkydivingControlParamsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirControlParams SkyTubeSkydivingControlParamsActiveUpward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SkyTubeUpwardAccelerationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SkyTubeDownwardAccelerationScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterControlParams SurfaceSwimmingWaterControlParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterJumpParams WaterJumpParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterJumpParams WaterJumpParamsSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeWaterSplineDataOnSimulatedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterSprintBoostParams WaterSprintBoostParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkydivingMaxSmoothUpdateDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideTimeUntilReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideIfVelocityLessThanZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GravityCeilingRelation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentZiplineVelocityDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GracePeriodToConnectToZipline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FallingStartedZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CustomFallingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ReplicatedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTriggeredFallingFeedbackSinceLanded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdatesFloorWhenNotInFullSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortAthenaAILODSettings> CachedLODSettingsManager;
    
public:
    UFortMovementComp_Character();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassivelySkydiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassivelyParachuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelyStrafingInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydivingUpInVortex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelySkydiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivelyParachuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterSurfaceNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWaterSurfaceLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterImmersionDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerRelativeVelocityToWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallingStartedZ() const;
    
};

