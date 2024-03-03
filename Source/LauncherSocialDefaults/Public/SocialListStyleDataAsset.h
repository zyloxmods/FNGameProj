#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialListStyle.h"
#include "SocialListStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialListStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialListStyle Style;
    
    USocialListStyleDataAsset();
};

