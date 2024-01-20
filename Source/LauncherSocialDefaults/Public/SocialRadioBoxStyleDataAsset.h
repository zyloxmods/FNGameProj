#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateTypes.h"
#include "SocialRadioBoxStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialRadioBoxStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle Style;
    
    USocialRadioBoxStyleDataAsset();
};

