#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ECreativeMinimapComponentIconColorType.h"
#include "CreativeMinimapComponentIconColorOverride.generated.h"

UCLASS(Blueprintable)
class UCreativeMinimapComponentIconColorOverride : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECreativeMinimapComponentIconColorType, FLinearColor> Colors;
    
    UCreativeMinimapComponentIconColorOverride();
};

