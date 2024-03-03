#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "DirectiveInput.generated.h"

USTRUCT(BlueprintType)
struct FDirectiveInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ABTestingTexts;
    
    FORTNITEGAME_API FDirectiveInput();
};

