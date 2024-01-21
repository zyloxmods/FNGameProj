#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialListMargins.h"
#include "SocialListMarginsDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialListMarginsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialListMargins Style;
    
    USocialListMarginsDataAsset();
};

