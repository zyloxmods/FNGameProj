#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateTypes.h"
#include "SocialActionButtonStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialActionButtonStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Style;
    
    USocialActionButtonStyleDataAsset();
};

