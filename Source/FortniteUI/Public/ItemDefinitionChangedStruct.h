#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionChangedDelegateDelegate.h"
#include "ItemDefinitionChangedStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemDefinitionChangedStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDefinitionChangedDelegate ChangeDelegate;
    
    FORTNITEUI_API FItemDefinitionChangedStruct();
};

