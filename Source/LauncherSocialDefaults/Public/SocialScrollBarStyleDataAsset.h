#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateTypes.h"
#include "SocialScrollBarStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialScrollBarStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle Style;
    
    USocialScrollBarStyleDataAsset();
};

