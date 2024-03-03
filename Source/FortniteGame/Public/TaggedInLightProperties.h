#pragma once
#include "CoreMinimal.h"
#include "LightProperty_Color.h"
#include "TaggedInLightProperties.generated.h"

USTRUCT(BlueprintType)
struct FTaggedInLightProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightProperty_Color ColorSubstitute;
    
    FORTNITEGAME_API FTaggedInLightProperties();
};

