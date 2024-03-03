#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "WaterBody.h"
#include "FortCurieInterface.h"
#include "FortWaterBodyActor.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWaterBodyActor : public AWaterBody, public IFortCurieInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityRemapInputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityRemapOutputRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterVelocityPerpendicularBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterOverrideMaxCharacterForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaterPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwamp;
    
public:
    AFortWaterBodyActor();
    UFUNCTION(BlueprintCallable)
    void SetSwampLocationAndRadius(const FVector& InPosition, float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedBulletImpact(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerExitedWaterBody(AFortPlayerPawn* Player, bool bIsLastBody);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEnteredWaterBody(AFortPlayerPawn* Player, bool bIsFirstBody);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterVelocityAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWaterSurfaceInfo(FVector QueryLocation, FVector& WaterPlaneLocation, FVector& WaterPlaneNormal, FVector& WaterSurfacePosition, float& WaterDepth, int32& WaterBodyIdx, FVector& WaterVelocity, bool bIncludeDepth, bool bIncludeWaves) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

