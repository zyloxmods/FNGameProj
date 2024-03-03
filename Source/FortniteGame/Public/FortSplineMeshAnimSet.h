#pragma once
#include "CoreMinimal.h"
#include "FortSplineMeshScaleAnimationInfo.h"
#include "FortSplineMeshSnapAnimationInfo.h"
#include "FortSplineMeshAnimSet.generated.h"

class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FFortSplineMeshAnimSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortSplineMeshScaleAnimationInfo> ScaleAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortSplineMeshSnapAnimationInfo> SnapAnims;
    
    FORTNITEGAME_API FFortSplineMeshAnimSet();
};

