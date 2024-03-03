#pragma once
#include "CoreMinimal.h"
#include "FortResurrectionUIData.generated.h"

USTRUCT(BlueprintType)
struct FFortResurrectionUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResurrectionChipAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResurrectionChipPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResurrectionChipRebooting;
    
    FORTNITEUI_API FFortResurrectionUIData();
};

