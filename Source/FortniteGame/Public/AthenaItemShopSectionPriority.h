#pragma once
#include "CoreMinimal.h"
#include "EFortItemShopSection.h"
#include "AthenaItemShopSectionPriority.generated.h"

USTRUCT(BlueprintType)
struct FAthenaItemShopSectionPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemShopSection Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FORTNITEGAME_API FAthenaItemShopSectionPriority();
};

