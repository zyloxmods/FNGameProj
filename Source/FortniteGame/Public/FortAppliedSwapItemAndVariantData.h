#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortAppliedSwapItemAndVariantState.h"
#include "FortSwapItemAndVariantData.h"
#include "FortAppliedSwapItemAndVariantData.generated.h"

USTRUCT(BlueprintType)
struct FFortAppliedSwapItemAndVariantData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SwapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAppliedSwapItemAndVariantState SwapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSwapItemAndVariantData> SwapData;
    
    FORTNITEGAME_API FFortAppliedSwapItemAndVariantData();
};

