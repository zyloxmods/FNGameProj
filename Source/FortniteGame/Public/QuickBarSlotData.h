#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "QuickBarSlotData.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FQuickBarSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> AcceptedItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> DefaultItem;
    
    FQuickBarSlotData();
};

