#pragma once
#include "CoreMinimal.h"
#include "UnlockableVariantPreviewInfo.generated.h"

USTRUCT(BlueprintType)
struct FUnlockableVariantPreviewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockCondition;
    
    FORTNITEUI_API FUnlockableVariantPreviewInfo();
};

