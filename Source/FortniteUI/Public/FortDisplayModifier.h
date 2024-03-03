#pragma once
#include "CoreMinimal.h"
#include "EFortBuffState.h"
#include "EFortStatValueDisplayType.h"
#include "FortDisplayModifier.generated.h"

USTRUCT(BlueprintType)
struct FFortDisplayModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortStatValueDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBuffState BuffState;
    
    FORTNITEUI_API FFortDisplayModifier();
};

