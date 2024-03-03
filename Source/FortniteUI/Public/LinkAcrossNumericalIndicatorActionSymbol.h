#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENumericalIndicatorActionType.h"
#include "LinkAcrossNumericalIndicatorActionSymbol.generated.h"

USTRUCT(BlueprintType)
struct FLinkAcrossNumericalIndicatorActionSymbol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericalIndicatorActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActionColor;
    
    FORTNITEUI_API FLinkAcrossNumericalIndicatorActionSymbol();
};

