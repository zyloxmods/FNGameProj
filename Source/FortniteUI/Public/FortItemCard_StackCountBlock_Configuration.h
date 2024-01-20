#pragma once
#include "CoreMinimal.h"
#include "FortItemCard_StackCountBlock_Configuration.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct FFortItemCard_StackCountBlock_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowShorthandStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> TextStyle;
    
    FORTNITEUI_API FFortItemCard_StackCountBlock_Configuration();
};

