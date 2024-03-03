#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightProperty_Color.generated.h"

USTRUCT(BlueprintType)
struct FLightProperty_Color {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingSRGB;
    
    FORTNITEGAME_API FLightProperty_Color();
};

