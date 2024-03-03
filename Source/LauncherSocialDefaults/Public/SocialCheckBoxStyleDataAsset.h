#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateTypes.h"
#include "SocialCheckBoxStyleDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialCheckBoxStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle Style;
    
    USocialCheckBoxStyleDataAsset();
};

