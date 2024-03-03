#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "CurieEntityStateDefinitionBase.generated.h"

class UCurieEntityStateBehavior;

USTRUCT(BlueprintType)
struct CURIE_API FCurieEntityStateDefinitionBase : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCurieEntityStateBehavior> StateBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
public:
    FCurieEntityStateDefinitionBase();
};

