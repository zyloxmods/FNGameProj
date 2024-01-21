#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRetargetAsset.h"
#include "FacialLiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class UFacialLiveLinkRemapAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractBoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtractCurve;
    
    UFacialLiveLinkRemapAsset();
};

