#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChatColorScheme.h"
#include "ChatColorSchemeDataAsset.generated.h"

UCLASS(Blueprintable)
class UChatColorSchemeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatColorScheme ChatColorData;
    
    UChatColorSchemeDataAsset();
};

