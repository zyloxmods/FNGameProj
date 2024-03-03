#pragma once
#include "CoreMinimal.h"
#include "EFortItemShopSection.h"
#include "AthenaItemShopSectionOverrideDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FAthenaItemShopSectionOverrideDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemShopSection Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoSectionTab;
    
    FORTNITEGAME_API FAthenaItemShopSectionOverrideDisplayData();
};

