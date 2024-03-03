#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESplineWaterAudioFacingDirection.h"
#include "FortSplineAudioComponent.h"
#include "SplineWaterAudioZone.h"
#include "FortSplineWaterAudioComponent.generated.h"

class AFortWaterBodyActor;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSplineWaterAudioComponent : public UFortSplineAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* InsideSplineSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SplineEndSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplineWaterAudioFacingDirection SplineFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExclusionSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WaterVelocityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShorelineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalDistanceToCheckInside;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortWaterBodyActor* WaterBodyOwner;
    
public:
    UFortSplineWaterAudioComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateAudioZones(const TArray<FSplineWaterAudioZone>& NewZones);
    
};

