#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortFootstepSurfaceAudioData.h"
#include "FortFootstepSurfaceInfo.h"
#include "FortFootstepSurfaceData.generated.h"

UCLASS(Blueprintable)
class UFortFootstepSurfaceData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFootstepSurfaceAudioData Surface1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFootstepSurfaceAudioData Surface3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchMaxBelow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchMaxAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalPitchTileRange;
    
    UFortFootstepSurfaceData();
    UFUNCTION(BlueprintCallable)
    void GetSurfaceInfo(FFortFootstepSurfaceInfo& OutInfo, bool bUse1PFootsteps) const;
    
};

