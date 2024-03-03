#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Border.h"
#include "Templates/SubclassOf.h"
#include "CommonBorder.generated.h"

class UCommonBorderStyle;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonBorder : public UBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReducePaddingBySafezone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MinimumPadding;
    
    UCommonBorder();
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonBorderStyle> InStyle);
    
};

