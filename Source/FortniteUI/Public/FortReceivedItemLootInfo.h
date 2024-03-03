#pragma once
#include "CoreMinimal.h"
#include "FortItemHeaderInformation.h"
#include "FortReceivedItemLootInfo.generated.h"

class UFortItem;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortReceivedItemLootInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemHeaderInformation HeaderInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* GeneratedItemInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FORTNITEUI_API FFortReceivedItemLootInfo();
};

