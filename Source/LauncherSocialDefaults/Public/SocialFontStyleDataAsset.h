#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialFontStyle.h"
#include "SocialFontStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialFontStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialFontStyle Style;
    
    USocialFontStyleDataAsset();
};

