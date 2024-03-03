#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateBrush.h"
#include "CommonBorderStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonBorderStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Background;
    
    UCommonBorderStyle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBackgroundBrush(FSlateBrush& Brush) const;
    
};

