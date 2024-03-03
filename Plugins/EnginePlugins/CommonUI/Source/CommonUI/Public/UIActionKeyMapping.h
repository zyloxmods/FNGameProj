#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UIActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FUIActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    COMMONUI_API FUIActionKeyMapping();
};

