#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialStyle.h"
#include "FortSocialStyle.generated.h"

class USocialStyleDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UFortSocialStyle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialStyle Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialStyleDataAsset* OverrideStyle;
    
    UFortSocialStyle();
};

